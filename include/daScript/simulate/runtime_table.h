#pragma once

#include "daScript/misc/arraytype.h"
#include "daScript/simulate/hash.h"

namespace das
{

    // TODO:
    //  -   return correct insert index of original value? is this at all possible?
    //  -   throw runtime error in the context, when grow inside locked table (recover well)

    extern const char * rts_null;

    template <typename KeyType>
    struct KeyCompare {
        __forceinline bool operator () ( const KeyType & a, const KeyType & b ) {
            return a == b;
        }
    };

    template <>
    struct KeyCompare <char *> {
        __forceinline bool operator () ( const char * a, const char * b ) {
            if ( a==b ) return true;
            if ( !a || !b ) return false;
            return strcmp(a,b)==0;
        }
    };

    template <>
    struct KeyCompare <const char *> {
        __forceinline bool operator () ( const char * a, const char * b ) {
            if ( a==b ) return true;
            if ( !a || !b ) return false;
            return strcmp(a,b)==0;
        }
    };

    template <typename KeyType>
    class TableHash {
        Context *   context = nullptr;
        uint32_t    valueTypeSize = 0;
        enum {
            minCapacity = 8,
            minLookups = 4
        };
    public:
        TableHash () = delete;
        TableHash ( const TableHash & ) = delete;
        TableHash ( Context * ctx, uint32_t vs ) : context(ctx), valueTypeSize(vs) {}

        __forceinline int find ( const Table & tab, KeyType key, uint64_t hash ) const {
            if ( tab.capacity==0 ) return -1;
            uint32_t mask = tab.capacity - 1;
            uint32_t index = hash & mask;
            auto pKeys = (const KeyType *) tab.keys;
            auto pHashes = tab.hashes;
            while ( true ) {
                auto kh = pHashes[index];
                if ( kh==HASH_EMPTY64 ) {
                    return -1;
                } else if ( kh==hash && KeyCompare<KeyType>()(pKeys[index],key) ) {
                    return (int) index;
                }
                index = (index + 1) & mask;
            }
        }

        __forceinline int insertNew ( Table & tab, uint64_t hash ) const {
            // TODO: take key under account and be less aggressive?
            uint32_t mask = tab.capacity - 1;
            uint32_t index = hash & mask;
            auto pHashes = tab.hashes;
            while ( true ) {
                auto kh = pHashes[index];
                if ( kh==HASH_EMPTY64 ) {
                    return (int) index;
                }
                index = (index + 1) & mask;
            }
        }

        __forceinline int reserve ( Table & tab, KeyType key, uint64_t hash ) {
            if ( tab.size >= (tab.capacity/2) ) grow(tab);
            uint32_t mask = tab.capacity - 1;
            uint32_t index = hash & mask;
            uint32_t insertI = -1u;
            auto pKeys = (KeyType *) tab.keys;
            auto pHashes = tab.hashes;
            while ( true ) {
                auto kh = pHashes[index];
                if (kh == HASH_EMPTY64 ) {
                    if ( tab.isLocked() ) context->throw_error("can't insert into locked table");
                    if ( insertI != -1u ) index = insertI;
                    pHashes[index] = hash;
                    pKeys[index] = key;
                    tab.size++;
                    return (int)index;
                } else if (kh == HASH_KILLED64) {
                    if ( insertI == -1u ) insertI = index;
                } else if (kh == hash && KeyCompare<KeyType>()(pKeys[index], key)) {
                    return (int)index;
                }
                index = (index + 1) & mask;
            }
        }

        __forceinline int erase ( Table & tab, KeyType key, uint64_t hash ) {
            if ( tab.capacity==0 ) return -1;
            uint32_t mask = tab.capacity - 1;
            uint32_t index = hash & mask;
            auto pKeys = (const KeyType *) tab.keys;
            auto pHashes = tab.hashes;
            while ( true ) {
                auto kh = pHashes[index];
                if ( kh==HASH_EMPTY64 ) {
                    return -1;
                } else if ( kh==hash && KeyCompare<KeyType>()(pKeys[index],key) ) {
                    tab.size--;
                    pHashes[index] = HASH_KILLED64;
                    memset(tab.data + index*valueTypeSize, 0, valueTypeSize);
                    return (int) index;
                }
                index = (index + 1) & mask;
            }
        }

        bool grow ( Table & tab ) {
            uint32_t newCapacity = das::max(uint32_t(minCapacity), tab.capacity*2);
            return reserveInternal(tab, newCapacity);
        }

        bool reserve(Table & tab, int size) {
            if (size <= tab.capacity)
              return true;

            uint32_t newCapacity = das::max(uint32_t(minCapacity), tab.capacity*2);
            while (newCapacity < size)
            {
              newCapacity *= 2;
            }

            return reserveInternal(tab, newCapacity);
        }

    private:
        bool reserveInternal(Table & tab, uint32_t newCapacity) {
            DAS_VERIFYF((newCapacity & (newCapacity) - 1) == 0, "newCapacity must be power of 2, and not %i", int(newCapacity));
            Table newTab;
            uint64_t memSize64 = uint64_t(newCapacity) * (uint64_t(valueTypeSize) + uint64_t(sizeof(KeyType)) + uint64_t(sizeof(uint64_t)));
            if ( memSize64>=0xffffffff ) {
                context->throw_error_ex("can't grow table, out of index space [capacity=%i]", newCapacity);
                return false;

            }
            uint32_t memSize = uint32_t(memSize64);
            newTab.data = (char *) context->heap->allocate(memSize);
            context->heap->mark_comment(newTab.data, "table");
            if ( !newTab.data ) {
                context->throw_error("can't grow table, out of heap");
                return false;
            }
            newTab.keys = newTab.data + newCapacity * valueTypeSize;
            newTab.hashes = (uint64_t *)(newTab.keys + newCapacity * sizeof(KeyType));
            newTab.size = tab.size;
            newTab.capacity = newCapacity;
            newTab.lock = tab.lock;
            newTab.flags = tab.flags;
            if ( valueTypeSize ) memset(newTab.data, 0, size_t(newCapacity)*size_t(valueTypeSize));
            auto pHashes = newTab.hashes;
            memset(pHashes, 0, newCapacity * sizeof(uint64_t));
            if ( tab.size ) {
                auto pKeys = (KeyType *) newTab.keys;
                auto pOldValues = tab.data;
                auto pValues = newTab.data;
                auto pOldKeys = (const KeyType *) tab.keys;
                auto pOldHashes = tab.hashes;
                for ( uint32_t i=0, is=tab.capacity; i!=is; ++i ) {
                    auto hash = pOldHashes[i];
                    if ( hash>HASH_KILLED64 ) {
                        int index = insertNew(newTab, hash);
                        pHashes[index] = hash;
                        pKeys[index] = pOldKeys[i];
                        memcpy ( pValues + index*valueTypeSize, pOldValues + i*valueTypeSize, valueTypeSize );
                    }
                }
            }
            if (tab.capacity) {
                uint32_t oldSize = tab.capacity*(valueTypeSize + sizeof(KeyType) + sizeof(uint64_t));
                context->heap->free(tab.data, oldSize);
            }
            swap ( newTab, tab );
            return true;
        }
    };
}



