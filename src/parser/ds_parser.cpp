/* A Bison parser, made by GNU Bison 3.4.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         DAS_YYSTYPE
#define YYLTYPE         DAS_YYLTYPE
/* Substitute the variable and function names.  */
#define yyparse         das_yyparse
#define yylex           das_yylex
#define yyerror         das_yyerror
#define yydebug         das_yydebug
#define yynerrs         das_yynerrs

#define yylval          das_yylval
#define yychar          das_yychar
#define yylloc          das_yylloc

/* First part of user prologue.  */
#line 56 "ds_parser.ypp"

	#include "daScript/misc/platform.h"
	#include "daScript/simulate/debug_info.h"
	#include "daScript/ast/compilation_errors.h"

	#ifdef _MSC_VER
	#pragma warning(disable:4262)
	#pragma warning(disable:4127)
	#pragma warning(disable:4702)
	#endif

    using namespace das;

    void das_yyerror (const string & error);
    void das_yyfatalerror (const string & error, das::CompilationError cerr = das::CompilationError::syntax_error);
    void das_yyerror (const string & error, const das::LineInfo & at, das::CompilationError cerr = das::CompilationError::unspecified);
	void das_checkName(const string & name, const LineInfo &at);
    int yylex();
    void yybegin(const char * str);

#line 102 "ds_parser.cpp"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_DAS_YY_DS_PARSER_HPP_INCLUDED
# define YY_DAS_YY_DS_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef DAS_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define DAS_YYDEBUG 1
#  else
#   define DAS_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define DAS_YYDEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined DAS_YYDEBUG */
#if DAS_YYDEBUG
extern int das_yydebug;
#endif
/* "%code requires" blocks.  */
#line 2 "ds_parser.ypp"

	#include "daScript/misc/platform.h"
	#include "daScript/ast/ast.h"
    #include "daScript/ast/ast_generate.h"
    #include "daScript/ast/ast_expressions.h"

    enum {
        CorM_COPY   = 0,
        CorM_MOVE   = (1<<0),
        CorM_CLONE  = (1<<1)
    };

    namespace das {
        extern ProgramPtr			    g_Program;
        extern FileAccessPtr            g_Access;
        extern vector<FileInfo *>	    g_FileAccessStack;
        extern das_map<string,string>   das_module_alias;
    }
    using namespace das;

    struct VariableDeclaration {
        VariableDeclaration ( vector<pair<string,LineInfo>> * n, TypeDecl * t, Expression * i )
            : pNameList(n), pTypeDecl(t), pInit(i) {}
        virtual ~VariableDeclaration () {
            if ( pNameList ) delete pNameList;
            delete pTypeDecl;
            if ( pInit ) delete pInit;
            if ( annotation ) delete annotation;
        }
        vector<pair<string,LineInfo>>   *pNameList;
        TypeDecl                *pTypeDecl;
        Expression              *pInit;
        bool                    init_via_move = false;
        bool                    init_via_clone = false;
        bool                    override = false;
        AnnotationArgumentList  *annotation = nullptr;
    };

    ExprLooksLikeCall * parseFunctionArguments ( ExprLooksLikeCall * pCall, Expression * arguments );
    vector<ExpressionPtr> sequenceToList ( Expression * arguments );
    void deleteVariableDeclarationList ( vector<VariableDeclaration *> * list );
    void varDeclToTypeDecl ( TypeDecl * pType, vector<VariableDeclaration*> * list, bool needNames = false );

    LineInfo tokAt ( const struct YYLTYPE & li );
    LineInfo tokRangeAt ( const struct YYLTYPE & li, const struct YYLTYPE & lie );

    Annotation * findAnnotation ( const string & name, const LineInfo & at );

    extern bool das_need_oxford_comma;
    extern bool das_force_oxford_comma;
    extern bool das_supress_errors;
    extern int das_arrow_depth;

#line 198 "ds_parser.cpp"

/* Token type.  */
#ifndef DAS_YYTOKENTYPE
# define DAS_YYTOKENTYPE
  enum das_yytokentype
  {
    LEXER_ERROR = 258,
    DAS_STRUCT = 259,
    DAS_LET = 260,
    DAS_DEF = 261,
    DAS_WHILE = 262,
    DAS_IF = 263,
    DAS_STATIC_IF = 264,
    DAS_ELSE = 265,
    DAS_FOR = 266,
    DAS_CATCH = 267,
    DAS_TRUE = 268,
    DAS_FALSE = 269,
    DAS_NEWT = 270,
    DAS_TYPEINFO = 271,
    DAS_TYPE = 272,
    DAS_IN = 273,
    DAS_IS = 274,
    DAS_AS = 275,
    DAS_ELIF = 276,
    DAS_STATIC_ELIF = 277,
    DAS_ARRAY = 278,
    DAS_RETURN = 279,
    DAS_NULL = 280,
    DAS_BREAK = 281,
    DAS_TRY = 282,
    DAS_OPTIONS = 283,
    DAS_TABLE = 284,
    DAS_EXPECT = 285,
    DAS_CONST = 286,
    DAS_REQUIRE = 287,
    DAS_OPERATOR = 288,
    DAS_ENUM = 289,
    DAS_FINALLY = 290,
    DAS_DELETE = 291,
    DAS_DEREF = 292,
    DAS_SCOPE = 293,
    DAS_TYPEDEF = 294,
    DAS_WITH = 295,
    DAS_CAST = 296,
    DAS_OVERRIDE = 297,
    DAS_UPCAST = 298,
    DAS_ITERATOR = 299,
    DAS_VAR = 300,
    DAS_ADDR = 301,
    DAS_CONTINUE = 302,
    DAS_WHERE = 303,
    DAS_PASS = 304,
    DAS_REINTERPRET = 305,
    DAS_MODULE = 306,
    DAS_PUBLIC = 307,
    DAS_LABEL = 308,
    DAS_GOTO = 309,
    DAS_IMPLICIT = 310,
    DAS_SHARED = 311,
    DAS_SMART_PTR = 312,
    DAS_TBOOL = 313,
    DAS_TVOID = 314,
    DAS_TSTRING = 315,
    DAS_TAUTO = 316,
    DAS_TINT = 317,
    DAS_TINT2 = 318,
    DAS_TINT3 = 319,
    DAS_TINT4 = 320,
    DAS_TUINT = 321,
    DAS_TBITFIELD = 322,
    DAS_TUINT2 = 323,
    DAS_TUINT3 = 324,
    DAS_TUINT4 = 325,
    DAS_TFLOAT = 326,
    DAS_TFLOAT2 = 327,
    DAS_TFLOAT3 = 328,
    DAS_TFLOAT4 = 329,
    DAS_TRANGE = 330,
    DAS_TURANGE = 331,
    DAS_TBLOCK = 332,
    DAS_TINT64 = 333,
    DAS_TUINT64 = 334,
    DAS_TDOUBLE = 335,
    DAS_TFUNCTION = 336,
    DAS_TLAMBDA = 337,
    DAS_TINT8 = 338,
    DAS_TUINT8 = 339,
    DAS_TINT16 = 340,
    DAS_TUINT16 = 341,
    DAS_TTUPLE = 342,
    DAS_TVARIANT = 343,
    DAS_GENERATOR = 344,
    DAS_YIELD = 345,
    ADDEQU = 346,
    SUBEQU = 347,
    DIVEQU = 348,
    MULEQU = 349,
    MODEQU = 350,
    ANDEQU = 351,
    OREQU = 352,
    XOREQU = 353,
    SHL = 354,
    SHR = 355,
    ADDADD = 356,
    SUBSUB = 357,
    LEEQU = 358,
    SHLEQU = 359,
    SHREQU = 360,
    GREQU = 361,
    EQUEQU = 362,
    NOTEQU = 363,
    RARROW = 364,
    LARROW = 365,
    QQ = 366,
    QDOT = 367,
    QBRA = 368,
    LPIPE = 369,
    LBPIPE = 370,
    LAPIPE = 371,
    RPIPE = 372,
    CLONEEQU = 373,
    ROTL = 374,
    ROTR = 375,
    ROTLEQU = 376,
    ROTREQU = 377,
    MAPTO = 378,
    BRABRAB = 379,
    BRACBRB = 380,
    CBRCBRB = 381,
    INTEGER = 382,
    LONG_INTEGER = 383,
    UNSIGNED_INTEGER = 384,
    UNSIGNED_LONG_INTEGER = 385,
    FLOAT = 386,
    DOUBLE = 387,
    NAME = 388,
    BEGIN_STRING = 389,
    STRING_CHARACTER = 390,
    END_STRING = 391,
    BEGIN_STRING_EXPR = 392,
    END_STRING_EXPR = 393,
    UNARY_MINUS = 394,
    UNARY_PLUS = 395,
    PRE_INC = 396,
    PRE_DEC = 397,
    POST_INC = 398,
    POST_DEC = 399,
    DEREF = 400,
    COLCOL = 401
  };
#endif

/* Value type.  */
#if ! defined DAS_YYSTYPE && ! defined DAS_YYSTYPE_IS_DECLARED
union DAS_YYSTYPE
{
#line 83 "ds_parser.ypp"

    char                            ch;
    bool                            b;
    int32_t                         i;
    uint32_t                        ui;
    int64_t                         i64;
    uint64_t                        ui64;
    double                          d;
	double                          fd;
    string *                        s;
    vector<string> *                pNameList;
    vector<pair<string,LineInfo>> * pNameWithPosList;
    VariableDeclaration *           pVarDecl;
    vector<VariableDeclaration*> *  pVarDeclList;
    TypeDecl *                      pTypeDecl;
    Expression *                    pExpression;
    Type                            type;
    AnnotationArgument *            aa;
    AnnotationArgumentList *        aaList;
    AnnotationDeclaration *         fa;
    AnnotationList *                faList;
    MakeStruct *                    pMakeStruct;
    Enumeration *                   pEnum;
    Structure *                     pStructure;

#line 382 "ds_parser.cpp"

};
typedef union DAS_YYSTYPE DAS_YYSTYPE;
# define DAS_YYSTYPE_IS_TRIVIAL 1
# define DAS_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined DAS_YYLTYPE && ! defined DAS_YYLTYPE_IS_DECLARED
typedef struct DAS_YYLTYPE DAS_YYLTYPE;
struct DAS_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define DAS_YYLTYPE_IS_DECLARED 1
# define DAS_YYLTYPE_IS_TRIVIAL 1
#endif


extern DAS_YYSTYPE das_yylval;
extern DAS_YYLTYPE das_yylloc;
int das_yyparse (void);

#endif /* !YY_DAS_YY_DS_PARSER_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL \
             && defined DAS_YYSTYPE_IS_TRIVIAL && DAS_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6827

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  174
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  152
/* YYNRULES -- Number of rules.  */
#define YYNRULES  476
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  848

#define YYUNDEFTOK  2
#define YYMAXUTOK   401

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   156,     2,   173,   167,   152,   145,     2,
     165,   166,   150,   149,   139,   148,   161,   151,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   142,   170,
     146,   140,   147,   141,   168,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   163,     2,   164,   144,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   171,   143,   172,   155,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   153,   154,   157,   158,   159,   160,
     162,   169
};

#if DAS_YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   398,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   414,   426,   427,   431,   435,
     440,   449,   457,   473,   495,   499,   502,   508,   517,   538,
     561,   562,   566,   570,   571,   575,   578,   584,   590,   593,
     599,   600,   604,   605,   606,   615,   616,   620,   629,   644,
     654,   663,   664,   665,   666,   667,   668,   672,   677,   685,
     686,   687,   688,   689,   690,   691,   692,   698,   711,   727,
     728,   732,   739,   751,   755,   762,   763,   767,   768,   769,
     773,   778,   785,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822,   823,   824,   828,
     909,   912,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   936,   937,   938,   939,
     943,   948,   954,   960,   971,   977,   978,   989,   993,   999,
    1002,  1005,  1009,  1015,  1019,  1023,  1026,  1029,  1034,  1037,
    1045,  1048,  1053,  1056,  1064,  1070,  1071,  1075,  1076,  1080,
    1114,  1114,  1114,  1117,  1117,  1117,  1122,  1122,  1122,  1130,
    1134,  1139,  1145,  1149,  1154,  1163,  1166,  1172,  1173,  1180,
    1191,  1192,  1196,  1201,  1256,  1257,  1258,  1259,  1260,  1261,
    1265,  1266,  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,
    1275,  1276,  1277,  1278,  1279,  1280,  1284,  1285,  1289,  1300,
    1305,  1315,  1319,  1319,  1319,  1326,  1326,  1326,  1340,  1341,
    1342,  1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,
    1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1361,
    1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,  1371,
    1372,  1373,  1374,  1375,  1376,  1377,  1378,  1379,  1383,  1387,
    1390,  1393,  1394,  1395,  1396,  1401,  1406,  1407,  1410,  1413,
    1417,  1421,  1425,  1426,  1427,  1428,  1429,  1430,  1431,  1441,
    1451,  1506,  1507,  1511,  1512,  1516,  1524,  1527,  1534,  1539,
    1547,  1548,  1552,  1555,  1564,  1565,  1569,  1578,  1579,  1584,
    1585,  1589,  1595,  1601,  1604,  1608,  1614,  1623,  1624,  1625,
    1629,  1630,  1634,  1637,  1642,  1647,  1655,  1666,  1669,  1676,
    1677,  1681,  1708,  1708,  1720,  1723,  1732,  1745,  1757,  1758,
    1762,  1766,  1777,  1792,  1793,  1797,  1836,  1902,  1909,  1918,
    1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,  1927,  1928,
    1929,  1930,  1931,  1932,  1933,  1934,  1935,  1936,  1937,  1938,
    1939,  1940,  1941,  1942,  1946,  1947,  1948,  1949,  1950,  1951,
    1955,  1966,  1970,  1980,  1987,  1996,  1996,  1996,  2009,  2010,
    2011,  2012,  2013,  2027,  2033,  2037,  2042,  2047,  2052,  2057,
    2061,  2065,  2070,  2074,  2079,  2079,  2079,  2085,  2092,  2092,
    2092,  2097,  2097,  2097,  2103,  2103,  2103,  2108,  2112,  2112,
    2112,  2117,  2117,  2117,  2126,  2130,  2130,  2130,  2135,  2135,
    2135,  2144,  2148,  2148,  2148,  2153,  2153,  2153,  2162,  2162,
    2162,  2168,  2168,  2168,  2177,  2177,  2192,  2192,  2212,  2213,
    2214,  2215,  2219,  2226,  2235,  2240,  2247,  2252,  2258,  2264,
    2271,  2282,  2285,  2299,  2308,  2309,  2313,  2318,  2325,  2330,
    2341,  2346,  2353,  2365,  2366,  2370,  2387
};
#endif

#if DAS_YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"lexer error\"", "\"struct\"",
  "\"let\"", "\"def\"", "\"while\"", "\"if\"", "\"static_if\"", "\"else\"",
  "\"for\"", "\"recover\"", "\"true\"", "\"false\"", "\"new\"",
  "\"typeinfo\"", "\"type\"", "\"in\"", "\"is\"", "\"as\"", "\"elif\"",
  "\"static_elif\"", "\"array\"", "\"return\"", "\"null\"", "\"break\"",
  "\"try\"", "\"options\"", "\"table\"", "\"expect\"", "\"const\"",
  "\"require\"", "\"operator\"", "\"enum\"", "\"finally\"", "\"delete\"",
  "\"deref\"", "\"scope\"", "\"typedef\"", "\"with\"", "\"cast\"",
  "\"override\"", "\"upcast\"", "\"iterator\"", "\"var\"", "\"addr\"",
  "\"continue\"", "\"where\"", "\"pass\"", "\"reinterpret\"", "\"module\"",
  "\"public\"", "\"label\"", "\"goto\"", "\"implicit\"", "\"shared\"",
  "\"smart_ptr\"", "\"bool\"", "\"void\"", "\"string\"", "\"auto\"",
  "\"int\"", "\"int2\"", "\"int3\"", "\"int4\"", "\"uint\"",
  "\"bitfield\"", "\"uint2\"", "\"uint3\"", "\"uint4\"", "\"float\"",
  "\"float2\"", "\"float3\"", "\"float4\"", "\"range\"", "\"urange\"",
  "\"block\"", "\"int64\"", "\"uint64\"", "\"double\"", "\"function\"",
  "\"lambda\"", "\"int8\"", "\"uint8\"", "\"int16\"", "\"uint16\"",
  "\"tuple\"", "\"variant\"", "\"generator\"", "\"yield\"", "\"+=\"",
  "\"-=\"", "\"/=\"", "\"*=\"", "\"%=\"", "\"&=\"", "\"|=\"", "\"^=\"",
  "\"<<\"", "\">>\"", "\"++\"", "\"--\"", "\"<=\"", "\"<<=\"", "\">>=\"",
  "\">=\"", "\"==\"", "\"!=\"", "\"->\"", "\"<-\"", "\"??\"", "\"?.\"",
  "\"?[\"", "\"<|\"", "\" <|\"", "\"@ <|\"", "\"|>\"", "\":=\"", "\"<<<\"",
  "\">>>\"", "\"<<<=\"", "\">>>=\"", "\"=>\"", "\"[[\"", "\"[{\"",
  "\"{{\"", "\"integer constant\"", "\"long integer constant\"",
  "\"unsigned integer constant\"", "\"unsigned long integer constant\"",
  "\"floating point constant\"", "\"double constant\"", "\"name\"",
  "\"start of the string\"", "STRING_CHARACTER", "\"end of the string\"",
  "\"{\"", "\"}\"", "','", "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'",
  "'>'", "'-'", "'+'", "'*'", "'/'", "'%'", "UNARY_MINUS", "UNARY_PLUS",
  "'~'", "'!'", "PRE_INC", "PRE_DEC", "POST_INC", "POST_DEC", "'.'",
  "DEREF", "'['", "']'", "'('", "')'", "'$'", "'@'", "COLCOL", "';'",
  "'{'", "'}'", "'#'", "$accept", "program", "module_declaration",
  "character_sequence", "string_constant", "string_builder_body",
  "string_builder", "options_declaration", "require_declaration",
  "require_module_name", "require_module", "is_public_module",
  "expect_declaration", "expect_list", "expect_error", "expression_label",
  "expression_goto", "elif_or_static_elif", "expression_else",
  "if_or_static_if", "expression_if_then_else", "expression_for_loop",
  "expression_while_loop", "expression_with", "annotation_argument_value",
  "annotation_argument_value_list", "annotation_argument",
  "annotation_argument_list", "annotation_declaration_name",
  "annotation_declaration", "annotation_list", "optional_annotation_list",
  "optional_function_argument_list", "optional_function_type",
  "function_name", "function_declaration", "expression_block",
  "expression_any", "expressions", "expr_pipe", "name_in_namespace",
  "expression_delete", "expr_new", "expression_break",
  "expression_continue", "expression_return", "expression_yield",
  "expression_try_catch", "let_scope", "kwd_let", "expression_let",
  "expr_cast", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "expr_type_info",
  "expr_list", "block_or_simple_block", "block_or_lambda", "expr_block",
  "expr_numeric_const", "expr_assign", "expr_assign_pipe",
  "expr_named_call", "expr_method_call", "func_addr_expr", "$@7", "$@8",
  "$@9", "$@10", "expr", "optional_field_annotation", "optional_override",
  "structure_variable_declaration", "struct_variable_declaration_list",
  "function_argument_declaration", "function_argument_list", "tuple_type",
  "tuple_type_list", "variant_type", "variant_type_list", "copy_or_move",
  "variable_declaration", "copy_or_move_or_clone", "optional_ref",
  "let_variable_declaration", "global_variable_declaration_list",
  "optional_shared", "global_let", "$@11", "enum_list", "single_alias",
  "alias_list", "alias_declaration", "enum_declaration",
  "optional_structure_parent", "structure_name", "structure_declaration",
  "variable_name_with_pos_list", "basic_type_declaration",
  "enum_basic_type_declaration", "structure_type_declaration",
  "auto_type_declaration", "bitfield_bits", "bitfield_type_declaration",
  "$@12", "$@13", "type_declaration", "$@14", "$@15", "$@16", "$@17",
  "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26",
  "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "variant_alias_declaration", "$@38",
  "bitfield_alias_declaration", "$@39", "make_decl", "make_struct_fields",
  "make_struct_dim", "make_struct_decl", "make_tuple", "make_map_tuple",
  "make_any_tuple", "make_dim", "make_dim_decl", "make_table",
  "make_table_decl", "array_comprehension_where", "array_comprehension", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,    44,
      61,    63,    58,   124,    94,    38,    60,    62,    45,    43,
      42,    47,    37,   394,   395,   126,    33,   396,   397,   398,
     399,    46,   400,    91,    93,    40,    41,    36,    64,   401,
      59,   123,   125,    35
};
# endif

#define YYPACT_NINF -513

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-513)))

#define YYTABLE_NINF -436

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -513,    23,  -513,  -513,   -87,   -71,   -21,   -18,   -46,  -513,
      14,  -513,  -513,    -6,  -513,  -513,  -513,  -513,  -513,   158,
    -513,    99,  -513,  -513,  -513,  -513,  -513,  -513,   -74,  -513,
       5,    59,    61,  -513,  -513,    44,  -513,   -12,    35,  -513,
     128,   165,  -513,    39,   194,   177,  -513,    45,  -513,   219,
     -14,  -513,   184,     8,   -87,   239,   -71,   230,  -513,   241,
     246,  -513,   204,  -513,   229,  -513,   -97,   215,   217,   251,
    -513,   -87,    -6,  -513,   247,   220,  6671,   357,   359,  -513,
     237,  -513,   393,  -513,  -513,  -513,  -513,  -513,   260,    88,
    -513,  -513,  -513,  -513,   353,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,   243,   -92,  5639,  -513,  -513,   274,   275,
    -513,   -68,  -513,   -99,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -105,   268,   -91,   245,  -513,   181,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,    58,  -513,  -513,   -61,  -513,
     270,   271,   272,   277,  -513,  -513,  -513,   256,  -513,  -513,
    -513,  -513,  -513,   278,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,   279,  -513,  -513,  -513,   280,   281,  -513,
    -513,  -513,  -513,   282,   283,  -513,  -513,  -513,  -513,  -513,
      12,  -513,   261,   288,  -513,   262,  -513,  -513,   -58,   -87,
    -513,   -15,  -513,    86,  5639,   263,  -513,  -513,  -513,   190,
    -513,  -513,  -513,    88,  -513,   -83,  4439,  -513,  -513,  -513,
    -513,  -513,   300,  -513,   112,   138,   199,  -513,  -513,  -513,
    -513,  -513,   404,  -513,  -513,    16,  2441,  -513,  -513,   -81,
    5639,   -79,  -513,   394,   267,   101,   306,  -513,    78,  -513,
     284,  6538,  -513,  -513,   307,  5639,  -513,    -2,  -513,  -513,
    -513,  -513,  5562,   276,  -513,   286,   296,   297,   287,   298,
    -513,   299,  4439,  4439,   612,   825,  4439,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  4439,  4439,  4439,  4439,  4439,  4439,
    -513,   285,  -513,  -513,   -70,  -513,  -513,  -513,   292,  -513,
    -513,  -513,  -513,  -513,   818,   291,  -513,  -513,  -513,  -513,
    -513,  5639,  5639,  5639,  5639,   294,   274,  5639,   237,  5639,
     237,  5639,   237,  5716,   275,  -513,  -513,  -513,   293,  -513,
    -513,  5710,  -513,  -513,  6538,  -513,  -513,  -513,   306,  -513,
    -513,  -513,  -513,  -513,  5639,  -513,  2570,  -513,  1145,  -513,
    6588,  -513,  -513,  -513,  2570,  1754,  -513,   313,  4439,  -513,
    -513,  4439,  -513,  5639,   430,   430,   306,  1465,   306,  1610,
    6102,  -513,   102,   236,   430,   430,   -35,   430,   430,  5044,
      34,  -513,  2038,   237,    10,   315,  4439,  4439,  -513,  -513,
    4439,  4439,  4439,  4439,   325,  4439,   333,  4439,  4439,  4439,
    4439,  4439,  2708,  4439,  4439,  4439,  4439,  4439,  4439,  4439,
    4439,  4439,  4439,   334,  4439,  -513,  2837,    29,  1988,  2567,
    2658,  -513,   108,  2834,   268,  2925,   268,  3101,   268,    56,
    -513,   116,  6538,   124,  -513,  -513,  -513,  3773,   -22,  -513,
     363,  5933,  -513,  4439,  -513,  -513,   306,  1900,  -513,   263,
    4439,  4439,  -513,   310,   350,  2975,  2183,  -513,   451,   319,
     320,  4439,  -513,  -513,  -513,  -513,  -513,  -513,   321,   322,
     323,  -513,  -513,  -513,   478,  -513,   -84,  -513,  6037,   404,
    -513,  2570,  -513,   954,  3104,  2312,  5112,  5639,  5639,  5180,
    5639,  3192,    11,   -75,  1755,   336,  3242,  6102,   376,   -60,
     379,  -513,  -513,    46,    15,  3380,   205,   208,  4439,  4439,
     326,  -513,  4439,   366,  -513,   211,  -513,   369,  -513,    60,
    6305,   268,  5639,  -513,  -513,  6524,  6524,   248,   248,  6504,
    6504,   354,    20,  -513,  5787,   -64,   -64,  6524,  6524,   387,
    6171,  6370,  6439,   497,   248,   248,   689,   689,    20,    20,
      20,  -513,  5856,  -513,    65,  -513,  5639,  -513,  -513,  -513,
     388,  -513,   375,  -513,   377,  -513,   380,  5639,  -513,  5716,
    -513,   275,   404,  4439,  -513,  -513,   -22,  4439,  4439,  4439,
    4439,  4439,  4439,  4439,  4439,  4439,  4439,  4439,  4439,  4439,
    4439,  4439,   362,    26,  2570,  -513,  -513,  4523,   514,  6305,
     362,  -513,   386,   403,  6305,  2570,  -513,  4619,   364,  -513,
    -513,   362,  -513,  -513,  -513,   496,   306,  -513,  3518,  3647,
    -513,  4715,  -513,  -513,    75,  5639,   405,  5248,  -513,  3330,
    3468,  -513,  3775,   371,  4439,  4439,  -513,   369,   407,   373,
     369,  4439,   381,  4439,  4439,   369,   382,   384,  6305,  -513,
    -513,  6236,  5639,   237,   -27,   109,  4439,  -513,   -86,  6538,
    3776,  -513,  -513,  4439,  -513,  -513,  -513,  3864,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  6538,  -513,  -513,
    -513,  6305,  -513,  6305,  6305,  6305,  6305,  6305,  6305,  6305,
    6305,  6305,  6305,  6305,  6305,  6305,  6305,  6305,  -513,  4439,
    -513,  4811,  -513,   263,  -513,  -513,  -513,  -513,  4907,  -513,
    -513,   301,  -513,  -513,  4439,  4439,  -513,  -513,  4002,   161,
    -513,  -513,  -513,  -513,  3914,  -101,  6305,   145,   -27,  -513,
     376,  6305,  -513,  -513,   -67,   213,  -513,  -513,  -513,  4436,
     268,   383,  6305,  4052,  -513,  -513,  -513,   118,  6305,  -513,
    -513,  -513,  -513,   -63,  -513,  -513,  -513,  1317,   263,  -513,
    -513,  4439,  -513,   193,   193,  -513,  4181,   417,  4439,  4439,
    4439,  -513,  5316,  4439,   389,  4439,  4439,   390,  -513,   408,
    -513,  4439,  6305,  -513,  -513,   263,  -513,  -513,   362,  5639,
    5384,   409,   248,   248,   248,  -513,  4972,  -513,  6305,  4972,
    -513,   -99,  -513,  6305,  -513,   301,  5850,  -513,  4310,   503,
     396,   392,  -513,   -99,  -513,  -513,  5639,  5452,  4439,   397,
     398,  -513,  6518,  -513,  6305,  -513,  -513,  -513
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,    75,     1,   167,     0,     0,     0,     0,     0,   168,
       0,   446,   444,     0,    14,     3,    10,     9,     8,     0,
       7,   329,     6,    11,     5,     4,    12,    13,    65,    67,
      23,    35,    32,    33,    25,    30,    24,     0,     0,    15,
       0,     0,    70,   145,     0,    71,    73,     0,    69,     0,
       0,   330,   332,     0,     0,     0,     0,     0,    31,     0,
       0,    28,     0,   334,     0,   338,     0,     0,     0,     0,
     147,     0,     0,    76,   343,     0,     0,     0,     0,    82,
      77,   327,     0,    63,    64,    61,    62,    60,     0,     0,
      59,    68,    36,    34,    30,    27,    26,   374,   377,   375,
     378,   376,   379,     0,     0,     0,   340,   339,     0,     0,
     146,     0,    74,     0,   345,   296,    85,    86,    88,    87,
      89,    90,    91,    92,   111,   112,   109,   110,   102,   113,
     114,   103,   100,   101,   115,   116,   117,   118,   105,   106,
     104,    98,    99,    94,    93,    95,    96,    97,    84,    83,
     107,   108,   291,    80,     0,     0,    16,     0,    55,    56,
      53,    54,    52,    51,    57,     0,    29,   334,     0,   341,
       0,     0,     0,     0,   349,   369,   350,   381,   351,   355,
     356,   357,   358,   373,   362,   363,   364,   365,   366,   367,
     368,   370,   371,   417,   354,   361,   372,   424,   431,   352,
     359,   353,   360,     0,     0,   380,   388,   391,   389,   390,
       0,   383,     0,     0,   307,     0,    72,   344,   291,     0,
      78,     0,   300,     0,     0,     0,   347,   331,   328,   320,
     333,    17,    18,     0,    66,     0,     0,   335,   408,   411,
     414,   404,     0,   385,   418,   425,   432,   438,   441,   395,
     400,   407,     0,   403,   397,     0,     0,   337,   399,     0,
       0,     0,   346,   293,     0,     0,     0,   298,   311,    79,
     291,    81,   140,   119,     0,     0,   321,     0,    58,   342,
     233,   234,     0,     0,   228,     0,     0,     0,     0,     0,
     373,     0,     0,     0,     0,     0,     0,   194,   196,   195,
     197,   198,   199,    19,     0,     0,     0,     0,     0,     0,
     190,   191,   231,   192,   229,   284,   283,   282,    75,   287,
     230,   286,   285,   266,     0,     0,   232,   448,   449,   450,
     451,     0,     0,     0,     0,     0,     0,     0,    77,     0,
      77,     0,    77,     0,     0,   402,   396,   398,     0,   401,
     393,     0,   384,   447,   306,   445,   308,   294,     0,   297,
     292,   299,   310,   309,     0,   312,     0,   301,     0,   348,
       0,   318,   319,   317,     0,   149,   152,     0,     0,   170,
     173,     0,   176,     0,   257,   258,     0,     0,     0,     0,
       0,   470,     0,     0,   238,   237,   271,   236,   235,     0,
       0,   290,     0,    77,     0,     0,     0,     0,   259,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
       0,   382,     0,     0,    80,     0,    80,     0,    80,   145,
     304,     0,   302,     0,   394,   392,   295,   313,     0,   316,
       0,   315,   142,     0,    45,    46,     0,     0,   153,     0,
       0,     0,   154,     0,     0,     0,     0,   122,   120,     0,
       0,     0,   135,   130,   128,   129,   141,   123,     0,     0,
       0,   133,   134,   136,   165,   127,     0,   124,   200,   317,
     322,     0,   326,   200,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,     0,     0,     0,   461,   454,     0,
     464,   465,   466,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,    20,   261,   222,   221,     0,   267,     0,
     185,    80,     0,   279,   280,   239,   240,   252,   253,   250,
     251,     0,   276,   265,     0,   288,   289,   241,   242,     0,
       0,   255,   256,   254,   248,   249,   244,   243,   245,   246,
     247,   264,     0,   269,     0,   409,     0,   415,   405,   386,
       0,   419,     0,   426,     0,   433,     0,     0,   439,     0,
     442,     0,   309,     0,   191,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,   158,   200,     0,   148,
       0,   139,     0,     0,    39,     0,   162,   200,     0,   137,
     138,     0,   126,   131,   132,     0,     0,   125,     0,     0,
     324,   200,   325,   150,     0,     0,     0,     0,   272,     0,
       0,   273,     0,     0,     0,     0,   457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,   471,
     472,     0,     0,    77,     0,     0,     0,   268,     0,   278,
       0,   263,   281,     0,   262,   270,   410,     0,   416,   406,
     387,   420,   422,   427,   429,   434,   436,   303,   440,   305,
     443,   314,   143,   207,   208,   210,   209,   211,   204,   205,
     206,   212,   213,   202,   203,   214,   215,   201,    49,     0,
     159,   200,   156,     0,    50,    37,    38,   163,   200,   160,
     140,    42,   166,   169,     0,     0,   323,   151,     0,     0,
     179,   171,   174,   177,     0,     0,   452,     0,     0,   456,
     455,   462,   468,   467,     0,     0,   459,   469,    21,     0,
      80,     0,   186,     0,   187,   193,   219,     0,   277,   412,
     423,   430,   437,     0,   157,   164,   161,     0,     0,    40,
      41,     0,    47,   217,   216,   182,     0,     0,     0,     0,
       0,   274,     0,     0,     0,     0,     0,     0,   223,     0,
     218,     0,   188,   220,   413,     0,   121,    43,     0,     0,
       0,     0,   172,   175,   178,   275,   473,   458,   453,   473,
     460,     0,   226,   189,    48,    42,     0,   180,     0,     0,
       0,     0,   224,     0,    44,   183,     0,     0,     0,     0,
       0,   227,     0,   181,   474,   475,   476,   184
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -513,  -513,  -513,   159,   505,  -513,  -513,  -513,  -513,  -513,
    -513,   471,  -513,  -513,   510,  -513,  -513,  -513,  -256,  -513,
    -513,  -513,  -513,  -513,   337,  -513,   513,   -53,  -513,   499,
    -513,   254,  -330,  -435,  -513,  -513,  -219,  -513,  -157,  -350,
     -13,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,   574,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -422,
    -513,  -513,  -438,  -513,  -364,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,   346,   360,  -513,  -513,  -513,   309,  -513,
      -9,  -513,  -258,   233,  -261,  -234,   218,  -513,   -55,  -513,
    -513,  -513,  -513,   416,   519,  -513,  -513,  -513,  -513,  -513,
    -513,  -152,  -104,  -513,  -513,  -513,   258,  -513,  -513,  -513,
     -88,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,   305,
    -512,  -374,  -513,  -513,  -291,   -73,   203,  -513,  -513,  -513,
    -224,  -513
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    15,   157,   163,   393,   312,    16,    17,    35,
      36,    61,    18,    32,    33,   479,   480,   781,   782,   481,
     482,   483,   484,   485,   164,   165,    29,    30,    45,    46,
      47,    19,   153,   225,    80,    20,   313,   486,   368,   487,
     314,   488,   315,   489,   490,   491,   492,   493,   636,   494,
     495,   316,   507,   788,   508,   789,   510,   790,   317,   539,
     765,   318,   319,   320,   460,   497,   321,   322,   323,   672,
     821,   673,   833,   540,   221,   358,   264,   218,   222,   223,
     450,   451,   214,   215,   655,   267,   374,   277,   228,   154,
      52,    22,    82,   104,    65,    66,    23,    24,   114,    75,
      25,   268,   325,   103,   207,   208,   212,   209,   336,   690,
     452,   334,   689,   331,   686,   332,   804,   333,   688,   337,
     691,   338,   770,   339,   693,   340,   771,   341,   695,   342,
     772,   343,   698,   344,   700,    26,    41,    27,    40,   326,
     518,   519,   327,   520,   521,   522,   523,   328,   392,   329,
     830,   330
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   206,   229,   356,   496,   391,   273,   366,   444,   582,
     446,   584,   448,   586,   574,   526,   459,   210,   111,    76,
     595,    83,    84,     2,   502,   675,    42,   542,     3,   654,
     266,   596,   361,   664,    43,   362,    64,   763,   676,   404,
     405,   168,   226,   249,   719,   414,    28,   346,   416,   417,
     168,     4,   352,     5,   213,     6,    31,     7,   219,    48,
     249,   220,     8,   401,    57,   363,    53,   250,     9,   793,
      44,    54,   676,   541,    10,   106,   676,   416,   417,   236,
     169,   227,   644,   362,   250,   272,   637,    77,    78,   279,
      11,   353,   205,   355,    69,   402,    58,   433,   216,   434,
     217,   158,   159,   796,   659,   219,   678,   805,   371,   237,
     660,    12,    34,   363,   262,    37,   372,   616,   226,    79,
     206,   408,   409,   251,   456,    38,   626,    43,   434,   414,
      62,   415,   416,   417,   418,    85,   271,   419,   373,    86,
     251,    87,    88,   543,    54,   310,   594,    39,   750,   272,
     274,   640,   252,   253,   274,    51,   206,   254,   702,    63,
     255,   347,    49,    44,    50,   274,   265,    43,    64,   252,
     253,   206,   354,    89,   254,   256,   575,   255,   206,   348,
     535,   433,   257,   434,    72,   258,    13,   370,   362,   349,
     206,   206,   256,    14,   375,    59,   593,   233,   587,   676,
      56,    55,   258,    44,   676,    60,   387,   389,    69,    73,
     662,   205,   404,   405,   676,   160,   663,   274,   363,   161,
     364,   162,    88,   365,   234,    69,   677,   206,   206,   206,
     206,   685,   745,   206,   512,   206,   524,   206,   669,   206,
      54,   737,   754,   437,   438,   439,   440,   205,   658,   443,
     618,   445,   269,   447,  -421,   579,   270,   676,   767,  -421,
     206,    67,   205,   588,   720,   360,    97,   404,   405,   205,
      98,   590,   529,   761,   530,   727,   457,  -421,   580,   206,
    -428,   205,   205,   747,   803,  -428,   589,    99,   100,   101,
     102,   755,   406,   407,   591,   511,   410,   773,    68,   411,
     412,   413,   414,  -428,   415,   416,   417,   418,   786,   794,
     419,   778,   420,   421,   613,   660,   231,   232,   205,   205,
     205,   205,   779,   780,   205,   799,   205,    70,   205,   274,
     205,   787,   275,   356,   422,   276,   423,   424,   425,   426,
     427,  -435,    71,   760,   431,   432,  -435,   406,   407,   408,
     409,   205,    74,  -225,   433,    81,   434,   414,  -225,   415,
     416,   417,   418,    94,  -435,   419,    92,   420,   421,   105,
     205,   156,   531,   532,    95,   660,  -225,   666,   663,    96,
     667,   404,   405,   660,   110,   797,   108,   536,   109,   113,
     150,   115,   151,   718,   155,   156,   428,   429,   430,   431,
     432,   724,   152,   206,   206,    58,   206,   211,   213,   433,
     224,   434,   731,   496,   167,   230,   238,   239,   240,   649,
     650,   242,   652,   241,   243,   244,   245,   246,   247,   248,
     260,   259,   261,   335,   272,   345,   357,   359,   206,   226,
     369,   377,   379,   380,   382,   383,   505,   219,   544,   404,
     405,   378,   381,   400,   679,    13,   436,   454,   551,   764,
     441,   406,   407,   408,   409,   410,   553,   571,   411,   412,
     413,   414,   206,   415,   416,   417,   418,   622,   596,   419,
     621,   420,   421,   206,   229,   206,   628,   795,   687,   629,
     630,   632,   633,   634,   205,   205,   635,   205,   670,   697,
     656,   231,   674,   422,   775,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   658,   404,   405,   661,   680,
     682,   352,   692,   433,   694,   434,   723,   696,   725,   205,
     726,   408,   409,   272,   732,   730,   744,   749,   739,   414,
     748,   206,   416,   417,   418,   752,   756,   419,   757,   800,
     811,   838,   533,   817,   820,   822,   828,   738,    90,   807,
     839,   845,   846,   205,   840,   166,    93,    91,   206,   834,
     278,   112,   403,   777,   205,    21,   205,   453,   263,   367,
     699,   733,   324,   235,   759,   107,   824,   376,   501,   825,
     753,   433,   527,   434,   442,   831,   406,   407,   408,   409,
     410,     0,   351,   411,   412,   413,   414,     0,   415,   416,
     417,   418,     0,     0,   419,     0,   420,   421,     0,     0,
       0,     0,     0,   386,     0,     0,     0,     0,     0,     0,
       0,     0,   205,     0,     0,   170,     0,     0,   384,   385,
       0,   171,   390,   426,   427,   428,   429,   430,   431,   432,
     394,   395,   396,   397,   398,   399,   172,     0,   433,   205,
     434,     0,     0,     0,     0,     0,     0,     0,     0,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,     0,     0,     0,     0,   206,     0,     0,   404,   405,
       0,     0,   461,     0,   498,     0,     0,     0,     0,     0,
     503,   826,     0,     0,   506,     0,     0,   509,     0,     0,
       0,     0,   206,   517,     0,   517,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,   842,     0,
       0,     0,   545,   546,     0,     0,   547,   548,   549,   550,
       0,   552,     0,   554,   555,   556,   557,   558,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,     0,
     572,    44,     0,     0,     0,     0,     0,     0,     0,     0,
     408,   409,     0,     0,     0,     0,   205,     0,   414,     0,
     415,   416,   417,   418,     0,     0,   419,     0,   832,   612,
       0,     0,     0,   617,     0,     0,   619,   620,     0,     0,
     841,   624,   627,   205,     0,     0,     0,   631,     0,     0,
       0,     0,     0,     0,     0,     0,   388,   404,   405,   430,
     431,   432,     0,     0,     0,     0,     0,   641,   170,     0,
     433,   647,   434,     0,   171,     0,     0,     0,     0,     0,
     394,     0,   399,     0,     0,     0,     0,     0,     0,   172,
       0,   399,     0,     0,   668,   390,     0,     0,   671,     0,
       0,     0,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,     0,     0,     0,   406,   407,   408,
     409,   410,     0,     0,   411,   412,   413,   414,     0,   415,
     416,   417,   418,     0,     0,   419,     0,   420,   421,   701,
       0,     0,     0,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,   714,   715,   716,   717,    43,   422,
     721,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   728,     0,   404,   405,     0,     0,     0,     0,   433,
       0,   434,     0,     0,   713,   717,     0,     0,   435,     0,
       0,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,   746,     0,     0,     0,     0,     0,   751,     0,   517,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   762,     0,     0,     0,     0,     0,     0,   768,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   597,   598,   599,   600,   601,
     602,   603,   604,   406,   407,   408,   409,   410,   605,   606,
     411,   412,   413,   414,   607,   415,   416,   417,   418,     0,
       0,   419,   608,   420,   421,   609,   610,     0,     0,     0,
     783,   784,     0,     0,     0,     0,     0,     0,     0,     0,
     792,     0,     0,     0,   611,   422,     0,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,     0,     0,   802,
       0,     0,     0,     0,     0,   433,     0,   434,     0,     0,
       0,     0,     0,   498,   642,     0,     0,   808,     0,     0,
       0,     0,   810,     0,   812,   813,   814,     0,     0,   816,
       0,   818,   819,     0,     0,     0,   462,   823,     0,     0,
       3,     0,   463,   464,   465,     0,   466,     0,   280,   281,
     282,   283,     0,     0,     0,     0,     0,     0,     0,   467,
     284,   468,   469,     0,   837,     0,     0,     0,     0,     0,
       0,   470,   285,     0,   844,   471,   286,     0,   287,     0,
       9,   288,   472,     0,   473,   289,     0,     0,   474,   475,
       0,     0,     0,   174,   175,   176,     0,   178,   179,   180,
     181,   182,   290,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   194,   195,   196,     0,     0,   199,   200,
     201,   202,     0,     0,   291,   476,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   292,   293,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   458,     0,     0,     0,     0,     0,     0,     0,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    43,   303,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   304,   305,   306,     0,     0,     0,     0,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
     309,     0,   310,   311,    44,   477,   272,   478,   462,     0,
       0,     0,     3,     0,   463,   464,   465,     0,   466,     0,
     280,   281,   282,   283,     0,     0,     0,     0,     0,     0,
       0,   467,   284,   468,   469,     0,     0,     0,     0,     0,
       0,     0,     0,   470,   285,     0,     0,   471,   286,     0,
     287,     0,     9,   288,   472,     0,   473,   289,     0,     0,
     474,   475,     0,     0,     0,   174,   175,   176,     0,   178,
     179,   180,   181,   182,   290,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   194,   195,   196,     0,     0,
     199,   200,   201,   202,     0,     0,   291,   476,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   292,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   458,     0,     0,     0,     0,     0,     0,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
      43,   303,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   304,   305,   306,     0,     0,
       0,     0,   307,   308,     0,     0,     0,     0,   280,   281,
     282,   283,   309,     0,   310,   311,    44,   477,   272,   806,
     284,     0,     0,     0,     0,     0,   249,     0,     0,     0,
       0,     0,   285,     0,     0,     0,   286,     0,   287,     0,
       0,   288,     0,     0,     0,   289,     0,     0,     0,     0,
     250,     0,     0,   174,   175,   176,     0,   178,   179,   180,
     181,   182,   290,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   194,   195,   196,     0,     0,   199,   200,
     201,   202,     0,     0,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   292,   293,     0,     0,
       0,     0,     0,     0,     0,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   513,   303,
       0,     0,     0,     0,     0,   252,   253,     0,     0,     0,
     254,     0,     0,   514,   305,   306,     0,     0,     0,     0,
     307,   308,     0,   280,   281,   282,   283,     0,   256,   515,
     516,     0,   310,   311,    44,   284,   272,     0,   258,     0,
       0,   249,     0,     0,     0,     0,     0,   285,     0,     0,
       0,   286,     0,   287,     0,     0,   288,     0,     0,     0,
     289,     0,     0,     0,     0,   250,     0,     0,   174,   175,
     176,     0,   178,   179,   180,   181,   182,   290,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,   194,   195,
     196,     0,     0,   199,   200,   201,   202,     0,     0,   291,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   292,   293,     0,     0,     0,     0,     0,     0,     0,
       0,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   513,   303,     0,     0,     0,     0,     0,
     252,   253,     0,     0,     0,   254,     0,     0,   514,   305,
     306,     0,     0,     0,     0,   307,   308,     0,   280,   281,
     282,   283,     0,   256,     0,   525,     0,   310,   311,    44,
     284,   272,     0,   258,     0,   249,   346,     0,     0,     0,
       0,     0,   285,     0,     0,     0,   286,     0,   287,     0,
       0,   288,     0,     0,     0,   289,     0,     0,     0,   250,
       0,     0,     0,   174,   175,   176,     0,   178,   179,   180,
     181,   182,   290,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   194,   195,   196,     0,     0,   199,   200,
     201,   202,     0,     0,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   292,   293,     0,     0,
       0,     0,     0,     0,     0,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    43,   303,
       0,     0,     0,     0,   252,   253,     0,     0,     0,   254,
     347,     0,   255,   304,   305,   306,     0,     0,     0,     0,
     307,   308,     0,   280,   281,   282,   283,   256,   348,   504,
     309,     0,   310,   311,    44,   284,   272,   258,   349,     0,
       0,     0,     0,     0,     0,     0,     0,   285,     0,     0,
       0,   286,     0,   287,     0,     0,   288,     0,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,   174,   175,
     176,     0,   178,   179,   180,   181,   182,   290,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,   194,   195,
     196,     0,     0,   199,   200,   201,   202,     0,     0,   291,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   292,   293,     0,     0,     0,     0,     0,     0,     0,
     614,     0,     0,     0,     0,     0,   458,     0,     0,   249,
       0,     0,     0,     0,   294,   295,   296,   297,   298,   299,
     300,   301,   302,    43,   303,     0,     0,     0,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,   304,   305,
     306,   280,   281,   282,   283,   307,   308,     0,     0,     0,
       0,     0,     0,   284,     0,   309,     0,   310,   311,    44,
     615,   272,     0,     0,     0,   285,     0,     0,     0,   286,
       0,   287,     0,     0,   288,     0,     0,     0,   289,     0,
       0,     0,     0,     0,     0,     0,   174,   175,   176,   251,
     178,   179,   180,   181,   182,   290,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   194,   195,   196,     0,
       0,   199,   200,   201,   202,     0,     0,   291,   252,   253,
       0,     0,     0,   254,     0,     0,   255,     0,     0,   292,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,     0,     0,   576,     0,
       0,   258,   294,   295,   296,   297,   298,   299,   300,   301,
     302,    43,   303,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   305,   306,     0,
       0,     0,     0,   307,   308,     0,   280,   281,   282,   283,
       0,   537,     0,   309,   538,   310,   311,    44,   284,   272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     285,     0,     0,     0,   286,     0,   287,     0,     0,   288,
       0,     0,     0,   289,     0,     0,     0,     0,     0,     0,
       0,   174,   175,   176,     0,   178,   179,   180,   181,   182,
     290,   184,   185,   186,   187,   188,   189,   190,   191,   192,
       0,   194,   195,   196,     0,     0,   199,   200,   201,   202,
       0,     0,   291,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   292,   293,     0,     0,     0,     0,
       0,     0,     0,   625,     0,     0,     0,     0,     0,   458,
       0,     0,     0,     0,     0,     0,     0,   294,   295,   296,
     297,   298,   299,   300,   301,   302,    43,   303,     0,     0,
       0,     0,     0,     0,     0,   280,   281,   282,   283,   645,
       0,   304,   305,   306,     0,     0,     0,   284,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,   309,   285,
     310,   311,    44,   286,   272,   287,     0,     0,   288,     0,
       0,     0,   289,     0,     0,     0,     0,     0,     0,     0,
     174,   175,   176,     0,   178,   179,   180,   181,   182,   290,
     184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
     194,   195,   196,     0,     0,   199,   200,   201,   202,     0,
       0,   291,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   292,   293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   294,   295,   296,   297,
     298,   299,   300,   301,   302,    43,   303,     0,     0,     0,
       0,     0,     0,     0,   280,   281,   282,   283,   646,     0,
     304,   305,   306,     0,     0,     0,   284,   307,   308,     0,
       0,     0,     0,     0,     0,     0,     0,   309,   285,   310,
     311,    44,   286,   272,   287,     0,     0,   288,     0,     0,
       0,   289,     0,     0,     0,     0,     0,     0,     0,   174,
     175,   176,     0,   178,   179,   180,   181,   182,   290,   184,
     185,   186,   187,   188,   189,   190,   191,   192,     0,   194,
     195,   196,     0,     0,   199,   200,   201,   202,     0,     0,
     291,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   292,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   294,   295,   296,   297,   298,
     299,   300,   301,   302,    43,   303,     0,     0,     0,     0,
       0,     0,     0,   280,   281,   282,   283,     0,     0,   304,
     305,   306,     0,     0,     0,   284,   307,   308,   249,     0,
       0,     0,     0,     0,     0,   350,   309,   285,   310,   311,
      44,   286,   272,   287,     0,     0,   288,     0,     0,     0,
     289,     0,   250,     0,     0,     0,     0,     0,   174,   175,
     176,     0,   178,   179,   180,   181,   182,   290,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,   194,   195,
     196,     0,     0,   199,   200,   201,   202,     0,     0,   291,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   292,   293,     0,     0,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,   458,     0,     0,   249,
       0,     0,     0,     0,   294,   295,   296,   297,   298,   299,
     300,   301,   302,    43,   303,     0,     0,   252,   253,     0,
       0,     0,   254,   250,   577,   255,     0,     0,   304,   305,
     306,   280,   281,   282,   283,   307,   308,     0,   559,     0,
     256,     0,     0,   284,     0,   309,     0,   310,   311,    44,
     258,   272,     0,     0,     0,   285,     0,     0,     0,   286,
       0,   287,     0,     0,   288,     0,     0,     0,   289,     0,
       0,     0,     0,     0,     0,     0,   174,   175,   176,   251,
     178,   179,   180,   181,   182,   290,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   194,   195,   196,     0,
       0,   199,   200,   201,   202,     0,     0,   291,   252,   253,
       0,     0,     0,   254,     0,   578,   255,     0,     0,   292,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,   294,   295,   296,   297,   298,   299,   300,   301,
     302,    43,   303,     0,     0,     0,     0,     0,     0,     0,
     280,   281,   282,   283,     0,     0,   304,   305,   306,     0,
       0,     0,   284,   307,   308,   249,     0,     0,     0,     0,
       0,     0,     0,   309,   285,   310,   311,    44,   286,   272,
     287,     0,     0,   288,     0,     0,     0,   289,     0,   250,
       0,     0,     0,     0,     0,   174,   175,   176,     0,   178,
     179,   180,   181,   182,   290,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   194,   195,   196,     0,     0,
     199,   200,   201,   202,     0,     0,   291,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   292,   293,
       0,     0,     0,     0,     0,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,     0,     0,     0,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
      43,   303,     0,     0,   252,   253,     0,     0,     0,   254,
     250,   581,   255,     0,     0,   304,   305,   306,   280,   281,
     282,   283,   307,   308,     0,     0,     0,   256,     0,     0,
     284,     0,   309,   573,   310,   311,    44,   258,   272,     0,
       0,     0,   285,     0,     0,     0,   286,     0,   287,     0,
       0,   288,     0,     0,     0,   289,     0,     0,   623,     0,
       0,     0,     0,   174,   175,   176,   251,   178,   179,   180,
     181,   182,   290,   184,   185,   186,   187,   188,   189,   190,
     191,   192,     0,   194,   195,   196,     0,     0,   199,   200,
     201,   202,     0,     0,   291,   252,   253,     0,     0,     0,
     254,     0,   583,   255,     0,     0,   292,   293,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,   294,
     295,   296,   297,   298,   299,   300,   301,   302,    43,   303,
       0,     0,     0,     0,     0,     0,     0,   280,   281,   282,
     283,     0,     0,   304,   305,   306,     0,     0,     0,   284,
     307,   308,   249,     0,     0,     0,     0,     0,     0,     0,
     309,   285,   310,   311,    44,   286,   272,   287,     0,     0,
     288,     0,     0,     0,   289,     0,   250,     0,     0,     0,
       0,     0,   174,   175,   176,     0,   178,   179,   180,   181,
     182,   290,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   194,   195,   196,     0,     0,   199,   200,   201,
     202,     0,     0,   291,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   292,   293,     0,     0,     0,
       0,     0,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,     0,     0,     0,   294,   295,
     296,   297,   298,   299,   300,   301,   302,    43,   303,     0,
       0,   252,   253,     0,     0,     0,   254,   250,   585,   255,
       0,     0,   304,   305,   306,   280,   281,   282,   283,   307,
     308,     0,     0,     0,   256,     0,     0,   284,     0,   309,
     643,   310,   311,    44,   258,   272,     0,     0,     0,   285,
       0,     0,     0,   286,     0,   287,     0,     0,   288,     0,
       0,     0,   289,     0,     0,     0,     0,     0,     0,     0,
     174,   175,   176,   251,   178,   179,   180,   181,   182,   290,
     184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
     194,   195,   196,     0,     0,   199,   200,   201,   202,     0,
       0,   291,   252,   253,     0,     0,     0,   254,     0,   653,
     255,     0,     0,   292,   293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   256,     0,     0,     0,     0,
       0,   249,     0,     0,     0,   258,   294,   295,   296,   297,
     298,   299,   300,   301,   302,    43,   303,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     0,     0,     0,     0,
     304,   305,   306,   280,   281,   282,   283,   307,   308,     0,
       0,     0,     0,     0,     0,   284,     0,   309,   657,   310,
     311,    44,     0,   272,     0,     0,     0,   285,     0,     0,
       0,   286,     0,   287,     0,     0,   288,     0,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,   174,   175,
     176,   251,   178,   179,   180,   181,   182,   290,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,   194,   195,
     196,     0,     0,   199,   200,   201,   202,     0,     0,   291,
     252,   253,     0,     0,     0,   254,     0,   741,   255,     0,
       0,   292,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   256,     0,     0,     0,     0,     0,   249,
       0,     0,     0,   258,   294,   295,   296,   297,   298,   299,
     300,   301,   302,    43,   303,     0,     0,     0,     0,     0,
       0,     0,     0,   250,     0,     0,     0,     0,   304,   305,
     306,   280,   281,   282,   283,   307,   308,     0,     0,     0,
       0,     0,     0,   284,     0,   309,   665,   310,   311,    44,
       0,   272,     0,     0,     0,   285,     0,     0,     0,   286,
       0,   287,     0,     0,   288,     0,     0,     0,   289,     0,
       0,     0,     0,     0,     0,     0,   174,   175,   176,   251,
     178,   179,   180,   181,   182,   290,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,   194,   195,   196,     0,
       0,   199,   200,   201,   202,     0,     0,   291,   252,   253,
       0,     0,     0,   254,     0,   742,   255,     0,     0,   292,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,   734,     0,     0,     0,     0,     0,
       0,   258,   294,   295,   296,   297,   298,   299,   300,   301,
     302,    43,   303,     0,     0,     0,     0,     0,     0,     0,
     280,   281,   282,   283,     0,     0,   304,   305,   306,     0,
       0,     0,   284,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,   309,   285,   310,   311,    44,   286,   272,
     287,     0,     0,   288,     0,     0,     0,   289,     0,     0,
       0,     0,     0,     0,     0,   174,   175,   176,     0,   178,
     179,   180,   181,   182,   290,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   194,   195,   196,     0,     0,
     199,   200,   201,   202,     0,     0,   291,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   292,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   735,     0,     0,     0,     0,     0,     0,
       0,   294,   295,   296,   297,   298,   299,   300,   301,   302,
      43,   303,     0,     0,     0,     0,     0,     0,     0,   280,
     281,   282,   283,     0,     0,   304,   305,   306,     0,     0,
       0,   284,   307,   308,   249,     0,   249,     0,     0,     0,
       0,     0,   309,   285,   310,   311,    44,   286,   272,   287,
       0,     0,   288,     0,     0,     0,   289,     0,   250,     0,
     250,     0,     0,     0,   174,   175,   176,     0,   178,   179,
     180,   181,   182,   290,   184,   185,   186,   187,   188,   189,
     190,   191,   192,     0,   194,   195,   196,     0,     0,   199,
     200,   201,   202,     0,     0,   291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   292,   293,     0,
       0,     0,     0,   362,   251,     0,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   249,     0,     0,     0,     0,
     294,   295,   296,   297,   298,   299,   300,   301,   302,    43,
     303,     0,     0,   592,   253,   252,   253,     0,   254,   250,
     254,   255,   743,   255,   304,   305,   306,   280,   281,   282,
     283,   307,   308,     0,     0,     0,   256,     0,   256,   284,
       0,   309,   766,   310,   311,    44,   258,   272,   258,     0,
       0,   285,     0,     0,     0,   286,     0,   287,     0,     0,
     288,     0,     0,     0,   289,     0,     0,     0,     0,     0,
       0,     0,   174,   175,   176,   251,   178,   179,   180,   181,
     182,   290,   184,   185,   186,   187,   188,   189,   190,   191,
     192,     0,   194,   195,   196,     0,     0,   199,   200,   201,
     202,     0,     0,   291,   252,   253,     0,     0,     0,   254,
       0,   769,   255,     0,     0,   292,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   256,     0,     0,
       0,     0,     0,   249,     0,     0,     0,   258,   294,   295,
     296,   297,   298,   299,   300,   301,   302,    43,   303,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,     0,
       0,     0,   304,   305,   306,   280,   281,   282,   283,   307,
     308,     0,     0,     0,     0,     0,     0,   284,     0,   309,
     791,   310,   311,    44,     0,   272,     0,     0,     0,   285,
       0,     0,     0,   286,     0,   287,     0,     0,   288,     0,
       0,     0,   289,     0,     0,     0,     0,     0,     0,     0,
     174,   175,   176,   251,   178,   179,   180,   181,   182,   290,
     184,   185,   186,   187,   188,   189,   190,   191,   192,     0,
     194,   195,   196,     0,     0,   199,   200,   201,   202,     0,
       0,   291,   252,   253,     0,     0,     0,   254,     0,     0,
     255,     0,     0,   292,   293,     0,     0,     0,     0,     0,
       0,     0,   801,     0,     0,   256,     0,     0,   785,     0,
       0,     0,     0,     0,     0,   258,   294,   295,   296,   297,
     298,   299,   300,   301,   302,    43,   303,     0,     0,     0,
       0,     0,     0,     0,   280,   281,   282,   283,   809,     0,
     304,   305,   306,     0,     0,     0,   284,   307,   308,     0,
       0,     0,     0,     0,     0,     0,     0,   309,   285,   310,
     311,    44,   286,   272,   287,     0,     0,   288,     0,     0,
       0,   289,     0,     0,     0,     0,     0,     0,     0,   174,
     175,   176,     0,   178,   179,   180,   181,   182,   290,   184,
     185,   186,   187,   188,   189,   190,   191,   192,     0,   194,
     195,   196,     0,     0,   199,   200,   201,   202,     0,     0,
     291,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   292,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   294,   295,   296,   297,   298,
     299,   300,   301,   302,    43,   303,     0,     0,     0,     0,
       0,     0,     0,   280,   281,   282,   283,   836,     0,   304,
     305,   306,     0,     0,     0,   284,   307,   308,     0,     0,
       0,     0,     0,     0,     0,     0,   309,   285,   310,   311,
      44,   286,   272,   287,     0,     0,   288,     0,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,   174,   175,
     176,     0,   178,   179,   180,   181,   182,   290,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,   194,   195,
     196,     0,     0,   199,   200,   201,   202,     0,     0,   291,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   292,   293,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   294,   295,   296,   297,   298,   299,
     300,   301,   302,    43,   303,     0,     0,     0,     0,     0,
       0,     0,   280,   281,   282,   283,     0,     0,   304,   305,
     306,     0,     0,     0,   284,   307,   308,   249,     0,     0,
       0,     0,     0,     0,     0,   309,   285,   310,   311,    44,
     286,   272,   287,     0,     0,   288,     0,     0,     0,   289,
       0,   250,     0,     0,     0,     0,     0,   174,   175,   176,
       0,   178,   179,   180,   181,   182,   290,   184,   185,   186,
     187,   188,   189,   190,   191,   192,     0,   194,   195,   196,
       0,     0,   199,   200,   201,   202,     0,     0,   291,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     292,   293,   404,   405,     0,     0,     0,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   294,   295,   296,   297,   298,   299,   300,
     301,   302,    43,   303,     0,     0,   252,   253,     0,     0,
       0,   254,     0,   798,   255,     0,     0,   304,   305,   306,
       0,     0,     0,     0,   307,   308,     0,     0,     0,   256,
       0,     0,     0,     0,   309,     0,   310,   311,    44,   258,
     272,     0,     0,     0,   597,   598,   599,   600,   601,   602,
     603,   604,   406,   407,   408,   409,   410,   605,   606,   411,
     412,   413,   414,   607,   415,   416,   417,   418,   404,   405,
     419,   608,   420,   421,   609,   610,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   611,   422,     0,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,     0,     0,     0,     0,
       0,     0,     0,     0,   433,     0,   434,     0,     0,     0,
       0,     0,     0,   722,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     597,   598,   599,   600,   601,   602,   603,   604,   406,   407,
     408,   409,   410,   605,   606,   411,   412,   413,   414,   607,
     415,   416,   417,   418,   404,   405,   419,   608,   420,   421,
     609,   610,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   611,
     422,     0,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,     0,     0,     0,     0,     0,     0,     0,     0,
     433,     0,   434,     0,     0,     0,     0,     0,     0,   729,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   597,   598,   599,   600,
     601,   602,   603,   604,   406,   407,   408,   409,   410,   605,
     606,   411,   412,   413,   414,   607,   415,   416,   417,   418,
     404,   405,   419,   608,   420,   421,   609,   610,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   611,   422,     0,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,     0,     0,
       0,     0,     0,     0,     0,     0,   433,     0,   434,     0,
       0,     0,     0,     0,     0,   736,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   597,   598,   599,   600,   601,   602,   603,   604,
     406,   407,   408,   409,   410,   605,   606,   411,   412,   413,
     414,   607,   415,   416,   417,   418,   404,   405,   419,   608,
     420,   421,   609,   610,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   611,   422,     0,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,     0,     0,     0,     0,     0,     0,
       0,     0,   433,     0,   434,     0,     0,     0,     0,     0,
       0,   774,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   404,   405,     0,     0,     0,     0,     0,   597,   598,
     599,   600,   601,   602,   603,   604,   406,   407,   408,   409,
     410,   605,   606,   411,   412,   413,   414,   607,   415,   416,
     417,   418,     0,     0,   419,   608,   420,   421,   609,   610,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   611,   422,     0,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
       0,     0,     0,   404,   405,     0,     0,     0,   433,     0,
     434,   406,   407,   408,   409,   410,     0,   776,   411,   412,
     413,   414,     0,   415,   416,   417,   418,     0,     0,   419,
       0,   420,   421,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,     0,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,     0,     0,     0,     0,     0,
       0,   404,   405,   433,     0,   434,     0,     0,     0,     0,
       0,     0,   829,   406,   407,   408,   409,   410,     0,     0,
     411,   412,   413,   414,     0,   415,   416,   417,   418,     0,
       0,   419,     0,   420,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   422,     0,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,     0,     0,   404,
     405,     0,     0,     0,     0,   433,     0,   434,     0,     0,
     534,   406,   407,   408,   409,   410,     0,     0,   411,   412,
     413,   414,     0,   415,   416,   417,   418,     0,     0,   419,
       0,   420,   421,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,     0,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,     0,     0,   404,   405,     0,
       0,     0,     0,   433,     0,   434,     0,     0,   648,   406,
     407,   408,   409,   410,     0,     0,   411,   412,   413,   414,
       0,   415,   416,   417,   418,     0,     0,   419,     0,   420,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   422,     0,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,     0,     0,   404,   405,     0,     0,     0,
       0,   433,     0,   434,     0,     0,   651,   406,   407,   408,
     409,   410,     0,     0,   411,   412,   413,   414,     0,   415,
     416,   417,   418,     0,     0,   419,     0,   420,   421,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   422,
       0,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,     0,     0,   404,   405,     0,     0,     0,     0,   433,
       0,   434,     0,     0,   740,   406,   407,   408,   409,   410,
       0,     0,   411,   412,   413,   414,     0,   415,   416,   417,
     418,     0,     0,   419,     0,   420,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,     0,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,     0,
       0,   404,   405,     0,     0,     0,     0,   433,     0,   434,
       0,     0,   815,   406,   407,   408,   409,   410,     0,     0,
     411,   412,   413,   414,     0,   415,   416,   417,   418,     0,
       0,   419,     0,   420,   421,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   422,     0,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,     0,     0,     0,
       0,     0,     0,     0,     0,   433,     0,   434,     0,     0,
     827,   406,   407,   408,   409,   410,     0,     0,   411,   412,
     413,   414,     0,   415,   416,   417,   418,     0,     0,   419,
       0,   420,   421,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,     0,
       0,   171,     0,   422,     0,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,     0,   172,     0,     0,     0,
       0,     0,     0,   433,     0,   434,     0,     0,   843,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   170,     0,     0,     0,     0,     0,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,   294,   295,   296,     0,
       0,     0,     0,     0,     0,    43,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,     0,   404,
     405,    44,     0,     0,     0,     0,     0,     0,     0,   170,
       0,     0,     0,     0,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,     0,   404,   405,    44,   406,
     407,   408,   409,   410,     0,     0,   411,   412,   413,   414,
       0,   415,   416,   417,   418,     0,     0,   419,     0,   420,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   449,
       0,   422,     0,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,     0,     0,     0,     0,     0,     0,     0,
       0,   433,     0,   434,   455,   404,   405,     0,     0,     0,
       0,   249,     0,     0,     0,    44,   406,   407,   408,   409,
     410,     0,     0,   411,   412,   413,   414,     0,   415,   416,
     417,   418,     0,     0,   419,   250,   420,   421,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   422,     0,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
       0,     0,     0,     0,     0,     0,     0,     0,   433,     0,
     434,   681,   404,   405,     0,   406,   407,   408,   409,   410,
       0,   251,   411,   412,   413,   414,     0,   415,   416,   417,
     418,     0,     0,   419,     0,   420,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     252,   253,     0,     0,     0,   254,     0,   422,   255,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,     0,
       0,     0,     0,   256,     0,     0,   835,   433,     0,   434,
     684,     0,     0,   258,   597,   598,   599,   600,   601,   602,
     603,   604,   406,   407,   408,   409,   410,   605,   606,   411,
     412,   413,   414,   607,   415,   416,   417,   418,  -200,     0,
     419,   608,   420,   421,   609,   610,   404,   405,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   611,   422,     0,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,     0,     0,     0,     0,
       0,     0,     0,     0,   433,     0,   434,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   404,   405,     0,     0,     0,     0,     0,   597,   598,
     599,   600,   601,   602,   603,   604,   406,   407,   408,   409,
     410,   605,   606,   411,   412,   413,   414,   638,   415,   416,
     417,   418,     0,     0,   419,   608,   420,   421,   609,   610,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   639,   422,     0,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     404,   405,     0,     0,     0,     0,     0,     0,   433,     0,
     434,   406,   407,   408,   409,   410,     0,     0,   411,   412,
     413,   414,     0,   415,   416,   417,   418,     0,     0,   419,
       0,   420,   421,     0,     0,   528,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   422,     0,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   404,   405,     0,     0,     0,
       0,     0,     0,   433,     0,   434,     0,     0,     0,     0,
     406,   407,   408,   409,   410,     0,     0,   411,   412,   413,
     414,     0,   415,   416,   417,   418,     0,     0,   419,     0,
     420,   421,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   422,   683,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   404,   405,     0,     0,     0,     0,
       0,     0,   433,     0,   434,   406,   407,   408,   409,   410,
       0,     0,   411,   412,   413,   414,     0,   415,   416,   417,
     418,     0,     0,   419,     0,   420,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   758,     0,     0,   422,     0,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   404,
     405,     0,     0,     0,     0,     0,     0,   433,     0,   434,
       0,     0,     0,     0,   406,   407,   408,   409,   410,     0,
       0,   411,   412,   413,   414,     0,   415,   416,   417,   418,
       0,     0,   419,     0,   420,   421,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   422,     0,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   404,   405,
       0,     0,     0,     0,     0,     0,   433,     0,   434,   406,
     407,   408,   409,   410,     0,     0,   411,   412,   413,   414,
       0,   415,   416,   417,   418,     0,     0,   419,     0,   420,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   404,   405,     0,     0,     0,     0,     0,
       0,   433,     0,   434,     0,     0,     0,     0,   406,   407,
     408,   409,   410,   404,   405,   411,   412,   413,   414,   249,
     415,   416,   417,   418,     0,     0,   419,     0,   420,   421,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,     0,     0,   250,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   425,   426,   427,   428,   429,   430,
     431,   432,     0,   250,     0,     0,     0,     0,     0,     0,
     433,     0,   434,   406,   407,   408,   409,   410,     0,     0,
     411,     0,     0,   414,     0,   415,   416,   417,   418,   249,
       0,   419,     0,   420,   421,   408,   409,     0,     0,   251,
       0,     0,     0,   414,     0,   415,   416,   417,   418,     0,
       0,   419,     0,   250,     0,     0,     0,     0,     0,   251,
     426,   427,   428,   429,   430,   431,   432,     0,   252,   253,
       0,     0,     0,   254,     0,   433,   255,   434,     0,     0,
       0,     0,   428,   429,   430,   431,   432,     0,   252,   253,
       0,   256,     0,   254,   847,   433,   255,   434,     0,     0,
       0,   258,     0,     0,     0,     0,     0,     0,   371,   251,
       0,   256,     0,     0,     0,     0,   372,     0,     0,     0,
       0,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   499,   253,
       0,     0,     0,   254,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,     0,     0,   500,     0,
       0,   258,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,   135,   136,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,   148,   149
};

static const yytype_int16 yycheck[] =
{
      13,   105,   154,   261,   368,   296,   225,   268,   338,   444,
     340,   446,   342,   448,   436,   389,   366,   105,    71,    33,
     458,    13,    14,     0,   374,   537,    32,    17,     5,    18,
      45,   115,   266,    18,   133,   110,   133,   123,   139,    19,
      20,   133,   133,    31,    18,   109,   133,    31,   112,   113,
     133,    28,   133,    30,   133,    32,   127,    34,   163,    72,
      31,   166,    39,   133,    20,   140,   140,    55,    45,   170,
     169,   139,   139,   403,    51,   172,   139,   112,   113,   140,
     172,   172,   504,   110,    55,   171,   170,   101,   102,   172,
      67,   172,   105,   172,   169,   165,    52,   161,   166,   163,
     113,    13,    14,   170,   164,   163,   541,   170,   110,   170,
     170,    88,   133,   140,   172,   133,   118,   467,   133,   133,
     224,   101,   102,   111,   358,   171,   476,   133,   163,   109,
     142,   111,   112,   113,   114,   127,   224,   117,   140,   131,
     111,   133,   134,   133,   139,   167,   168,   133,   660,   171,
     139,   501,   140,   141,   139,    56,   260,   145,   596,   171,
     148,   145,     4,   169,     6,   139,   219,   133,   133,   140,
     141,   275,   260,   165,   145,   163,   147,   148,   282,   163,
     146,   161,   170,   163,   139,   173,   163,   275,   110,   173,
     294,   295,   163,   170,   282,   151,   457,   139,   142,   139,
     139,   142,   173,   169,   139,   161,   294,   295,   169,   164,
     164,   224,    19,    20,   139,   127,   170,   139,   140,   131,
     142,   133,   134,   145,   166,   169,   166,   331,   332,   333,
     334,   166,   654,   337,   386,   339,   388,   341,   529,   343,
     139,   166,   664,   331,   332,   333,   334,   260,   139,   337,
     469,   339,   166,   341,   142,   147,   170,   139,   680,   147,
     364,   133,   275,   147,   614,   164,    62,    19,    20,   282,
      66,   147,   170,   164,   172,   625,   364,   165,   170,   383,
     142,   294,   295,   657,   166,   147,   170,    83,    84,    85,
      86,   665,    99,   100,   170,   383,   103,   719,   133,   106,
     107,   108,   109,   165,   111,   112,   113,   114,   147,   164,
     117,    10,   119,   120,   466,   170,   135,   136,   331,   332,
     333,   334,    21,    22,   337,   760,   339,   133,   341,   139,
     343,   170,   142,   591,   141,   145,   143,   144,   145,   146,
     147,   142,   165,   673,   151,   152,   147,    99,   100,   101,
     102,   364,   133,   142,   161,   171,   163,   109,   147,   111,
     112,   113,   114,   133,   165,   117,   127,   119,   120,   140,
     383,   135,   136,   137,   133,   170,   165,   172,   170,   133,
     172,    19,    20,   170,   133,   172,   171,   400,   171,   142,
      33,   171,    33,   612,     1,   135,   148,   149,   150,   151,
     152,   620,   165,   507,   508,    52,   510,   133,   133,   161,
     142,   163,   631,   777,   171,   170,   146,   146,   146,   507,
     508,   165,   510,   146,   146,   146,   146,   146,   146,   146,
     142,   170,   170,   133,   171,    31,    42,   170,   542,   133,
     133,   165,   146,   146,   146,   146,   133,   163,   133,    19,
      20,   165,   165,   168,   542,   163,   165,   164,   133,   678,
     166,    99,   100,   101,   102,   103,   133,   133,   106,   107,
     108,   109,   576,   111,   112,   113,   114,   127,   115,   117,
     170,   119,   120,   587,   636,   589,    35,   748,   576,   170,
     170,   170,   170,   170,   507,   508,    18,   510,   172,   587,
     164,   135,   133,   141,   723,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   139,    19,    20,   139,   165,
     133,   133,   147,   161,   147,   163,    12,   147,   142,   542,
     127,   101,   102,   171,    38,   171,   165,   164,   133,   109,
     133,   645,   112,   113,   114,   164,   164,   117,   164,   166,
     133,    48,   393,   164,   164,   147,   147,   645,    53,   778,
     164,   164,   164,   576,   172,    94,    56,    54,   672,   825,
     233,    72,   318,   730,   587,     1,   589,   344,   218,   270,
     589,   636,   236,   167,   672,    66,   805,   282,   370,   808,
     663,   161,   389,   163,   336,   819,    99,   100,   101,   102,
     103,    -1,   256,   106,   107,   108,   109,    -1,   111,   112,
     113,   114,    -1,    -1,   117,    -1,   119,   120,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   645,    -1,    -1,    23,    -1,    -1,   292,   293,
      -1,    29,   296,   146,   147,   148,   149,   150,   151,   152,
     304,   305,   306,   307,   308,   309,    44,    -1,   161,   672,
     163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,   809,    -1,    -1,    19,    20,
      -1,    -1,   366,    -1,   368,    -1,    -1,    -1,    -1,    -1,
     374,   809,    -1,    -1,   378,    -1,    -1,   381,    -1,    -1,
      -1,    -1,   836,   387,    -1,   389,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,   836,    -1,
      -1,    -1,   406,   407,    -1,    -1,   410,   411,   412,   413,
      -1,   415,    -1,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,    -1,
     434,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,    -1,    -1,    -1,    -1,   809,    -1,   109,    -1,
     111,   112,   113,   114,    -1,    -1,   117,    -1,   821,   463,
      -1,    -1,    -1,   467,    -1,    -1,   470,   471,    -1,    -1,
     833,   475,   476,   836,    -1,    -1,    -1,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    19,    20,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,   501,    23,    -1,
     161,   505,   163,    -1,    29,    -1,    -1,    -1,    -1,    -1,
     514,    -1,   516,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,   525,    -1,    -1,   528,   529,    -1,    -1,   532,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    99,   100,   101,
     102,   103,    -1,    -1,   106,   107,   108,   109,    -1,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,   120,   593,
      -1,    -1,    -1,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   133,   141,
     614,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   625,    -1,    19,    20,    -1,    -1,    -1,    -1,   161,
      -1,   163,    -1,    -1,   638,   639,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,
      -1,   655,    -1,    -1,    -1,    -1,    -1,   661,    -1,   663,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   676,    -1,    -1,    -1,    -1,    -1,    -1,   683,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
     734,   735,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     744,    -1,    -1,    -1,   140,   141,    -1,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,    -1,   763,
      -1,    -1,    -1,    -1,    -1,   161,    -1,   163,    -1,    -1,
      -1,    -1,    -1,   777,   170,    -1,    -1,   781,    -1,    -1,
      -1,    -1,   786,    -1,   788,   789,   790,    -1,    -1,   793,
      -1,   795,   796,    -1,    -1,    -1,     1,   801,    -1,    -1,
       5,    -1,     7,     8,     9,    -1,    11,    -1,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,   828,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,   838,    40,    41,    -1,    43,    -1,
      45,    46,    47,    -1,    49,    50,    -1,    -1,    53,    54,
      -1,    -1,    -1,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    78,    79,    80,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,   150,    -1,    -1,    -1,    -1,
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    -1,   167,   168,   169,   170,   171,   172,     1,    -1,
      -1,    -1,     5,    -1,     7,     8,     9,    -1,    11,    -1,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,    -1,
      43,    -1,    45,    46,    47,    -1,    49,    50,    -1,    -1,
      53,    54,    -1,    -1,    -1,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,   150,    -1,    -1,
      -1,    -1,   155,   156,    -1,    -1,    -1,    -1,    13,    14,
      15,    16,   165,    -1,   167,   168,   169,   170,   171,   172,
      25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    78,    79,    80,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,   140,   141,    -1,    -1,    -1,
     145,    -1,    -1,   148,   149,   150,    -1,    -1,    -1,    -1,
     155,   156,    -1,    13,    14,    15,    16,    -1,   163,   164,
     165,    -1,   167,   168,   169,    25,   171,    -1,   173,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,    -1,    -1,   145,    -1,    -1,   148,   149,
     150,    -1,    -1,    -1,    -1,   155,   156,    -1,    13,    14,
      15,    16,    -1,   163,    -1,   165,    -1,   167,   168,   169,
      25,   171,    -1,   173,    -1,    31,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    78,    79,    80,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,   140,   141,    -1,    -1,    -1,   145,
     145,    -1,   148,   148,   149,   150,    -1,    -1,    -1,    -1,
     155,   156,    -1,    13,    14,    15,    16,   163,   163,   165,
     165,    -1,   167,   168,   169,    25,   171,   173,   173,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    31,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,   148,   149,
     150,    13,    14,    15,    16,   155,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,   165,    -1,   167,   168,   169,
     170,   171,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,   111,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    89,   140,   141,
      -1,    -1,    -1,   145,    -1,    -1,   148,    -1,    -1,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,   173,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,    -1,
      -1,    -1,    -1,   155,   156,    -1,    13,    14,    15,    16,
      -1,   163,    -1,   165,   166,   167,   168,   169,    25,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    78,    79,    80,    -1,    -1,    83,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      -1,   148,   149,   150,    -1,    -1,    -1,    25,   155,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    37,
     167,   168,   169,    41,   171,    43,    -1,    -1,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,   146,    -1,
     148,   149,   150,    -1,    -1,    -1,    25,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    37,   167,
     168,   169,    41,   171,    43,    -1,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    78,
      79,    80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    -1,    -1,   148,
     149,   150,    -1,    -1,    -1,    25,   155,   156,    31,    -1,
      -1,    -1,    -1,    -1,    -1,   164,   165,    37,   167,   168,
     169,    41,   171,    43,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    55,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    31,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,   140,   141,    -1,
      -1,    -1,   145,    55,   147,   148,    -1,    -1,   148,   149,
     150,    13,    14,    15,    16,   155,   156,    -1,    20,    -1,
     163,    -1,    -1,    25,    -1,   165,    -1,   167,   168,   169,
     173,   171,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,   111,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    89,   140,   141,
      -1,    -1,    -1,   145,    -1,   147,   148,    -1,    -1,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    -1,    -1,   148,   149,   150,    -1,
      -1,    -1,    25,   155,   156,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    37,   167,   168,   169,    41,   171,
      43,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,   140,   141,    -1,    -1,    -1,   145,
      55,   147,   148,    -1,    -1,   148,   149,   150,    13,    14,
      15,    16,   155,   156,    -1,    -1,    -1,   163,    -1,    -1,
      25,    -1,   165,   166,   167,   168,   169,   173,   171,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    59,    60,   111,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    78,    79,    80,    -1,    -1,    83,    84,
      85,    86,    -1,    -1,    89,   140,   141,    -1,    -1,    -1,
     145,    -1,   147,   148,    -1,    -1,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
      16,    -1,    -1,   148,   149,   150,    -1,    -1,    -1,    25,
     155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     165,    37,   167,   168,   169,    41,   171,    43,    -1,    -1,
      46,    -1,    -1,    -1,    50,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,   140,   141,    -1,    -1,    -1,   145,    55,   147,   148,
      -1,    -1,   148,   149,   150,    13,    14,    15,    16,   155,
     156,    -1,    -1,    -1,   163,    -1,    -1,    25,    -1,   165,
     166,   167,   168,   169,   173,   171,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,   111,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
      -1,    89,   140,   141,    -1,    -1,    -1,   145,    -1,   147,
     148,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,   173,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
     148,   149,   150,    13,    14,    15,    16,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,   165,   166,   167,
     168,   169,    -1,   171,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,   111,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    89,
     140,   141,    -1,    -1,    -1,   145,    -1,   147,   148,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,   173,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,   148,   149,
     150,    13,    14,    15,    16,   155,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,   165,   166,   167,   168,   169,
      -1,   171,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,   111,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    78,    79,    80,    -1,
      -1,    83,    84,    85,    86,    -1,    -1,    89,   140,   141,
      -1,    -1,    -1,   145,    -1,   147,   148,    -1,    -1,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,   173,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    15,    16,    -1,    -1,   148,   149,   150,    -1,
      -1,    -1,    25,   155,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,    37,   167,   168,   169,    41,   171,
      43,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    -1,    -1,   148,   149,   150,    -1,    -1,
      -1,    25,   155,   156,    31,    -1,    31,    -1,    -1,    -1,
      -1,    -1,   165,    37,   167,   168,   169,    41,   171,    43,
      -1,    -1,    46,    -1,    -1,    -1,    50,    -1,    55,    -1,
      55,    -1,    -1,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    78,    79,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,
      -1,    -1,    -1,   110,   111,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,    -1,    -1,   140,   141,   140,   141,    -1,   145,    55,
     145,   148,   147,   148,   148,   149,   150,    13,    14,    15,
      16,   155,   156,    -1,    -1,    -1,   163,    -1,   163,    25,
      -1,   165,   166,   167,   168,   169,   173,   171,   173,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,   111,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    -1,    -1,    89,   140,   141,    -1,    -1,    -1,   145,
      -1,   147,   148,    -1,    -1,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,   173,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,   148,   149,   150,    13,    14,    15,    16,   155,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,   165,
     166,   167,   168,   169,    -1,   171,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    46,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,   111,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
      -1,    89,   140,   141,    -1,    -1,    -1,   145,    -1,    -1,
     148,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   163,    -1,    -1,   166,    -1,
      -1,    -1,    -1,    -1,    -1,   173,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,
     148,   149,   150,    -1,    -1,    -1,    25,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    37,   167,
     168,   169,    41,   171,    43,    -1,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    78,
      79,    80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    -1,   148,
     149,   150,    -1,    -1,    -1,    25,   155,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   165,    37,   167,   168,
     169,    41,   171,    43,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    15,    16,    -1,    -1,   148,   149,
     150,    -1,    -1,    -1,    25,   155,   156,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   165,    37,   167,   168,   169,
      41,   171,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    78,    79,    80,
      -1,    -1,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,    19,    20,    -1,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,    -1,   140,   141,    -1,    -1,
      -1,   145,    -1,   147,   148,    -1,    -1,   148,   149,   150,
      -1,    -1,    -1,    -1,   155,   156,    -1,    -1,    -1,   163,
      -1,    -1,    -1,    -1,   165,    -1,   167,   168,   169,   173,
     171,    -1,    -1,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    19,    20,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,    -1,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,   163,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    19,    20,   117,   118,   119,   120,
     121,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
     141,    -1,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      19,    20,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,    -1,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,   163,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    19,    20,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,   141,    -1,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,    -1,    -1,    19,    20,    -1,    -1,    -1,   161,    -1,
     163,    99,   100,   101,   102,   103,    -1,   170,   106,   107,
     108,   109,    -1,   111,   112,   113,   114,    -1,    -1,   117,
      -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,   161,    -1,   163,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    99,   100,   101,   102,   103,    -1,    -1,
     106,   107,   108,   109,    -1,   111,   112,   113,   114,    -1,
      -1,   117,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,    -1,    19,
      20,    -1,    -1,    -1,    -1,   161,    -1,   163,    -1,    -1,
     166,    99,   100,   101,   102,   103,    -1,    -1,   106,   107,
     108,   109,    -1,   111,   112,   113,   114,    -1,    -1,   117,
      -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,   161,    -1,   163,    -1,    -1,   166,    99,
     100,   101,   102,   103,    -1,    -1,   106,   107,   108,   109,
      -1,   111,   112,   113,   114,    -1,    -1,   117,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,    -1,    19,    20,    -1,    -1,    -1,
      -1,   161,    -1,   163,    -1,    -1,   166,    99,   100,   101,
     102,   103,    -1,    -1,   106,   107,   108,   109,    -1,   111,
     112,   113,   114,    -1,    -1,   117,    -1,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,   161,
      -1,   163,    -1,    -1,   166,    99,   100,   101,   102,   103,
      -1,    -1,   106,   107,   108,   109,    -1,   111,   112,   113,
     114,    -1,    -1,   117,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,   161,    -1,   163,
      -1,    -1,   166,    99,   100,   101,   102,   103,    -1,    -1,
     106,   107,   108,   109,    -1,   111,   112,   113,   114,    -1,
      -1,   117,    -1,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    -1,   163,    -1,    -1,
     166,    99,   100,   101,   102,   103,    -1,    -1,   106,   107,
     108,   109,    -1,   111,   112,   113,   114,    -1,    -1,   117,
      -1,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    29,    -1,   141,    -1,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,   163,    -1,    -1,   166,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    19,
      20,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    19,    20,   169,    99,
     100,   101,   102,   103,    -1,    -1,   106,   107,   108,   109,
      -1,   111,   112,   113,   114,    -1,    -1,   117,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,
      -1,   141,    -1,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,   163,   164,    19,    20,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,   169,    99,   100,   101,   102,
     103,    -1,    -1,   106,   107,   108,   109,    -1,   111,   112,
     113,   114,    -1,    -1,   117,    55,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
     163,   164,    19,    20,    -1,    99,   100,   101,   102,   103,
      -1,   111,   106,   107,   108,   109,    -1,   111,   112,   113,
     114,    -1,    -1,   117,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140,   141,    -1,    -1,    -1,   145,    -1,   141,   148,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
      -1,    -1,    -1,   163,    -1,    -1,   166,   161,    -1,   163,
     164,    -1,    -1,   173,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    -1,
     117,   118,   119,   120,   121,   122,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   140,   141,    -1,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,   163,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,   117,   118,   119,   120,   121,   122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,    -1,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,
     163,    99,   100,   101,   102,   103,    -1,    -1,   106,   107,
     108,   109,    -1,   111,   112,   113,   114,    -1,    -1,   117,
      -1,   119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,   161,    -1,   163,    -1,    -1,    -1,    -1,
      99,   100,   101,   102,   103,    -1,    -1,   106,   107,   108,
     109,    -1,   111,   112,   113,   114,    -1,    -1,   117,    -1,
     119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    -1,   163,    99,   100,   101,   102,   103,
      -1,    -1,   106,   107,   108,   109,    -1,   111,   112,   113,
     114,    -1,    -1,   117,    -1,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    -1,    -1,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,   163,
      -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,    -1,
      -1,   106,   107,   108,   109,    -1,   111,   112,   113,   114,
      -1,    -1,   117,    -1,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,   163,    99,
     100,   101,   102,   103,    -1,    -1,   106,   107,   108,   109,
      -1,   111,   112,   113,   114,    -1,    -1,   117,    -1,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,   163,    -1,    -1,    -1,    -1,    99,   100,
     101,   102,   103,    19,    20,   106,   107,   108,   109,    31,
     111,   112,   113,   114,    -1,    -1,   117,    -1,   119,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    -1,   163,    99,   100,   101,   102,   103,    -1,    -1,
     106,    -1,    -1,   109,    -1,   111,   112,   113,   114,    31,
      -1,   117,    -1,   119,   120,   101,   102,    -1,    -1,   111,
      -1,    -1,    -1,   109,    -1,   111,   112,   113,   114,    -1,
      -1,   117,    -1,    55,    -1,    -1,    -1,    -1,    -1,   111,
     146,   147,   148,   149,   150,   151,   152,    -1,   140,   141,
      -1,    -1,    -1,   145,    -1,   161,   148,   163,    -1,    -1,
      -1,    -1,   148,   149,   150,   151,   152,    -1,   140,   141,
      -1,   163,    -1,   145,   166,   161,   148,   163,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,
      -1,   163,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
      -1,    -1,    -1,   145,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,   173,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,    -1,   155,   156
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   175,     0,     5,    28,    30,    32,    34,    39,    45,
      51,    67,    88,   163,   170,   176,   181,   182,   186,   205,
     209,   223,   265,   270,   271,   274,   309,   311,   133,   200,
     201,   127,   187,   188,   133,   183,   184,   133,   171,   133,
     312,   310,    32,   133,   169,   202,   203,   204,   214,     4,
       6,    56,   264,   140,   139,   142,   139,    20,    52,   151,
     161,   185,   142,   171,   133,   268,   269,   133,   133,   169,
     133,   165,   139,   164,   133,   273,    33,   101,   102,   133,
     208,   171,   266,    13,    14,   127,   131,   133,   134,   165,
     178,   200,   127,   188,   133,   133,   133,    62,    66,    83,
      84,    85,    86,   277,   267,   140,   172,   268,   171,   171,
     133,   201,   203,   142,   272,   171,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   119,   120,   121,   122,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   155,   156,
      33,    33,   165,   206,   263,     1,   135,   177,    13,    14,
     127,   131,   133,   178,   198,   199,   185,   171,   133,   172,
      23,    29,    44,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   214,   276,   278,   279,   281,
     284,   133,   280,   133,   256,   257,   166,   214,   251,   163,
     166,   248,   252,   253,   142,   207,   133,   172,   262,   275,
     170,   135,   136,   139,   166,   267,   140,   170,   146,   146,
     146,   146,   165,   146,   146,   146,   146,   146,   146,    31,
      55,   111,   140,   141,   145,   148,   163,   170,   173,   170,
     142,   170,   172,   248,   250,   201,    45,   259,   275,   166,
     170,   284,   171,   210,   139,   142,   145,   261,   198,   172,
      13,    14,    15,    16,    25,    37,    41,    43,    46,    50,
      67,    89,   101,   102,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   134,   148,   149,   150,   155,   156,   165,
     167,   168,   180,   210,   214,   216,   225,   232,   235,   236,
     237,   240,   241,   242,   247,   276,   313,   316,   321,   323,
     325,   287,   289,   291,   285,   133,   282,   293,   295,   297,
     299,   301,   303,   305,   307,    31,    31,   145,   163,   173,
     164,   247,   133,   172,   284,   172,   256,    42,   249,   170,
     164,   259,   110,   140,   142,   145,   258,   252,   212,   133,
     284,   110,   118,   140,   260,   284,   313,   165,   165,   146,
     146,   165,   146,   146,   247,   247,    11,   284,    11,   284,
     247,   318,   322,   179,   247,   247,   247,   247,   247,   247,
     168,   133,   165,   205,    19,    20,    99,   100,   101,   102,
     103,   106,   107,   108,   109,   111,   112,   113,   114,   117,
     119,   120,   141,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   161,   163,   170,   165,   284,   284,   284,
     284,   166,   280,   284,   206,   284,   206,   284,   206,   133,
     254,   255,   284,   257,   164,   164,   259,   284,   116,   213,
     238,   247,     1,     7,     8,     9,    11,    24,    26,    27,
      36,    40,    47,    49,    53,    54,    90,   170,   172,   189,
     190,   193,   194,   195,   196,   197,   211,   213,   215,   217,
     218,   219,   220,   221,   223,   224,   238,   239,   247,   140,
     170,   260,   213,   247,   165,   133,   247,   226,   228,   247,
     230,   284,   275,   133,   148,   164,   165,   247,   314,   315,
     317,   318,   319,   320,   275,   165,   315,   320,   123,   170,
     172,   136,   137,   177,   166,   146,   214,   163,   166,   233,
     247,   206,    17,   133,   133,   247,   247,   247,   247,   247,
     247,   133,   247,   133,   247,   247,   247,   247,   247,    20,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   133,   247,   166,   233,   147,   170,   147,   147,   147,
     170,   147,   207,   147,   207,   147,   207,   142,   147,   170,
     147,   170,   140,   258,   168,   236,   115,    91,    92,    93,
      94,    95,    96,    97,    98,   104,   105,   110,   118,   121,
     122,   140,   247,   275,   110,   170,   213,   247,   210,   247,
     247,   170,   127,    53,   247,   110,   213,   247,    35,   170,
     170,   247,   170,   170,   170,    18,   222,   170,   110,   140,
     213,   247,   170,   166,   233,    17,   146,   247,   166,   284,
     284,   166,   284,   147,    18,   258,   164,   166,   139,   164,
     170,   139,   164,   170,    18,   166,   172,   172,   247,   318,
     172,   247,   243,   245,   133,   314,   139,   166,   207,   284,
     165,   164,   133,   142,   164,   166,   288,   284,   292,   286,
     283,   294,   147,   298,   147,   302,   147,   284,   306,   254,
     308,   247,   236,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   210,    18,
     213,   247,   170,    12,   210,   142,   127,   213,   247,   170,
     171,   210,    38,   262,   116,   116,   170,   166,   284,   133,
     166,   147,   147,   147,   165,   233,   247,   315,   133,   164,
     314,   247,   164,   319,   233,   315,   164,   164,   138,   284,
     206,   164,   247,   123,   210,   234,   166,   233,   247,   147,
     296,   300,   304,   233,   170,   210,   170,   212,    10,    21,
      22,   191,   192,   247,   247,   166,   147,   170,   227,   229,
     231,   166,   247,   170,   164,   258,   170,   172,   147,   207,
     166,   110,   247,   166,   290,   170,   172,   210,   247,    17,
     247,   133,   247,   247,   247,   166,   247,   164,   247,   247,
     164,   244,   147,   247,   210,   210,   284,   166,   147,   170,
     324,   324,   214,   246,   192,   166,    17,   247,    48,   164,
     172,   214,   284,   166,   247,   164,   164,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   174,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   177,   177,   178,   179,
     179,   179,   180,   181,   182,   183,   183,   183,   184,   184,
     185,   185,   186,   187,   187,   188,   188,   189,   190,   190,
     191,   191,   192,   192,   192,   193,   193,   194,   195,   196,
     197,   198,   198,   198,   198,   198,   198,   199,   199,   200,
     200,   200,   200,   200,   200,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   206,   206,
     207,   207,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   209,
     210,   210,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     212,   212,   212,   213,   213,   214,   214,   214,   215,   216,
     216,   216,   216,   217,   218,   219,   219,   219,   219,   219,
     220,   220,   220,   220,   221,   222,   222,   223,   223,   224,
     226,   227,   225,   228,   229,   225,   230,   231,   225,   232,
     232,   232,   232,   232,   232,   233,   233,   234,   234,   234,
     235,   235,   236,   236,   237,   237,   237,   237,   237,   237,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   239,   239,   240,   241,
     241,   242,   243,   244,   242,   245,   246,   242,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   248,   248,   249,   249,   250,   251,   251,   252,   252,
     253,   253,   254,   254,   255,   255,   256,   257,   257,   258,
     258,   259,   259,   259,   259,   259,   259,   260,   260,   260,
     261,   261,   262,   262,   262,   262,   262,   263,   263,   264,
     264,   265,   266,   265,   267,   267,   267,   268,   269,   269,
     270,   271,   271,   272,   272,   273,   274,   275,   275,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   277,   277,   277,   277,   277,   277,
     278,   279,   279,   280,   280,   282,   283,   281,   284,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   285,   286,   284,   284,   287,   288,
     284,   289,   290,   284,   291,   292,   284,   284,   293,   294,
     284,   295,   296,   284,   284,   297,   298,   284,   299,   300,
     284,   284,   301,   302,   284,   303,   304,   284,   305,   306,
     284,   307,   308,   284,   310,   309,   312,   311,   313,   313,
     313,   313,   314,   314,   315,   315,   316,   316,   316,   316,
     316,   317,   317,   318,   319,   319,   320,   320,   321,   321,
     322,   322,   323,   324,   324,   325,   325
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     0,
       2,     4,     3,     2,     2,     1,     3,     3,     2,     4,
       0,     1,     2,     1,     3,     1,     3,     3,     3,     2,
       1,     1,     0,     2,     4,     1,     1,     4,     6,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     5,     1,     3,     1,
       1,     1,     4,     1,     3,     0,     3,     0,     2,     3,
       0,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     6,
       3,     7,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     2,     2,     2,
       0,     2,     2,     3,     2,     1,     3,     2,     2,     2,
       4,     5,     2,     1,     1,     2,     3,     4,     2,     3,
       3,     4,     2,     3,     4,     0,     2,     1,     1,     3,
       0,     0,     7,     0,     0,     7,     0,     0,     7,     5,
       8,    10,     6,     9,    11,     1,     3,     1,     2,     3,
       1,     1,     1,     5,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     6,     5,
       6,     3,     0,     0,     8,     0,     0,     9,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     4,     4,     3,     3,     1,     3,     4,     3,
       4,     2,     4,     4,     6,     7,     3,     5,     4,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     0,     3,     0,     1,     3,     0,     3,     2,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     2,     3,     5,     3,     3,     1,     1,     1,
       0,     1,     4,     6,     5,     5,     4,     0,     2,     0,
       1,     5,     0,     5,     0,     3,     5,     4,     1,     2,
       4,     5,     7,     0,     2,     2,     6,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     0,     0,     6,     1,     1,
       1,     1,     4,     3,     4,     2,     3,     2,     3,     2,
       2,     3,     3,     2,     0,     0,     6,     2,     0,     0,
       6,     0,     0,     8,     0,     0,     6,     1,     0,     0,
       6,     0,     0,     7,     1,     0,     0,     6,     0,     0,
       7,     1,     0,     0,     6,     0,     0,     7,     0,     0,
       6,     0,     0,     6,     0,     7,     0,     7,     1,     1,
       1,     1,     3,     5,     1,     3,     5,     4,     7,     5,
       7,     1,     3,     3,     1,     1,     1,     3,     5,     5,
       1,     3,     4,     0,     3,    10,    10
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if DAS_YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !DAS_YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !DAS_YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 133: /* "name"  */
#line 109 "ds_parser.ypp"
      { delete ((*yyvaluep).s); }
#line 3181 "ds_parser.cpp"
        break;

    case 177: /* character_sequence  */
#line 109 "ds_parser.ypp"
      { delete ((*yyvaluep).s); }
#line 3187 "ds_parser.cpp"
        break;

    case 178: /* string_constant  */
#line 109 "ds_parser.ypp"
      { delete ((*yyvaluep).s); }
#line 3193 "ds_parser.cpp"
        break;

    case 179: /* string_builder_body  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3199 "ds_parser.cpp"
        break;

    case 180: /* string_builder  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3205 "ds_parser.cpp"
        break;

    case 183: /* require_module_name  */
#line 109 "ds_parser.ypp"
      { delete ((*yyvaluep).s); }
#line 3211 "ds_parser.cpp"
        break;

    case 189: /* expression_label  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3217 "ds_parser.cpp"
        break;

    case 190: /* expression_goto  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3223 "ds_parser.cpp"
        break;

    case 192: /* expression_else  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3229 "ds_parser.cpp"
        break;

    case 194: /* expression_if_then_else  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3235 "ds_parser.cpp"
        break;

    case 195: /* expression_for_loop  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3241 "ds_parser.cpp"
        break;

    case 196: /* expression_while_loop  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3247 "ds_parser.cpp"
        break;

    case 197: /* expression_with  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3253 "ds_parser.cpp"
        break;

    case 198: /* annotation_argument_value  */
#line 116 "ds_parser.ypp"
      { delete ((*yyvaluep).aa); }
#line 3259 "ds_parser.cpp"
        break;

    case 199: /* annotation_argument_value_list  */
#line 117 "ds_parser.ypp"
      { delete ((*yyvaluep).aaList); }
#line 3265 "ds_parser.cpp"
        break;

    case 200: /* annotation_argument  */
#line 116 "ds_parser.ypp"
      { delete ((*yyvaluep).aa); }
#line 3271 "ds_parser.cpp"
        break;

    case 201: /* annotation_argument_list  */
#line 117 "ds_parser.ypp"
      { delete ((*yyvaluep).aaList); }
#line 3277 "ds_parser.cpp"
        break;

    case 202: /* annotation_declaration_name  */
#line 109 "ds_parser.ypp"
      { delete ((*yyvaluep).s); }
#line 3283 "ds_parser.cpp"
        break;

    case 203: /* annotation_declaration  */
#line 118 "ds_parser.ypp"
      { delete ((*yyvaluep).fa); }
#line 3289 "ds_parser.cpp"
        break;

    case 204: /* annotation_list  */
#line 119 "ds_parser.ypp"
      { delete ((*yyvaluep).faList); }
#line 3295 "ds_parser.cpp"
        break;

    case 205: /* optional_annotation_list  */
#line 119 "ds_parser.ypp"
      { delete ((*yyvaluep).faList); }
#line 3301 "ds_parser.cpp"
        break;

    case 206: /* optional_function_argument_list  */
#line 113 "ds_parser.ypp"
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 3307 "ds_parser.cpp"
        break;

    case 207: /* optional_function_type  */
#line 114 "ds_parser.ypp"
      { delete ((*yyvaluep).pTypeDecl); }
#line 3313 "ds_parser.cpp"
        break;

    case 208: /* function_name  */
#line 109 "ds_parser.ypp"
      { delete ((*yyvaluep).s); }
#line 3319 "ds_parser.cpp"
        break;

    case 210: /* expression_block  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3325 "ds_parser.cpp"
        break;

    case 211: /* expression_any  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3331 "ds_parser.cpp"
        break;

    case 212: /* expressions  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3337 "ds_parser.cpp"
        break;

    case 213: /* expr_pipe  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3343 "ds_parser.cpp"
        break;

    case 214: /* name_in_namespace  */
#line 109 "ds_parser.ypp"
      { delete ((*yyvaluep).s); }
#line 3349 "ds_parser.cpp"
        break;

    case 215: /* expression_delete  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3355 "ds_parser.cpp"
        break;

    case 216: /* expr_new  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3361 "ds_parser.cpp"
        break;

    case 217: /* expression_break  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3367 "ds_parser.cpp"
        break;

    case 218: /* expression_continue  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3373 "ds_parser.cpp"
        break;

    case 219: /* expression_return  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3379 "ds_parser.cpp"
        break;

    case 220: /* expression_yield  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3385 "ds_parser.cpp"
        break;

    case 221: /* expression_try_catch  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3391 "ds_parser.cpp"
        break;

    case 224: /* expression_let  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3397 "ds_parser.cpp"
        break;

    case 225: /* expr_cast  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3403 "ds_parser.cpp"
        break;

    case 232: /* expr_type_info  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3409 "ds_parser.cpp"
        break;

    case 233: /* expr_list  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3415 "ds_parser.cpp"
        break;

    case 234: /* block_or_simple_block  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3421 "ds_parser.cpp"
        break;

    case 236: /* expr_block  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3427 "ds_parser.cpp"
        break;

    case 237: /* expr_numeric_const  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3433 "ds_parser.cpp"
        break;

    case 238: /* expr_assign  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3439 "ds_parser.cpp"
        break;

    case 239: /* expr_assign_pipe  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3445 "ds_parser.cpp"
        break;

    case 240: /* expr_named_call  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3451 "ds_parser.cpp"
        break;

    case 241: /* expr_method_call  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3457 "ds_parser.cpp"
        break;

    case 242: /* func_addr_expr  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3463 "ds_parser.cpp"
        break;

    case 247: /* expr  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3469 "ds_parser.cpp"
        break;

    case 248: /* optional_field_annotation  */
#line 117 "ds_parser.ypp"
      { delete ((*yyvaluep).aaList); }
#line 3475 "ds_parser.cpp"
        break;

    case 250: /* structure_variable_declaration  */
#line 112 "ds_parser.ypp"
      { delete ((*yyvaluep).pVarDecl); }
#line 3481 "ds_parser.cpp"
        break;

    case 251: /* struct_variable_declaration_list  */
#line 113 "ds_parser.ypp"
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 3487 "ds_parser.cpp"
        break;

    case 252: /* function_argument_declaration  */
#line 112 "ds_parser.ypp"
      { delete ((*yyvaluep).pVarDecl); }
#line 3493 "ds_parser.cpp"
        break;

    case 253: /* function_argument_list  */
#line 113 "ds_parser.ypp"
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 3499 "ds_parser.cpp"
        break;

    case 254: /* tuple_type  */
#line 112 "ds_parser.ypp"
      { delete ((*yyvaluep).pVarDecl); }
#line 3505 "ds_parser.cpp"
        break;

    case 255: /* tuple_type_list  */
#line 113 "ds_parser.ypp"
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 3511 "ds_parser.cpp"
        break;

    case 256: /* variant_type  */
#line 112 "ds_parser.ypp"
      { delete ((*yyvaluep).pVarDecl); }
#line 3517 "ds_parser.cpp"
        break;

    case 257: /* variant_type_list  */
#line 113 "ds_parser.ypp"
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 3523 "ds_parser.cpp"
        break;

    case 259: /* variable_declaration  */
#line 112 "ds_parser.ypp"
      { delete ((*yyvaluep).pVarDecl); }
#line 3529 "ds_parser.cpp"
        break;

    case 262: /* let_variable_declaration  */
#line 112 "ds_parser.ypp"
      { delete ((*yyvaluep).pVarDecl); }
#line 3535 "ds_parser.cpp"
        break;

    case 263: /* global_variable_declaration_list  */
#line 113 "ds_parser.ypp"
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 3541 "ds_parser.cpp"
        break;

    case 267: /* enum_list  */
#line 121 "ds_parser.ypp"
      { delete ((*yyvaluep).pEnum); }
#line 3547 "ds_parser.cpp"
        break;

    case 272: /* optional_structure_parent  */
#line 109 "ds_parser.ypp"
      { delete ((*yyvaluep).s); }
#line 3553 "ds_parser.cpp"
        break;

    case 275: /* variable_name_with_pos_list  */
#line 111 "ds_parser.ypp"
      { delete ((*yyvaluep).pNameWithPosList); }
#line 3559 "ds_parser.cpp"
        break;

    case 278: /* structure_type_declaration  */
#line 114 "ds_parser.ypp"
      { delete ((*yyvaluep).pTypeDecl); }
#line 3565 "ds_parser.cpp"
        break;

    case 279: /* auto_type_declaration  */
#line 114 "ds_parser.ypp"
      { delete ((*yyvaluep).pTypeDecl); }
#line 3571 "ds_parser.cpp"
        break;

    case 280: /* bitfield_bits  */
#line 110 "ds_parser.ypp"
      { delete ((*yyvaluep).pNameList); }
#line 3577 "ds_parser.cpp"
        break;

    case 281: /* bitfield_type_declaration  */
#line 114 "ds_parser.ypp"
      { delete ((*yyvaluep).pTypeDecl); }
#line 3583 "ds_parser.cpp"
        break;

    case 284: /* type_declaration  */
#line 114 "ds_parser.ypp"
      { delete ((*yyvaluep).pTypeDecl); }
#line 3589 "ds_parser.cpp"
        break;

    case 313: /* make_decl  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3595 "ds_parser.cpp"
        break;

    case 314: /* make_struct_fields  */
#line 120 "ds_parser.ypp"
      { delete ((*yyvaluep).pMakeStruct); }
#line 3601 "ds_parser.cpp"
        break;

    case 315: /* make_struct_dim  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3607 "ds_parser.cpp"
        break;

    case 316: /* make_struct_decl  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3613 "ds_parser.cpp"
        break;

    case 317: /* make_tuple  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3619 "ds_parser.cpp"
        break;

    case 318: /* make_map_tuple  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3625 "ds_parser.cpp"
        break;

    case 319: /* make_any_tuple  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3631 "ds_parser.cpp"
        break;

    case 320: /* make_dim  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3637 "ds_parser.cpp"
        break;

    case 321: /* make_dim_decl  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3643 "ds_parser.cpp"
        break;

    case 322: /* make_table  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3649 "ds_parser.cpp"
        break;

    case 323: /* make_table_decl  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3655 "ds_parser.cpp"
        break;

    case 324: /* array_comprehension_where  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3661 "ds_parser.cpp"
        break;

    case 325: /* array_comprehension  */
#line 115 "ds_parser.ypp"
      { delete ((*yyvaluep).pExpression); }
#line 3667 "ds_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 15:
#line 414 "ds_parser.ypp"
    {
        if ( g_Program->thisModule->name.empty() ) {
            g_Program->thisModule->name = *(yyvsp[0].s);
        } else if ( g_Program->thisModule->name != *(yyvsp[0].s) ){
            das_yyerror("this module already has a name, and its " + g_Program->thisModule->name,tokAt((yylsp[0])),
                CompilationError::module_already_has_a_name);
        }
        delete (yyvsp[0].s);
    }
#line 3967 "ds_parser.cpp"
    break;

  case 16:
#line 426 "ds_parser.ypp"
    { (yyval.s) = new string(); *(yyval.s) += (yyvsp[0].ch); }
#line 3973 "ds_parser.cpp"
    break;

  case 17:
#line 427 "ds_parser.ypp"
    { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += (yyvsp[0].ch); }
#line 3979 "ds_parser.cpp"
    break;

  case 18:
#line 431 "ds_parser.ypp"
    { (yyval.s) = (yyvsp[-1].s); }
#line 3985 "ds_parser.cpp"
    break;

  case 19:
#line 435 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprStringBuilder();
		(yyval.pExpression)->at = LineInfo(g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
#line 3995 "ds_parser.cpp"
    break;

  case 20:
#line 440 "ds_parser.ypp"
    {
        bool err;
        auto esconst = unescapeString(*(yyvsp[0].s),&err);
        if ( err ) das_yyerror("invalid escape sequence",tokAt((yylsp[-1])), CompilationError::invalid_escape_sequence);
        auto sc = make_smart<ExprConstString>(tokAt((yylsp[0])),esconst);
        delete (yyvsp[0].s);
        static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression))->elements.push_back(sc);
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
#line 4009 "ds_parser.cpp"
    break;

  case 21:
#line 449 "ds_parser.ypp"
    {
        auto se = ExpressionPtr((yyvsp[-1].pExpression));
        static_cast<ExprStringBuilder *>((yyvsp[-3].pExpression))->elements.push_back(se);
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
#line 4019 "ds_parser.cpp"
    break;

  case 22:
#line 457 "ds_parser.ypp"
    {
        auto strb = static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression));
        if ( strb->elements.size()==0 ) {
            (yyval.pExpression) = new ExprConstString(strb->at,"");
            delete (yyvsp[-1].pExpression);
        } else if ( strb->elements.size()==1 && strb->elements[0]->rtti_isStringConstant() ) {
            auto sconst = static_pointer_cast<ExprConstString>(strb->elements[0]);
            (yyval.pExpression) = new ExprConstString(strb->at,sconst->text);
            delete (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        }
    }
#line 4037 "ds_parser.cpp"
    break;

  case 23:
#line 473 "ds_parser.ypp"
    {
		if ( g_Program->options.size() ) {
			g_Program->options.insert ( g_Program->options.begin(),
                (yyvsp[0].aaList)->begin(), (yyvsp[0].aaList)->end() );
		} else {
			swap ( g_Program->options, *(yyvsp[0].aaList) );
		}
		auto opt = g_Program->options.find("indenting", tInt);
		extern int das_tab_size, das_def_tab_size;
		if (opt)
		{
			if (opt->iValue != 0 && opt->iValue != 2 && opt->iValue != 4 && opt->iValue != 8)//this is error
				das_tab_size = das_def_tab_size;
			else
				das_tab_size = opt->iValue ? opt->iValue : das_def_tab_size;//0 is default
            g_FileAccessStack.back()->tabSize = das_tab_size;
		}
		delete (yyvsp[0].aaList);
	}
#line 4061 "ds_parser.cpp"
    break;

  case 25:
#line 499 "ds_parser.ypp"
    {
        (yyval.s) = (yyvsp[0].s);
    }
#line 4069 "ds_parser.cpp"
    break;

  case 26:
#line 502 "ds_parser.ypp"
    {
        *(yyvsp[-2].s) += ".";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
#line 4080 "ds_parser.cpp"
    break;

  case 27:
#line 508 "ds_parser.ypp"
    {
        *(yyvsp[-2].s) += "/";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
#line 4091 "ds_parser.cpp"
    break;

  case 28:
#line 517 "ds_parser.ypp"
    {
        auto info = g_Access->getModuleInfo(*(yyvsp[-1].s), g_FileAccessStack.back()->name);
        if ( auto mod = g_Program->addModule(info.moduleName) ) {
            g_Program->thisModule->addDependency(mod, (yyvsp[0].b));
            if ( !info.importName.empty() ) {
                auto ita = das_module_alias.find(info.importName);
                if ( ita !=das_module_alias.end() ) {
                    if ( ita->second != info.moduleName ) {
                        das_yyerror("module alias already used " + info.importName + " as " + ita->second,tokAt((yylsp[-1])),
                            CompilationError::module_not_found);
                    }
                } else {
                    das_module_alias[info.importName] = info.moduleName;
                }
            }
        } else {
            das_yyerror("required module not found " + *(yyvsp[-1].s),tokAt((yylsp[-1])),
                CompilationError::module_not_found);
        }
        delete (yyvsp[-1].s);
    }
#line 4117 "ds_parser.cpp"
    break;

  case 29:
#line 538 "ds_parser.ypp"
    {
        auto info = g_Access->getModuleInfo(*(yyvsp[-3].s), g_FileAccessStack.back()->name);
        if ( auto mod = g_Program->addModule(info.moduleName) ) {
            g_Program->thisModule->addDependency(mod, (yyvsp[0].b));
            auto ita = das_module_alias.find(*(yyvsp[-1].s));
            if ( ita !=das_module_alias.end() ) {
                if ( ita->second != info.moduleName ) {
                    das_yyerror("module alias already used " + *(yyvsp[-1].s) + " as " + ita->second,tokAt((yylsp[-3])),
                        CompilationError::module_not_found);
                }
            } else {
                das_module_alias[*(yyvsp[-1].s)] = info.moduleName;
            }
        } else {
            das_yyerror("required module not found " + *(yyvsp[-3].s),tokAt((yylsp[-3])),
                CompilationError::module_not_found);
        }
        delete (yyvsp[-3].s);
        delete (yyvsp[-1].s);
    }
#line 4142 "ds_parser.cpp"
    break;

  case 30:
#line 561 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 4148 "ds_parser.cpp"
    break;

  case 31:
#line 562 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 4154 "ds_parser.cpp"
    break;

  case 35:
#line 575 "ds_parser.ypp"
    {
        g_Program->expectErrors[CompilationError((yyvsp[0].i))] ++;
    }
#line 4162 "ds_parser.cpp"
    break;

  case 36:
#line 578 "ds_parser.ypp"
    {
        g_Program->expectErrors[CompilationError((yyvsp[-2].i))] += (yyvsp[0].i);
    }
#line 4170 "ds_parser.cpp"
    break;

  case 37:
#line 584 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprLabel(tokAt((yylsp[-2])),(yyvsp[-1].i));
    }
#line 4178 "ds_parser.cpp"
    break;

  case 38:
#line 590 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprGoto(tokAt((yylsp[-2])),(yyvsp[0].i));
    }
#line 4186 "ds_parser.cpp"
    break;

  case 39:
#line 593 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprGoto(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 4194 "ds_parser.cpp"
    break;

  case 40:
#line 599 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 4200 "ds_parser.cpp"
    break;

  case 41:
#line 600 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 4206 "ds_parser.cpp"
    break;

  case 42:
#line 604 "ds_parser.ypp"
    { (yyval.pExpression) = nullptr; }
#line 4212 "ds_parser.cpp"
    break;

  case 43:
#line 605 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4218 "ds_parser.cpp"
    break;

  case 44:
#line 606 "ds_parser.ypp"
    {
        auto eite = new ExprIfThenElse(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
#line 4229 "ds_parser.cpp"
    break;

  case 45:
#line 615 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 4235 "ds_parser.cpp"
    break;

  case 46:
#line 616 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 4241 "ds_parser.cpp"
    break;

  case 47:
#line 620 "ds_parser.ypp"
    {
        auto eite = new ExprIfThenElse(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
#line 4252 "ds_parser.cpp"
    break;

  case 48:
#line 629 "ds_parser.ypp"
    {
        auto pFor = new ExprFor(tokAt((yylsp[-5])));
        for ( const auto & np : *(yyvsp[-4].pNameWithPosList) ) {
            pFor->iterators.push_back(np.first);
            pFor->iteratorsAt.push_back(np.second);
        }
        delete (yyvsp[-4].pNameWithPosList);
        pFor->sources = sequenceToList((yyvsp[-2].pExpression));
        pFor->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pFor;
    }
#line 4269 "ds_parser.cpp"
    break;

  case 49:
#line 644 "ds_parser.ypp"
    {
        auto pWhile = new ExprWhile(tokAt((yylsp[-2])));
        pWhile->cond = ExpressionPtr((yyvsp[-1].pExpression));
        pWhile->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pWhile;
    }
#line 4281 "ds_parser.cpp"
    break;

  case 50:
#line 654 "ds_parser.ypp"
    {
        auto pWith = new ExprWith(tokAt((yylsp[-2])));
        pWith->with = ExpressionPtr((yyvsp[-1].pExpression));
        pWith->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pWith;
    }
#line 4292 "ds_parser.cpp"
    break;

  case 51:
#line 663 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 4298 "ds_parser.cpp"
    break;

  case 52:
#line 664 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 4304 "ds_parser.cpp"
    break;

  case 53:
#line 665 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument("",(yyvsp[0].i)); }
#line 4310 "ds_parser.cpp"
    break;

  case 54:
#line 666 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument("",float((yyvsp[0].fd))); }
#line 4316 "ds_parser.cpp"
    break;

  case 55:
#line 667 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument("",true); }
#line 4322 "ds_parser.cpp"
    break;

  case 56:
#line 668 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument("",false); }
#line 4328 "ds_parser.cpp"
    break;

  case 57:
#line 672 "ds_parser.ypp"
    {
        (yyval.aaList) = new AnnotationArgumentList();
        (yyval.aaList)->push_back(*(yyvsp[0].aa));
        delete (yyvsp[0].aa);
	}
#line 4338 "ds_parser.cpp"
    break;

  case 58:
#line 677 "ds_parser.ypp"
    {
            (yyval.aaList) = (yyvsp[-2].aaList);
            (yyval.aaList)->push_back(*(yyvsp[0].aa));
            delete (yyvsp[0].aa);
    }
#line 4348 "ds_parser.cpp"
    break;

  case 59:
#line 685 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s)); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
#line 4354 "ds_parser.cpp"
    break;

  case 60:
#line 686 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s)); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
#line 4360 "ds_parser.cpp"
    break;

  case 61:
#line 687 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),(yyvsp[0].i)); delete (yyvsp[-2].s); }
#line 4366 "ds_parser.cpp"
    break;

  case 62:
#line 688 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),float((yyvsp[0].fd))); delete (yyvsp[-2].s); }
#line 4372 "ds_parser.cpp"
    break;

  case 63:
#line 689 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),true); delete (yyvsp[-2].s); }
#line 4378 "ds_parser.cpp"
    break;

  case 64:
#line 690 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),false); delete (yyvsp[-2].s); }
#line 4384 "ds_parser.cpp"
    break;

  case 65:
#line 691 "ds_parser.ypp"
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[0].s),true); delete (yyvsp[0].s); }
#line 4390 "ds_parser.cpp"
    break;

  case 66:
#line 692 "ds_parser.ypp"
    {
		{ (yyval.aa) = new AnnotationArgument(*(yyvsp[-4].s),(yyvsp[-1].aaList)); delete (yyvsp[-4].s); }
	}
#line 4398 "ds_parser.cpp"
    break;

  case 67:
#line 698 "ds_parser.ypp"
    {
        (yyval.aaList) = new AnnotationArgumentList();
		if ( (yyvsp[0].aa)->type==Type::none ) {
			for ( auto & sarg : *((yyvsp[0].aa)->aList) ) {
				sarg.name = (yyvsp[0].aa)->name;
				(yyval.aaList)->push_back(sarg);
			}
			delete (yyvsp[0].aa)->aList;
		} else {
			(yyval.aaList)->push_back(*(yyvsp[0].aa));
		}
        delete (yyvsp[0].aa);
    }
#line 4416 "ds_parser.cpp"
    break;

  case 68:
#line 711 "ds_parser.ypp"
    {
            (yyval.aaList) = (yyvsp[-2].aaList);
			if ( (yyvsp[0].aa)->type==Type::none ) {
				for ( auto & sarg : *((yyvsp[0].aa)->aList) ) {
					sarg.name = (yyvsp[0].aa)->name;
					(yyval.aaList)->push_back(sarg);
				}
				delete (yyvsp[0].aa)->aList;
			} else {
				(yyval.aaList)->push_back(*(yyvsp[0].aa));
			}
            delete (yyvsp[0].aa);
    }
#line 4434 "ds_parser.cpp"
    break;

  case 69:
#line 727 "ds_parser.ypp"
    { (yyval.s) = (yyvsp[0].s); }
#line 4440 "ds_parser.cpp"
    break;

  case 70:
#line 728 "ds_parser.ypp"
    { (yyval.s) = new string("require"); }
#line 4446 "ds_parser.cpp"
    break;

  case 71:
#line 732 "ds_parser.ypp"
    {
        (yyval.fa) = new AnnotationDeclaration();
        if ( auto ann = findAnnotation(*(yyvsp[0].s),tokAt((yylsp[0]))) ) {
            (yyval.fa)->annotation = ann;
        }
        delete (yyvsp[0].s);
    }
#line 4458 "ds_parser.cpp"
    break;

  case 72:
#line 739 "ds_parser.ypp"
    {
        (yyval.fa) = new AnnotationDeclaration();
        if ( auto ann = findAnnotation(*(yyvsp[-3].s),tokAt((yylsp[-3]))) ) {
            (yyval.fa)->annotation = ann;
        }
        swap ( (yyval.fa)->arguments, *(yyvsp[-1].aaList) );
        delete (yyvsp[-1].aaList);
        delete (yyvsp[-3].s);
    }
#line 4472 "ds_parser.cpp"
    break;

  case 73:
#line 751 "ds_parser.ypp"
    {
            (yyval.faList) = new AnnotationList();
            (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
#line 4481 "ds_parser.cpp"
    break;

  case 74:
#line 755 "ds_parser.ypp"
    {
        (yyval.faList) = (yyvsp[-2].faList);
        (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
#line 4490 "ds_parser.cpp"
    break;

  case 75:
#line 762 "ds_parser.ypp"
    { (yyval.faList) = nullptr; }
#line 4496 "ds_parser.cpp"
    break;

  case 76:
#line 763 "ds_parser.ypp"
    { (yyval.faList) = (yyvsp[-1].faList); }
#line 4502 "ds_parser.cpp"
    break;

  case 77:
#line 767 "ds_parser.ypp"
    { (yyval.pVarDeclList) = nullptr; }
#line 4508 "ds_parser.cpp"
    break;

  case 78:
#line 768 "ds_parser.ypp"
    { (yyval.pVarDeclList) = nullptr; }
#line 4514 "ds_parser.cpp"
    break;

  case 79:
#line 769 "ds_parser.ypp"
    { (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList); }
#line 4520 "ds_parser.cpp"
    break;

  case 80:
#line 773 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = LineInfo(g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
#line 4530 "ds_parser.cpp"
    break;

  case 81:
#line 778 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
        (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
    }
#line 4539 "ds_parser.cpp"
    break;

  case 82:
#line 785 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[0].s),tokAt((yylsp[0])));
		(yyval.s) = (yyvsp[0].s);
	}
#line 4548 "ds_parser.cpp"
    break;

  case 83:
#line 789 "ds_parser.ypp"
    { (yyval.s) = new string("!"); }
#line 4554 "ds_parser.cpp"
    break;

  case 84:
#line 790 "ds_parser.ypp"
    { (yyval.s) = new string("~"); }
#line 4560 "ds_parser.cpp"
    break;

  case 85:
#line 791 "ds_parser.ypp"
    { (yyval.s) = new string("+="); }
#line 4566 "ds_parser.cpp"
    break;

  case 86:
#line 792 "ds_parser.ypp"
    { (yyval.s) = new string("-="); }
#line 4572 "ds_parser.cpp"
    break;

  case 87:
#line 793 "ds_parser.ypp"
    { (yyval.s) = new string("*="); }
#line 4578 "ds_parser.cpp"
    break;

  case 88:
#line 794 "ds_parser.ypp"
    { (yyval.s) = new string("/="); }
#line 4584 "ds_parser.cpp"
    break;

  case 89:
#line 795 "ds_parser.ypp"
    { (yyval.s) = new string("%="); }
#line 4590 "ds_parser.cpp"
    break;

  case 90:
#line 796 "ds_parser.ypp"
    { (yyval.s) = new string("&="); }
#line 4596 "ds_parser.cpp"
    break;

  case 91:
#line 797 "ds_parser.ypp"
    { (yyval.s) = new string("|="); }
#line 4602 "ds_parser.cpp"
    break;

  case 92:
#line 798 "ds_parser.ypp"
    { (yyval.s) = new string("^="); }
#line 4608 "ds_parser.cpp"
    break;

  case 93:
#line 799 "ds_parser.ypp"
    { (yyval.s) = new string("+"); }
#line 4614 "ds_parser.cpp"
    break;

  case 94:
#line 800 "ds_parser.ypp"
    { (yyval.s) = new string("-"); }
#line 4620 "ds_parser.cpp"
    break;

  case 95:
#line 801 "ds_parser.ypp"
    { (yyval.s) = new string("*"); }
#line 4626 "ds_parser.cpp"
    break;

  case 96:
#line 802 "ds_parser.ypp"
    { (yyval.s) = new string("/"); }
#line 4632 "ds_parser.cpp"
    break;

  case 97:
#line 803 "ds_parser.ypp"
    { (yyval.s) = new string("%"); }
#line 4638 "ds_parser.cpp"
    break;

  case 98:
#line 804 "ds_parser.ypp"
    { (yyval.s) = new string("<"); }
#line 4644 "ds_parser.cpp"
    break;

  case 99:
#line 805 "ds_parser.ypp"
    { (yyval.s) = new string(">"); }
#line 4650 "ds_parser.cpp"
    break;

  case 100:
#line 806 "ds_parser.ypp"
    { (yyval.s) = new string("=="); }
#line 4656 "ds_parser.cpp"
    break;

  case 101:
#line 807 "ds_parser.ypp"
    { (yyval.s) = new string("!="); }
#line 4662 "ds_parser.cpp"
    break;

  case 102:
#line 808 "ds_parser.ypp"
    { (yyval.s) = new string("<="); }
#line 4668 "ds_parser.cpp"
    break;

  case 103:
#line 809 "ds_parser.ypp"
    { (yyval.s) = new string(">="); }
#line 4674 "ds_parser.cpp"
    break;

  case 104:
#line 810 "ds_parser.ypp"
    { (yyval.s) = new string("&"); }
#line 4680 "ds_parser.cpp"
    break;

  case 105:
#line 811 "ds_parser.ypp"
    { (yyval.s) = new string("|"); }
#line 4686 "ds_parser.cpp"
    break;

  case 106:
#line 812 "ds_parser.ypp"
    { (yyval.s) = new string("^"); }
#line 4692 "ds_parser.cpp"
    break;

  case 107:
#line 813 "ds_parser.ypp"
    { (yyval.s) = new string("++"); }
#line 4698 "ds_parser.cpp"
    break;

  case 108:
#line 814 "ds_parser.ypp"
    { (yyval.s) = new string("--"); }
#line 4704 "ds_parser.cpp"
    break;

  case 109:
#line 815 "ds_parser.ypp"
    { (yyval.s) = new string("+++"); }
#line 4710 "ds_parser.cpp"
    break;

  case 110:
#line 816 "ds_parser.ypp"
    { (yyval.s) = new string("---"); }
#line 4716 "ds_parser.cpp"
    break;

  case 111:
#line 817 "ds_parser.ypp"
    { (yyval.s) = new string("<<"); }
#line 4722 "ds_parser.cpp"
    break;

  case 112:
#line 818 "ds_parser.ypp"
    { (yyval.s) = new string(">>"); }
#line 4728 "ds_parser.cpp"
    break;

  case 113:
#line 819 "ds_parser.ypp"
    { (yyval.s) = new string("<<="); }
#line 4734 "ds_parser.cpp"
    break;

  case 114:
#line 820 "ds_parser.ypp"
    { (yyval.s) = new string(">>="); }
#line 4740 "ds_parser.cpp"
    break;

  case 115:
#line 821 "ds_parser.ypp"
    { (yyval.s) = new string("<<<"); }
#line 4746 "ds_parser.cpp"
    break;

  case 116:
#line 822 "ds_parser.ypp"
    { (yyval.s) = new string(">>>"); }
#line 4752 "ds_parser.cpp"
    break;

  case 117:
#line 823 "ds_parser.ypp"
    { (yyval.s) = new string("<<<="); }
#line 4758 "ds_parser.cpp"
    break;

  case 118:
#line 824 "ds_parser.ypp"
    { (yyval.s) = new string(">>>="); }
#line 4764 "ds_parser.cpp"
    break;

  case 119:
#line 829 "ds_parser.ypp"
    {
        auto pFunction = make_smart<Function>();
        pFunction->at = tokAt((yylsp[-3]));
        pFunction->atDecl = tokRangeAt((yylsp[-4]), (yylsp[0]));
        /*
        TextPrinter tp;
        tp  << *$name << " at " << pFunction->at.describe(true) << "\n"
            << " range: " << pFunction->atDecl.describe(true) << "\n"
            << " from:" << tokAt(@from).describe(true) << "\n"
            << " block: " << tokAt(@block).describe(true) << "\n";
        */
        pFunction->name = *(yyvsp[-3].s);
        pFunction->body = ExpressionPtr((yyvsp[0].pExpression));
        pFunction->result = TypeDeclPtr((yyvsp[-1].pTypeDecl));
        if ( (yyvsp[-2].pVarDeclList) ) {
            for ( auto pDecl : *(yyvsp[-2].pVarDeclList) ) {
                if ( pDecl->pTypeDecl ) {
                    for ( const auto & name_at : *pDecl->pNameList ) {
                        if ( !pFunction->findArgument(name_at.first) ) {
                            VariablePtr pVar = make_smart<Variable>();
                            pVar->name = name_at.first;
                            pVar->at = name_at.second;
                            pVar->type = make_smart<TypeDecl>(*pDecl->pTypeDecl);
                            if ( pDecl->pInit ) {
                                pVar->init = ExpressionPtr(pDecl->pInit->clone());
                                pVar->init_via_move = pDecl->init_via_move;
                                pVar->init_via_clone = pDecl->init_via_clone;
                            }
							if ( pDecl->annotation ) {
								pVar->annotation = *pDecl->annotation;
							}
                            pFunction->arguments.push_back(pVar);
                        } else {
                            das_yyerror("function argument is already declared " + name_at.first,name_at.second,
                                CompilationError::argument_already_declared);
                        }
                    }
                }
            }
            deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        }
        if ( (yyvsp[-5].faList) ) {
            for ( auto pA : *(yyvsp[-5].faList) ) {
                if ( pA->annotation ) {
                    if ( pA->annotation->rtti_isFunctionAnnotation() ) {
                        auto ann = static_pointer_cast<FunctionAnnotation>(pA->annotation);
                        string err;
                        if ( !ann->apply(pFunction, *g_Program->thisModuleGroup, pA->arguments, err) ) {
                            das_yyerror("can't apply annotation\n" + err,
                                tokAt((yylsp[-5])), CompilationError::invalid_annotation);
                        }
                    } else {
                        das_yyerror("functions are only allowed function annotations",
                            tokAt((yylsp[-5])), CompilationError::invalid_annotation);
                    }
                }
            }
            swap ( pFunction->annotations, *(yyvsp[-5].faList) );
            delete (yyvsp[-5].faList);
        }
        if ( pFunction->isGeneric() ) {
            if ( !g_Program->addGeneric(pFunction) ) {
                das_yyerror("generic function is already defined " +
                    pFunction->getMangledName(),tokAt((yylsp[-3])),
                        CompilationError::function_already_declared);
                pFunction.reset();
            }
        } else {
            if ( !g_Program->addFunction(pFunction) ) {
                das_yyerror("function is already defined " +
                    pFunction->getMangledName(),tokAt((yylsp[-3])),
                        CompilationError::function_already_declared);
                pFunction.reset();
            }
        }
        delete (yyvsp[-3].s);
    }
#line 4846 "ds_parser.cpp"
    break;

  case 120:
#line 909 "ds_parser.ypp"
    {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
#line 4854 "ds_parser.cpp"
    break;

  case 121:
#line 912 "ds_parser.ypp"
    {
        auto pB = (ExprBlock *) (yyvsp[-5].pExpression);
        auto pF = (ExprBlock *) (yyvsp[-1].pExpression);
        swap ( pB->finalList, pF->list );
        (yyval.pExpression) = (yyvsp[-5].pExpression);
        delete (yyvsp[-1].pExpression);
    }
#line 4866 "ds_parser.cpp"
    break;

  case 122:
#line 922 "ds_parser.ypp"
    { (yyval.pExpression) = nullptr; }
#line 4872 "ds_parser.cpp"
    break;

  case 123:
#line 923 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4878 "ds_parser.cpp"
    break;

  case 124:
#line 924 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4884 "ds_parser.cpp"
    break;

  case 125:
#line 925 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 4890 "ds_parser.cpp"
    break;

  case 126:
#line 926 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 4896 "ds_parser.cpp"
    break;

  case 127:
#line 927 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4902 "ds_parser.cpp"
    break;

  case 128:
#line 928 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4908 "ds_parser.cpp"
    break;

  case 129:
#line 929 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4914 "ds_parser.cpp"
    break;

  case 130:
#line 930 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4920 "ds_parser.cpp"
    break;

  case 131:
#line 931 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 4926 "ds_parser.cpp"
    break;

  case 132:
#line 932 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 4932 "ds_parser.cpp"
    break;

  case 133:
#line 933 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4938 "ds_parser.cpp"
    break;

  case 134:
#line 934 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4944 "ds_parser.cpp"
    break;

  case 135:
#line 935 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4950 "ds_parser.cpp"
    break;

  case 136:
#line 936 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4956 "ds_parser.cpp"
    break;

  case 137:
#line 937 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 4962 "ds_parser.cpp"
    break;

  case 138:
#line 938 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 4968 "ds_parser.cpp"
    break;

  case 139:
#line 939 "ds_parser.ypp"
    { (yyval.pExpression) = nullptr; }
#line 4974 "ds_parser.cpp"
    break;

  case 140:
#line 943 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprBlock();
		(yyval.pExpression)->at = LineInfo(g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
#line 4984 "ds_parser.cpp"
    break;

  case 141:
#line 948 "ds_parser.ypp"
    {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        if ( (yyvsp[0].pExpression) ) {
            static_cast<ExprBlock*>((yyvsp[-1].pExpression))->list.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        }
    }
#line 4995 "ds_parser.cpp"
    break;

  case 142:
#line 954 "ds_parser.ypp"
    {
        delete (yyvsp[-1].pExpression); (yyval.pExpression) = nullptr; YYABORT;
    }
#line 5003 "ds_parser.cpp"
    break;

  case 143:
#line 960 "ds_parser.ypp"
    {
        Expression * pipeCall = (yyvsp[-2].pExpression)->tail();
        if ( pipeCall->rtti_isCallLikeExpr() ) {
            auto pCall = (ExprLooksLikeCall *) pipeCall;
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            das_yyerror("can only pipe into function call",tokAt((yylsp[-1])),CompilationError::cant_pipe);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
#line 5019 "ds_parser.cpp"
    break;

  case 144:
#line 971 "ds_parser.ypp"
    {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
#line 5027 "ds_parser.cpp"
    break;

  case 145:
#line 977 "ds_parser.ypp"
    { (yyval.s) = (yyvsp[0].s); }
#line 5033 "ds_parser.cpp"
    break;

  case 146:
#line 978 "ds_parser.ypp"
    {
            auto ita = das_module_alias.find(*(yyvsp[-2].s));
            if ( ita == das_module_alias.end() ) {
                *(yyvsp[-2].s) += "::";
            } else {
                *(yyvsp[-2].s) = ita->second + "::";
            }
            *(yyvsp[-2].s) += *(yyvsp[0].s);
            delete (yyvsp[0].s);
            (yyval.s) = (yyvsp[-2].s);
        }
#line 5049 "ds_parser.cpp"
    break;

  case 147:
#line 989 "ds_parser.ypp"
    { *(yyvsp[0].s) = "::" + *(yyvsp[0].s); (yyval.s) = (yyvsp[0].s); }
#line 5055 "ds_parser.cpp"
    break;

  case 148:
#line 993 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprDelete(tokAt((yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 5063 "ds_parser.cpp"
    break;

  case 149:
#line 999 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprNew(tokAt((yylsp[-1])),TypeDeclPtr((yyvsp[0].pTypeDecl)),false);
    }
#line 5071 "ds_parser.cpp"
    break;

  case 150:
#line 1002 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprNew(tokAt((yylsp[-3])),TypeDeclPtr((yyvsp[-2].pTypeDecl)),true);
    }
#line 5079 "ds_parser.cpp"
    break;

  case 151:
#line 1005 "ds_parser.ypp"
    {
        auto pNew = new ExprNew(tokAt((yylsp[-4])),TypeDeclPtr((yyvsp[-3].pTypeDecl)),true);
        (yyval.pExpression) = parseFunctionArguments(pNew,(yyvsp[-1].pExpression));
    }
#line 5088 "ds_parser.cpp"
    break;

  case 152:
#line 1009 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprAscend(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 5096 "ds_parser.cpp"
    break;

  case 153:
#line 1015 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprBreak(tokAt((yylsp[0]))); }
#line 5102 "ds_parser.cpp"
    break;

  case 154:
#line 1019 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprContinue(tokAt((yylsp[0]))); }
#line 5108 "ds_parser.cpp"
    break;

  case 155:
#line 1023 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprReturn(tokAt((yylsp[-1])),nullptr);
    }
#line 5116 "ds_parser.cpp"
    break;

  case 156:
#line 1026 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprReturn(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
#line 5124 "ds_parser.cpp"
    break;

  case 157:
#line 1029 "ds_parser.ypp"
    {
        auto pRet = new ExprReturn(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
#line 5134 "ds_parser.cpp"
    break;

  case 158:
#line 1034 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprReturn(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 5142 "ds_parser.cpp"
    break;

  case 159:
#line 1037 "ds_parser.ypp"
    {
        auto pRet = new ExprReturn(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
#line 5152 "ds_parser.cpp"
    break;

  case 160:
#line 1045 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprYield(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
#line 5160 "ds_parser.cpp"
    break;

  case 161:
#line 1048 "ds_parser.ypp"
    {
        auto pRet = new ExprYield(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
#line 5170 "ds_parser.cpp"
    break;

  case 162:
#line 1053 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprYield(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 5178 "ds_parser.cpp"
    break;

  case 163:
#line 1056 "ds_parser.ypp"
    {
        auto pRet = new ExprYield(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
#line 5188 "ds_parser.cpp"
    break;

  case 164:
#line 1064 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprTryCatch(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 5196 "ds_parser.cpp"
    break;

  case 165:
#line 1070 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 5202 "ds_parser.cpp"
    break;

  case 166:
#line 1071 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 5208 "ds_parser.cpp"
    break;

  case 167:
#line 1075 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 5214 "ds_parser.cpp"
    break;

  case 168:
#line 1076 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 5220 "ds_parser.cpp"
    break;

  case 169:
#line 1080 "ds_parser.ypp"
    {
        auto pLet = new ExprLet();
        pLet->at = tokAt((yylsp[-2]));
        pLet->inScope = (yyvsp[-1].b);
        if ( (yyvsp[0].pVarDecl)->pTypeDecl ) {
            for ( const auto & name_at : *(yyvsp[0].pVarDecl)->pNameList ) {
                if ( !pLet->find(name_at.first) ) {
                    VariablePtr pVar = make_smart<Variable>();
                    pVar->name = name_at.first;
                    pVar->at = name_at.second;
                    pVar->type = make_smart<TypeDecl>(*(yyvsp[0].pVarDecl)->pTypeDecl);
                    if ( (yyvsp[0].pVarDecl)->pInit ) {
                        pVar->init = (yyvsp[0].pVarDecl)->pInit->clone();
                        pVar->init_via_move = (yyvsp[0].pVarDecl)->init_via_move;
                        pVar->init_via_clone = (yyvsp[0].pVarDecl)->init_via_clone;
                    }
                    if ( (yyvsp[-2].b) ) {
                        pVar->type->constant = true;
                    } else {
                        pVar->type->removeConstant = true;
                    }
                    pLet->variables.push_back(pVar);
                } else {
                    das_yyerror("local variable is already declared " + name_at.first,name_at.second,
                        CompilationError::local_variable_already_declared);
                }
            }
        }
        delete (yyvsp[0].pVarDecl);
        (yyval.pExpression) = pLet;
    }
#line 5256 "ds_parser.cpp"
    break;

  case 170:
#line 1114 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 5262 "ds_parser.cpp"
    break;

  case 171:
#line 1114 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 5268 "ds_parser.cpp"
    break;

  case 172:
#line 1114 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprCast(tokAt((yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
    }
#line 5276 "ds_parser.cpp"
    break;

  case 173:
#line 1117 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 5282 "ds_parser.cpp"
    break;

  case 174:
#line 1117 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 5288 "ds_parser.cpp"
    break;

  case 175:
#line 1117 "ds_parser.ypp"
    {
        auto pCast = new ExprCast(tokAt((yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->upcast = true;
        (yyval.pExpression) = pCast;
    }
#line 5298 "ds_parser.cpp"
    break;

  case 176:
#line 1122 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 5304 "ds_parser.cpp"
    break;

  case 177:
#line 1122 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 5310 "ds_parser.cpp"
    break;

  case 178:
#line 1122 "ds_parser.ypp"
    {
        auto pCast = new ExprCast(tokAt((yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->reinterpret = true;
        (yyval.pExpression) = pCast;
    }
#line 5320 "ds_parser.cpp"
    break;

  case 179:
#line 1130 "ds_parser.ypp"
    {
            (yyval.pExpression) = new ExprTypeInfo(tokAt((yylsp[-4])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[-1].pExpression)));
            delete (yyvsp[-2].s);
    }
#line 5329 "ds_parser.cpp"
    break;

  case 180:
#line 1134 "ds_parser.ypp"
    {
            (yyval.pExpression) = new ExprTypeInfo(tokAt((yylsp[-7])),*(yyvsp[-5].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-3].s));
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
#line 5339 "ds_parser.cpp"
    break;

  case 181:
#line 1139 "ds_parser.ypp"
    {
            (yyval.pExpression) = new ExprTypeInfo(tokAt((yylsp[-9])),*(yyvsp[-7].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-5].s),*(yyvsp[-3].s));
            delete (yyvsp[-7].s);
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
#line 5350 "ds_parser.cpp"
    break;

  case 182:
#line 1145 "ds_parser.ypp"
    {
            (yyval.pExpression) = new ExprTypeInfo(tokAt((yylsp[-5])),*(yyvsp[-3].s),TypeDeclPtr((yyvsp[-1].pTypeDecl)));
            delete (yyvsp[-3].s);
    }
#line 5359 "ds_parser.cpp"
    break;

  case 183:
#line 1149 "ds_parser.ypp"
    {
            (yyval.pExpression) = new ExprTypeInfo(tokAt((yylsp[-8])),*(yyvsp[-6].s),TypeDeclPtr((yyvsp[-1].pTypeDecl)),*(yyvsp[-4].s));
            delete (yyvsp[-6].s);
            delete (yyvsp[-4].s);
    }
#line 5369 "ds_parser.cpp"
    break;

  case 184:
#line 1154 "ds_parser.ypp"
    {
            (yyval.pExpression) = new ExprTypeInfo(tokAt((yylsp[-10])),*(yyvsp[-8].s),TypeDeclPtr((yyvsp[-1].pTypeDecl)),*(yyvsp[-6].s),*(yyvsp[-4].s));
            delete (yyvsp[-8].s);
            delete (yyvsp[-6].s);
            delete (yyvsp[-4].s);
    }
#line 5380 "ds_parser.cpp"
    break;

  case 185:
#line 1163 "ds_parser.ypp"
    {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
#line 5388 "ds_parser.cpp"
    break;

  case 186:
#line 1166 "ds_parser.ypp"
    {
            (yyval.pExpression) = new ExprSequence(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 5396 "ds_parser.cpp"
    break;

  case 187:
#line 1172 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 5402 "ds_parser.cpp"
    break;

  case 188:
#line 1173 "ds_parser.ypp"
    {
            auto retE = make_smart<ExprReturn>(tokAt((yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
            auto blkE = new ExprBlock();
            blkE->at = tokAt((yylsp[-1]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
#line 5414 "ds_parser.cpp"
    break;

  case 189:
#line 1180 "ds_parser.ypp"
    {
            auto retE = make_smart<ExprReturn>(tokAt((yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
			retE->moveSemantics = true;
            auto blkE = new ExprBlock();
            blkE->at = tokAt((yylsp[-2]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
#line 5427 "ds_parser.cpp"
    break;

  case 190:
#line 1191 "ds_parser.ypp"
    { (yyval.b) = false;   /* block */  }
#line 5433 "ds_parser.cpp"
    break;

  case 191:
#line 1192 "ds_parser.ypp"
    { (yyval.b) = true;    /* lambda */ }
#line 5439 "ds_parser.cpp"
    break;

  case 192:
#line 1196 "ds_parser.ypp"
    {
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        (yyval.pExpression) = new ExprMakeBlock(tokAt((yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)));
        closure->returnType = make_smart<TypeDecl>(Type::autoinfer);
    }
#line 5449 "ds_parser.cpp"
    break;

  case 193:
#line 1202 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprMakeBlock(tokAt((yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)), (yyvsp[-4].b));
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        closure->returnType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
        if ( (yyvsp[-2].pVarDeclList) ) {
            for ( auto pDecl : *(yyvsp[-2].pVarDeclList) ) {
                if ( pDecl->pTypeDecl ) {
                    for ( const auto & name_at : *pDecl->pNameList ) {
                        if ( !closure->findArgument(name_at.first) ) {
                            VariablePtr pVar = make_smart<Variable>();
                            pVar->name = name_at.first;
                            pVar->at = name_at.second;
                            pVar->type = make_smart<TypeDecl>(*pDecl->pTypeDecl);
                            if ( pDecl->pInit ) {
                                pVar->init = ExpressionPtr(pDecl->pInit->clone());
                                pVar->init_via_move = pDecl->init_via_move;
                                pVar->init_via_clone = pDecl->init_via_clone;
                            }
							if ( pDecl->annotation ) {
								pVar->annotation = *pDecl->annotation;
							}
                            closure->arguments.push_back(pVar);
                        } else {
                            das_yyerror("block argument is already declared " + name_at.first,
                                name_at.second,CompilationError::argument_already_declared);
                        }
                    }
                }
            }
            deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        }
        if ( (yyvsp[-3].faList) ) {
            for ( auto pA : *(yyvsp[-3].faList) ) {
                if ( pA->annotation ) {
                    if ( pA->annotation->rtti_isFunctionAnnotation() ) {
                        auto ann = static_pointer_cast<FunctionAnnotation>(pA->annotation);
                        string err;
                        if ( !ann->apply(closure, *g_Program->thisModuleGroup, pA->arguments, err) ) {
                            das_yyerror("can't apply annotation\n" + err, tokAt((yylsp[-3])),
                                CompilationError::invalid_annotation);
                        }
                    } else {
                        das_yyerror("blocks are only allowed function annotations", tokAt((yylsp[-3])),
                            CompilationError::invalid_annotation);
                    }
                }
            }
            swap ( closure->annotations, *(yyvsp[-3].faList) );
            delete (yyvsp[-3].faList);
        }
    }
#line 5505 "ds_parser.cpp"
    break;

  case 194:
#line 1256 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstInt(tokAt((yylsp[0])),(int32_t)(yyvsp[0].i)); }
#line 5511 "ds_parser.cpp"
    break;

  case 195:
#line 1257 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstUInt(tokAt((yylsp[0])),(uint32_t)(yyvsp[0].ui)); }
#line 5517 "ds_parser.cpp"
    break;

  case 196:
#line 1258 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstInt64(tokAt((yylsp[0])),(int64_t)(yyvsp[0].i64)); }
#line 5523 "ds_parser.cpp"
    break;

  case 197:
#line 1259 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstUInt64(tokAt((yylsp[0])),(uint64_t)(yyvsp[0].ui64)); }
#line 5529 "ds_parser.cpp"
    break;

  case 198:
#line 1260 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstFloat(tokAt((yylsp[0])),(float)(yyvsp[0].fd)); }
#line 5535 "ds_parser.cpp"
    break;

  case 199:
#line 1261 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstDouble(tokAt((yylsp[0])),(double)(yyvsp[0].d)); }
#line 5541 "ds_parser.cpp"
    break;

  case 200:
#line 1265 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 5547 "ds_parser.cpp"
    break;

  case 201:
#line 1266 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprCopy(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
#line 5553 "ds_parser.cpp"
    break;

  case 202:
#line 1267 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprMove(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5559 "ds_parser.cpp"
    break;

  case 203:
#line 1268 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprClone(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5565 "ds_parser.cpp"
    break;

  case 204:
#line 1269 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5571 "ds_parser.cpp"
    break;

  case 205:
#line 1270 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"|=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5577 "ds_parser.cpp"
    break;

  case 206:
#line 1271 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5583 "ds_parser.cpp"
    break;

  case 207:
#line 1272 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"+=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5589 "ds_parser.cpp"
    break;

  case 208:
#line 1273 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"-=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5595 "ds_parser.cpp"
    break;

  case 209:
#line 1274 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"*=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5601 "ds_parser.cpp"
    break;

  case 210:
#line 1275 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"/=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5607 "ds_parser.cpp"
    break;

  case 211:
#line 1276 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"%=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5613 "ds_parser.cpp"
    break;

  case 212:
#line 1277 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5619 "ds_parser.cpp"
    break;

  case 213:
#line 1278 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),">>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5625 "ds_parser.cpp"
    break;

  case 214:
#line 1279 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"<<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5631 "ds_parser.cpp"
    break;

  case 215:
#line 1280 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),">>>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5637 "ds_parser.cpp"
    break;

  case 216:
#line 1284 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprCopy(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
#line 5643 "ds_parser.cpp"
    break;

  case 217:
#line 1285 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprMove(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5649 "ds_parser.cpp"
    break;

  case 218:
#line 1289 "ds_parser.ypp"
    {
        auto nc = new ExprNamedCall(tokAt((yylsp[-5])),*(yyvsp[-5].s));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-5].s);
        (yyval.pExpression) = nc;
    }
#line 5661 "ds_parser.cpp"
    break;

  case 219:
#line 1300 "ds_parser.ypp"
    {
        auto pInvoke = makeInvokeMethod(tokAt((yylsp[-3])), (yyvsp[-4].pExpression), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pInvoke;
    }
#line 5671 "ds_parser.cpp"
    break;

  case 220:
#line 1305 "ds_parser.ypp"
    {
        auto pInvoke = makeInvokeMethod(tokAt((yylsp[-4])), (yyvsp[-5].pExpression), *(yyvsp[-3].s));
        auto callArgs = sequenceToList((yyvsp[-1].pExpression));
        pInvoke->arguments.insert ( pInvoke->arguments.end(), callArgs.begin(), callArgs.end() );
        delete (yyvsp[-3].s);
        (yyval.pExpression) = pInvoke;
    }
#line 5683 "ds_parser.cpp"
    break;

  case 221:
#line 1315 "ds_parser.ypp"
    {
		(yyval.pExpression) = new ExprAddr(tokAt((yylsp[-1])),*(yyvsp[0].s));
		delete (yyvsp[0].s);
	}
#line 5692 "ds_parser.cpp"
    break;

  case 222:
#line 1319 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 5698 "ds_parser.cpp"
    break;

  case 223:
#line 1319 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 5704 "ds_parser.cpp"
    break;

  case 224:
#line 1319 "ds_parser.ypp"
    {
		auto expr = new ExprAddr(tokAt((yylsp[-6])),*(yyvsp[0].s));
		delete (yyvsp[0].s);
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
		(yyval.pExpression) = expr;
    }
#line 5716 "ds_parser.cpp"
    break;

  case 225:
#line 1326 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 5722 "ds_parser.cpp"
    break;

  case 226:
#line 1326 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 5728 "ds_parser.cpp"
    break;

  case 227:
#line 1326 "ds_parser.ypp"
    {
		auto expr = new ExprAddr(tokAt((yylsp[-7])),*(yyvsp[0].s));
		delete (yyvsp[0].s);
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        if ( (yyvsp[-4].pVarDeclList) ) {
            varDeclToTypeDecl(expr->funcType.get(), (yyvsp[-4].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-4].pVarDeclList));
        }
		(yyval.pExpression) = expr;
    }
#line 5744 "ds_parser.cpp"
    break;

  case 228:
#line 1340 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstPtr(tokAt((yylsp[0])),nullptr); }
#line 5750 "ds_parser.cpp"
    break;

  case 229:
#line 1341 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprVar(tokAt((yylsp[0])),*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 5756 "ds_parser.cpp"
    break;

  case 230:
#line 1342 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 5762 "ds_parser.cpp"
    break;

  case 231:
#line 1343 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 5768 "ds_parser.cpp"
    break;

  case 232:
#line 1344 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 5774 "ds_parser.cpp"
    break;

  case 233:
#line 1345 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstBool(tokAt((yylsp[0])),true); }
#line 5780 "ds_parser.cpp"
    break;

  case 234:
#line 1346 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprConstBool(tokAt((yylsp[0])),false); }
#line 5786 "ds_parser.cpp"
    break;

  case 235:
#line 1347 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"!",ExpressionPtr((yyvsp[0].pExpression))); }
#line 5792 "ds_parser.cpp"
    break;

  case 236:
#line 1348 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"~",ExpressionPtr((yyvsp[0].pExpression))); }
#line 5798 "ds_parser.cpp"
    break;

  case 237:
#line 1349 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"+",ExpressionPtr((yyvsp[0].pExpression))); }
#line 5804 "ds_parser.cpp"
    break;

  case 238:
#line 1350 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"-",ExpressionPtr((yyvsp[0].pExpression))); }
#line 5810 "ds_parser.cpp"
    break;

  case 239:
#line 1351 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5816 "ds_parser.cpp"
    break;

  case 240:
#line 1352 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),">>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5822 "ds_parser.cpp"
    break;

  case 241:
#line 1353 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"<<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5828 "ds_parser.cpp"
    break;

  case 242:
#line 1354 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),">>>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5834 "ds_parser.cpp"
    break;

  case 243:
#line 1355 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"+", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5840 "ds_parser.cpp"
    break;

  case 244:
#line 1356 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"-", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5846 "ds_parser.cpp"
    break;

  case 245:
#line 1357 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"*", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5852 "ds_parser.cpp"
    break;

  case 246:
#line 1358 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"/", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5858 "ds_parser.cpp"
    break;

  case 247:
#line 1359 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"%", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5864 "ds_parser.cpp"
    break;

  case 248:
#line 1360 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5870 "ds_parser.cpp"
    break;

  case 249:
#line 1361 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),">", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5876 "ds_parser.cpp"
    break;

  case 250:
#line 1362 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"==", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5882 "ds_parser.cpp"
    break;

  case 251:
#line 1363 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"!=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5888 "ds_parser.cpp"
    break;

  case 252:
#line 1364 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5894 "ds_parser.cpp"
    break;

  case 253:
#line 1365 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),">=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5900 "ds_parser.cpp"
    break;

  case 254:
#line 1366 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5906 "ds_parser.cpp"
    break;

  case 255:
#line 1367 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"|", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5912 "ds_parser.cpp"
    break;

  case 256:
#line 1368 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 5918 "ds_parser.cpp"
    break;

  case 257:
#line 1369 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"++", ExpressionPtr((yyvsp[0].pExpression))); }
#line 5924 "ds_parser.cpp"
    break;

  case 258:
#line 1370 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"--", ExpressionPtr((yyvsp[0].pExpression))); }
#line 5930 "ds_parser.cpp"
    break;

  case 259:
#line 1371 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[0])),"+++", ExpressionPtr((yyvsp[-1].pExpression))); }
#line 5936 "ds_parser.cpp"
    break;

  case 260:
#line 1372 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[0])),"---", ExpressionPtr((yyvsp[-1].pExpression))); }
#line 5942 "ds_parser.cpp"
    break;

  case 261:
#line 1373 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 5948 "ds_parser.cpp"
    break;

  case 262:
#line 1374 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprAt(tokAt((yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
#line 5954 "ds_parser.cpp"
    break;

  case 263:
#line 1375 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprSafeAt(tokAt((yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
#line 5960 "ds_parser.cpp"
    break;

  case 264:
#line 1376 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprField(tokAt((yylsp[-1])), tokAt((yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 5966 "ds_parser.cpp"
    break;

  case 265:
#line 1377 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprSafeField(tokAt((yylsp[-1])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 5972 "ds_parser.cpp"
    break;

  case 266:
#line 1378 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 5978 "ds_parser.cpp"
    break;

  case 267:
#line 1379 "ds_parser.ypp"
    {
            (yyval.pExpression) = g_Program->makeCall(tokAt((yylsp[-2])),*(yyvsp[-2].s));
            delete (yyvsp[-2].s);
        }
#line 5987 "ds_parser.cpp"
    break;

  case 268:
#line 1383 "ds_parser.ypp"
    {
            (yyval.pExpression) = parseFunctionArguments(g_Program->makeCall(tokAt((yylsp[-3])),*(yyvsp[-3].s)),(yyvsp[-1].pExpression));
            delete (yyvsp[-3].s);
        }
#line 5996 "ds_parser.cpp"
    break;

  case 269:
#line 1387 "ds_parser.ypp"
    {
        (yyval.pExpression) = g_Program->makeCall(tokAt((yylsp[-2])),das_to_string((yyvsp[-2].type)));
    }
#line 6004 "ds_parser.cpp"
    break;

  case 270:
#line 1390 "ds_parser.ypp"
    {
        (yyval.pExpression) = parseFunctionArguments(g_Program->makeCall(tokAt((yylsp[-3])),das_to_string((yyvsp[-3].type))),(yyvsp[-1].pExpression));
    }
#line 6012 "ds_parser.cpp"
    break;

  case 271:
#line 1393 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprPtr2Ref(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression))); }
#line 6018 "ds_parser.cpp"
    break;

  case 272:
#line 1394 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprPtr2Ref(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
#line 6024 "ds_parser.cpp"
    break;

  case 273:
#line 1395 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprRef2Ptr(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
#line 6030 "ds_parser.cpp"
    break;

  case 274:
#line 1396 "ds_parser.ypp"
    {
        auto gen = new ExprMakeGenerator(tokAt((yylsp[-5])));
        gen->iterType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyval.pExpression) = gen;
    }
#line 6040 "ds_parser.cpp"
    break;

  case 275:
#line 1401 "ds_parser.ypp"
    {
        auto gen = new ExprMakeGenerator(tokAt((yylsp[-6])), ExpressionPtr((yyvsp[-1].pExpression)));
        gen->iterType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        (yyval.pExpression) = gen;
    }
#line 6050 "ds_parser.cpp"
    break;

  case 276:
#line 1406 "ds_parser.ypp"
    { (yyval.pExpression) = new ExprNullCoalescing(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
#line 6056 "ds_parser.cpp"
    break;

  case 277:
#line 1407 "ds_parser.ypp"
    {
            (yyval.pExpression) = new ExprOp3(tokAt((yylsp[-3])),"?",ExpressionPtr((yyvsp[-4].pExpression)),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        }
#line 6064 "ds_parser.cpp"
    break;

  case 278:
#line 1410 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprIs(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),TypeDeclPtr((yyvsp[0].pTypeDecl)));
    }
#line 6072 "ds_parser.cpp"
    break;

  case 279:
#line 1413 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprIsVariant(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
		delete (yyvsp[0].s);
    }
#line 6081 "ds_parser.cpp"
    break;

  case 280:
#line 1417 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprAsVariant(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
		delete (yyvsp[0].s);
    }
#line 6090 "ds_parser.cpp"
    break;

  case 281:
#line 1421 "ds_parser.ypp"
    {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
#line 6099 "ds_parser.cpp"
    break;

  case 282:
#line 1425 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 6105 "ds_parser.cpp"
    break;

  case 283:
#line 1426 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 6111 "ds_parser.cpp"
    break;

  case 284:
#line 1427 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 6117 "ds_parser.cpp"
    break;

  case 285:
#line 1428 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 6123 "ds_parser.cpp"
    break;

  case 286:
#line 1429 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 6129 "ds_parser.cpp"
    break;

  case 287:
#line 1430 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 6135 "ds_parser.cpp"
    break;

  case 288:
#line 1431 "ds_parser.ypp"
    {
        if ( (yyvsp[-2].pExpression)->rtti_isCallLikeExpr() ) {
            auto pCall = (ExprLooksLikeCall *) (yyvsp[-2].pExpression);
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            das_yyerror("can only pipe into a function call",tokAt((yylsp[-1])),CompilationError::cant_pipe);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
#line 6150 "ds_parser.cpp"
    break;

  case 289:
#line 1441 "ds_parser.ypp"
    {
        if ( (yyvsp[0].pExpression)->rtti_isCallLikeExpr() ) {
            auto pCall = (ExprLooksLikeCall *) (yyvsp[0].pExpression);
            pCall->arguments.insert(pCall->arguments.begin(),ExpressionPtr((yyvsp[-2].pExpression)));
            (yyval.pExpression) = (yyvsp[0].pExpression);
        } else {
            das_yyerror("can only pipe into a function call",tokAt((yylsp[-1])),CompilationError::cant_pipe);
            (yyval.pExpression) = (yyvsp[0].pExpression);
        }
    }
#line 6165 "ds_parser.cpp"
    break;

  case 290:
#line 1451 "ds_parser.ypp"
    {
        Enumeration * pEnum = nullptr;
		Expression * resConst = nullptr;
        auto enums = g_Program->findEnum(*(yyvsp[-1].s));
        auto aliases = g_Program->findAlias(*(yyvsp[-1].s));
        if ( enums.size()+aliases.size() > 1 ) {
            string candidates;
            if ( enums.size() ) candidates += g_Program->describeCandidates(enums);
            if ( aliases.size() ) candidates += g_Program->describeCandidates(aliases);
            das_yyerror("too many options for " + *(yyvsp[-1].s) + "\n" + candidates, tokAt((yylsp[-1])),
                CompilationError::type_not_found);
        } else if ( enums.size()==0 && aliases.size()==0 ) {
            das_yyerror("enumeration or bitfield not found " + *(yyvsp[-1].s), tokAt((yylsp[-1])),
                CompilationError::type_not_found);
        } else if ( enums.size()==1 ) {
            pEnum = enums.back().get();
        } else if ( aliases.size()==1 ) {
            auto alias = aliases.back();
            if ( alias->isEnum() ) {
                pEnum = alias->enumType;
            } else if ( alias->isBitfield() ) {
                int bit = alias->findArgumentIndex(*(yyvsp[0].s));
                if ( bit!=-1 ) {
                    auto td = make_smart<TypeDecl>(*alias);
                    td->ref = false;
                    auto bitConst = new ExprConstBitfield(tokAt((yylsp[0])), 1u << bit);
                    bitConst->bitfieldType = make_smart<TypeDecl>(*alias);
                    resConst = bitConst;
                } else {
                    das_yyerror("enumeration or bitfield not found " + *(yyvsp[-1].s), tokAt((yylsp[-1])),
                        CompilationError::bitfield_not_found);
                }
            }
        }
        if ( pEnum ) {
            auto ff = pEnum->find(*(yyvsp[0].s));
            if ( ff.second ) {
				auto td = make_smart<TypeDecl>(pEnum);
                resConst = new ExprConstEnumeration(tokAt((yylsp[0])), *(yyvsp[0].s), td);
            } else {
                das_yyerror("enumeraiton value not found " + *(yyvsp[-1].s) + " " + *(yyvsp[0].s), tokAt((yylsp[0])),
                    CompilationError::enumeration_not_found);
            }
        }
		if ( resConst ) {
			(yyval.pExpression) = resConst;
		} else {
			(yyval.pExpression) = new ExprConstInt(0);	// dummy
		}
        delete (yyvsp[-1].s);
        delete (yyvsp[0].s);
    }
#line 6222 "ds_parser.cpp"
    break;

  case 291:
#line 1506 "ds_parser.ypp"
    { (yyval.aaList) = nullptr; }
#line 6228 "ds_parser.cpp"
    break;

  case 292:
#line 1507 "ds_parser.ypp"
    { (yyval.aaList) = (yyvsp[-1].aaList); }
#line 6234 "ds_parser.cpp"
    break;

  case 293:
#line 1511 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 6240 "ds_parser.cpp"
    break;

  case 294:
#line 1512 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 6246 "ds_parser.cpp"
    break;

  case 295:
#line 1516 "ds_parser.ypp"
    {
        (yyvsp[0].pVarDecl)->override = (yyvsp[-1].b);
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-2].aaList);
        (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
    }
#line 6256 "ds_parser.cpp"
    break;

  case 296:
#line 1524 "ds_parser.ypp"
    {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
#line 6264 "ds_parser.cpp"
    break;

  case 297:
#line 1527 "ds_parser.ypp"
    {
        (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList);
        (yyvsp[-2].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
    }
#line 6273 "ds_parser.cpp"
    break;

  case 298:
#line 1534 "ds_parser.ypp"
    {
			(yyval.pVarDecl) = (yyvsp[0].pVarDecl);
			(yyvsp[0].pVarDecl)->pTypeDecl->constant = true;
			(yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
		}
#line 6283 "ds_parser.cpp"
    break;

  case 299:
#line 1539 "ds_parser.ypp"
    {
			(yyval.pVarDecl) = (yyvsp[0].pVarDecl);
			(yyvsp[0].pVarDecl)->pTypeDecl->removeConstant = true;
			(yyvsp[0].pVarDecl)->annotation = (yyvsp[-2].aaList);
		}
#line 6293 "ds_parser.cpp"
    break;

  case 300:
#line 1547 "ds_parser.ypp"
    { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 6299 "ds_parser.cpp"
    break;

  case 301:
#line 1548 "ds_parser.ypp"
    { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 6305 "ds_parser.cpp"
    break;

  case 302:
#line 1552 "ds_parser.ypp"
    {
        (yyval.pVarDecl) = new VariableDeclaration(nullptr,(yyvsp[0].pTypeDecl),nullptr);
    }
#line 6313 "ds_parser.cpp"
    break;

  case 303:
#line 1555 "ds_parser.ypp"
    {
        auto na = new vector<pair<string,LineInfo>>();
        na->push_back(make_pair(*(yyvsp[-2].s),tokAt((yylsp[-2]))));
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
#line 6324 "ds_parser.cpp"
    break;

  case 304:
#line 1564 "ds_parser.ypp"
    { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 6330 "ds_parser.cpp"
    break;

  case 305:
#line 1565 "ds_parser.ypp"
    { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 6336 "ds_parser.cpp"
    break;

  case 306:
#line 1569 "ds_parser.ypp"
    {
        auto na = new vector<pair<string,LineInfo>>();
        na->push_back(make_pair(*(yyvsp[-2].s),tokAt((yylsp[-2]))));
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
#line 6347 "ds_parser.cpp"
    break;

  case 307:
#line 1578 "ds_parser.ypp"
    { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 6353 "ds_parser.cpp"
    break;

  case 308:
#line 1579 "ds_parser.ypp"
    { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 6359 "ds_parser.cpp"
    break;

  case 309:
#line 1584 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 6365 "ds_parser.cpp"
    break;

  case 310:
#line 1585 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 6371 "ds_parser.cpp"
    break;

  case 311:
#line 1589 "ds_parser.ypp"
    {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt((yylsp[0]));
        autoT->ref = false;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[0].pNameWithPosList),autoT,nullptr);
    }
#line 6382 "ds_parser.cpp"
    break;

  case 312:
#line 1595 "ds_parser.ypp"
    {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt((yylsp[-1]));
        autoT->ref = true;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-1].pNameWithPosList),autoT,nullptr);
    }
#line 6393 "ds_parser.cpp"
    break;

  case 313:
#line 1601 "ds_parser.ypp"
    {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),(yyvsp[0].pTypeDecl),nullptr);
    }
#line 6401 "ds_parser.cpp"
    break;

  case 314:
#line 1604 "ds_parser.ypp"
    {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
#line 6410 "ds_parser.cpp"
    break;

  case 315:
#line 1608 "ds_parser.ypp"
    {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt((yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
#line 6421 "ds_parser.cpp"
    break;

  case 316:
#line 1614 "ds_parser.ypp"
    {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt((yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
#line 6432 "ds_parser.cpp"
    break;

  case 317:
#line 1623 "ds_parser.ypp"
    { (yyval.i) = CorM_COPY; }
#line 6438 "ds_parser.cpp"
    break;

  case 318:
#line 1624 "ds_parser.ypp"
    { (yyval.i) = CorM_MOVE; }
#line 6444 "ds_parser.cpp"
    break;

  case 319:
#line 1625 "ds_parser.ypp"
    { (yyval.i) = CorM_CLONE; }
#line 6450 "ds_parser.cpp"
    break;

  case 320:
#line 1629 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 6456 "ds_parser.cpp"
    break;

  case 321:
#line 1630 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 6462 "ds_parser.cpp"
    break;

  case 322:
#line 1634 "ds_parser.ypp"
    {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),(yyvsp[-1].pTypeDecl),nullptr);
    }
#line 6470 "ds_parser.cpp"
    break;

  case 323:
#line 1637 "ds_parser.ypp"
    {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-5].pNameWithPosList),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
#line 6480 "ds_parser.cpp"
    break;

  case 324:
#line 1642 "ds_parser.ypp"
    {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
#line 6490 "ds_parser.cpp"
    break;

  case 325:
#line 1647 "ds_parser.ypp"
    {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt((yylsp[-4]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
#line 6503 "ds_parser.cpp"
    break;

  case 326:
#line 1655 "ds_parser.ypp"
    {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt((yylsp[-3]));
        typeDecl->ref = (yyvsp[-2].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
#line 6516 "ds_parser.cpp"
    break;

  case 327:
#line 1666 "ds_parser.ypp"
    {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
#line 6524 "ds_parser.cpp"
    break;

  case 328:
#line 1669 "ds_parser.ypp"
    {
        (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList);
        (yyvsp[-1].pVarDeclList)->push_back((yyvsp[0].pVarDecl));
    }
#line 6533 "ds_parser.cpp"
    break;

  case 329:
#line 1676 "ds_parser.ypp"
    { (yyval.b) = false; }
#line 6539 "ds_parser.cpp"
    break;

  case 330:
#line 1677 "ds_parser.ypp"
    { (yyval.b) = true; }
#line 6545 "ds_parser.cpp"
    break;

  case 331:
#line 1681 "ds_parser.ypp"
    {
        for ( auto pDecl : *(yyvsp[-1].pVarDeclList) ) {
            if ( pDecl->pTypeDecl ) {
                for ( const auto & name_at : *pDecl->pNameList ) {
                    VariablePtr pVar = make_smart<Variable>();
                    pVar->name = name_at.first;
                    pVar->at = name_at.second;
                    pVar->type = make_smart<TypeDecl>(*pDecl->pTypeDecl);
                    if ( pDecl->pInit ) {
                        pVar->init = pDecl->pInit->clone();
                        pVar->init_via_move = pDecl->init_via_move;
                        pVar->init_via_clone = pDecl->init_via_clone;
                    }
                    if ( (yyvsp[-4].b) ) {
                        pVar->type->constant = true;
                    } else {
                        pVar->type->removeConstant = true;
                    }
                    pVar->global_shared = (yyvsp[-3].b);
                    if ( !g_Program->addVariable(pVar) )
                        das_yyerror("global variable is already declared " + name_at.first,name_at.second,
                            CompilationError::global_variable_already_declared);
                }
            }
        }
        deleteVariableDeclarationList((yyvsp[-1].pVarDeclList));
    }
#line 6577 "ds_parser.cpp"
    break;

  case 332:
#line 1708 "ds_parser.ypp"
    {
            das_force_oxford_comma = true;
            das_supress_errors = true;
        }
#line 6586 "ds_parser.cpp"
    break;

  case 333:
#line 1711 "ds_parser.ypp"
    {
        das_yyerror("global variable declaration requires new line", tokAt((yylsp[-1])),
            CompilationError::syntax_error);
        das_supress_errors = false;
        yyerrok;
    }
#line 6597 "ds_parser.cpp"
    break;

  case 334:
#line 1720 "ds_parser.ypp"
    {
        (yyval.pEnum) = new Enumeration();
    }
#line 6605 "ds_parser.cpp"
    break;

  case 335:
#line 1723 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[-1].s),tokAt((yylsp[-1])));
        if ( !(yyvsp[-2].pEnum)->add(*(yyvsp[-1].s)) ) {
            das_yyerror("enumeration alread declared " + *(yyvsp[-1].s), tokAt((yylsp[-1])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-1].s);
        (yyval.pEnum) = (yyvsp[-2].pEnum);
    }
#line 6619 "ds_parser.cpp"
    break;

  case 336:
#line 1732 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[-3].s),tokAt((yylsp[-3])));
        if ( !(yyvsp[-4].pEnum)->add(*(yyvsp[-3].s),ExpressionPtr((yyvsp[-1].pExpression))) ) {
            das_yyerror("enumeration value alread declared " + *(yyvsp[-3].s), tokAt((yylsp[-3])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-3].s);
        (yyval.pEnum) = (yyvsp[-4].pEnum);
    }
#line 6633 "ds_parser.cpp"
    break;

  case 337:
#line 1745 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[-3].s),tokAt((yylsp[-3])));
        (yyvsp[-1].pTypeDecl)->alias = *(yyvsp[-3].s);
        if ( !g_Program->addAlias(TypeDeclPtr((yyvsp[-1].pTypeDecl))) ) {
            das_yyerror("type alias is already defined "+*(yyvsp[-3].s),tokAt((yylsp[-3])),
                CompilationError::type_alias_already_declared);
        }
        delete (yyvsp[-3].s);
    }
#line 6647 "ds_parser.cpp"
    break;

  case 341:
#line 1766 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[-3].s),tokAt((yylsp[-3])));
        auto pEnum = EnumerationPtr((yyvsp[-1].pEnum));
        pEnum->at = tokAt((yylsp[-4]));
        pEnum->name = *(yyvsp[-3].s);
        if ( !g_Program->addEnumeration(pEnum) ) {
            das_yyerror("enumeration is already defined "+*(yyvsp[-3].s),tokAt((yylsp[-1])),
                CompilationError::enumeration_already_declared);
        }
		delete (yyvsp[-3].s);
    }
#line 6663 "ds_parser.cpp"
    break;

  case 342:
#line 1777 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[-5].s),tokAt((yylsp[-5])));
        auto pEnum = EnumerationPtr((yyvsp[-1].pEnum));
        pEnum->at = tokAt((yylsp[-6]));
        pEnum->name = *(yyvsp[-5].s);
		pEnum->baseType = (yyvsp[-3].type);
        if ( !g_Program->addEnumeration(pEnum) ) {
            das_yyerror("enumeration is already defined "+*(yyvsp[-5].s),tokAt((yylsp[-1])),
                CompilationError::enumeration_already_declared);
        }
		delete (yyvsp[-5].s);
    }
#line 6680 "ds_parser.cpp"
    break;

  case 343:
#line 1792 "ds_parser.ypp"
    { (yyval.s) = nullptr; }
#line 6686 "ds_parser.cpp"
    break;

  case 344:
#line 1793 "ds_parser.ypp"
    { (yyval.s) = (yyvsp[0].s); }
#line 6692 "ds_parser.cpp"
    break;

  case 345:
#line 1797 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[-1].s),tokAt((yylsp[-1])));
        StructurePtr pStruct;
        if ( (yyvsp[0].s) ) {
            auto structs = g_Program->findStructure(*(yyvsp[0].s));
            if ( structs.size()==1 ) {
                pStruct = structs.back()->clone();
                pStruct->name = *(yyvsp[-1].s);
                pStruct->parent = structs.back().get();
                pStruct->annotations.clear();
            } else if ( structs.size()==0 ) {
                das_yyerror("parent structure not found"+*(yyvsp[0].s),tokAt((yylsp[0])),
                    CompilationError::structure_not_found);
            } else {
                string candidates = g_Program->describeCandidates(structs);
                das_yyerror("too many options for "+*(yyvsp[0].s) + "\n" + candidates,tokAt((yylsp[0])),
                    CompilationError::structure_not_found);

            }
            delete (yyvsp[0].s);
        } else {
            pStruct = make_smart<Structure>(*(yyvsp[-1].s));
        }
        if ( pStruct ) {
            if ( !g_Program->addStructure(pStruct) ) {
                das_yyerror("structure is already defined "+*(yyvsp[-1].s),tokAt((yylsp[-1])),
                    CompilationError::structure_already_declared);
                (yyval.pStructure) = nullptr;
            } else {
                (yyval.pStructure) = pStruct.get();
            }
        } else {
            (yyval.pStructure) = nullptr;
        }
        delete (yyvsp[-1].s);
    }
#line 6733 "ds_parser.cpp"
    break;

  case 346:
#line 1836 "ds_parser.ypp"
    {
        if ( (yyvsp[-3].pStructure) ) {
            auto pStruct = (yyvsp[-3].pStructure);
            pStruct->at = tokAt((yylsp[-4]));
            for ( auto pDecl : *(yyvsp[-1].pVarDeclList) ) {
                for ( const auto & name_at : *pDecl->pNameList ) {
                    auto oldFd = (Structure::FieldDeclaration *) pStruct->findField(name_at.first);
                    if ( !oldFd ) {
                        if ( pDecl->override ) {
                            das_yyerror("structure field is not overriding anything, "+name_at.first,name_at.second,
                                CompilationError::invalid_override);
                        } else {
                            auto td = make_smart<TypeDecl>(*pDecl->pTypeDecl);
                            auto init = pDecl->pInit ? ExpressionPtr(pDecl->pInit->clone()) : nullptr;
                            pStruct->fields.emplace_back(name_at.first, td, init,
                                pDecl->annotation ? *pDecl->annotation : AnnotationArgumentList(),
                                pDecl->init_via_move, name_at.second);
                        }
                    } else {
                        if ( pDecl->override ) {
                                auto init = pDecl->pInit ? ExpressionPtr(pDecl->pInit->clone()) : nullptr;
                                oldFd->init = init;
                                oldFd->parentType = oldFd->type->isAuto();
                        } else {
                            das_yyerror("structure field is already declared "+name_at.first
                                +", use override to replace initial value instead",name_at.second,
                                    CompilationError::invalid_override);
                        }
                    }
                }
            }
            if ( (yyvsp[-5].faList) ) {
                for ( auto pA : *(yyvsp[-5].faList) ) {
                    if ( pA->annotation ) {
                        if ( pA->annotation->rtti_isStructureAnnotation() ) {
                            auto ann = static_pointer_cast<StructureAnnotation>(pA->annotation);
                            string err;
                            if ( !ann->touch(pStruct, *g_Program->thisModuleGroup, pA->arguments, err) ) {
                                das_yyerror("can't 'touch' with structure annotation\n" + err,
                                    tokAt((yylsp[-4])), CompilationError::invalid_annotation);
                            }
                        } else if ( pA->annotation->rtti_isStructureTypeAnnotation() ) {
                            if ( (yyvsp[-5].faList)->size()!=1 ) {
                                das_yyerror("structures are only allowed one structure type annotation", tokAt((yylsp[-4])),
                                    CompilationError::invalid_annotation);
                            } else {
                                if ( !g_Program->addStructureHandle(pStruct,
                                    static_pointer_cast<StructureTypeAnnotation>(pA->annotation), pA->arguments) ) {
                                        das_yyerror("handled structure is already defined "+pStruct->name,tokAt((yylsp[-4])),
                                        CompilationError::structure_already_declared);
                                } else {
                                    pStruct->module->removeStructure(pStruct);
                                }
                            }
                        }
                    }
                }
				swap ( pStruct->annotations, *(yyvsp[-5].faList) );
                delete (yyvsp[-5].faList);
            }
        }
        deleteVariableDeclarationList((yyvsp[-1].pVarDeclList));
    }
#line 6801 "ds_parser.cpp"
    break;

  case 347:
#line 1902 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[0].s),tokAt((yylsp[0])));
        auto pSL = new vector<pair<string,LineInfo>>();
        pSL->push_back(make_pair(*(yyvsp[0].s),tokAt((yylsp[0]))));
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
#line 6813 "ds_parser.cpp"
    break;

  case 348:
#line 1909 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[0].s),tokAt((yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(make_pair(*(yyvsp[0].s),tokAt((yylsp[0]))));
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
#line 6824 "ds_parser.cpp"
    break;

  case 349:
#line 1918 "ds_parser.ypp"
    { (yyval.type) = Type::tBool; }
#line 6830 "ds_parser.cpp"
    break;

  case 350:
#line 1919 "ds_parser.ypp"
    { (yyval.type) = Type::tString; }
#line 6836 "ds_parser.cpp"
    break;

  case 351:
#line 1920 "ds_parser.ypp"
    { (yyval.type) = Type::tInt; }
#line 6842 "ds_parser.cpp"
    break;

  case 352:
#line 1921 "ds_parser.ypp"
    { (yyval.type) = Type::tInt8; }
#line 6848 "ds_parser.cpp"
    break;

  case 353:
#line 1922 "ds_parser.ypp"
    { (yyval.type) = Type::tInt16; }
#line 6854 "ds_parser.cpp"
    break;

  case 354:
#line 1923 "ds_parser.ypp"
    { (yyval.type) = Type::tInt64; }
#line 6860 "ds_parser.cpp"
    break;

  case 355:
#line 1924 "ds_parser.ypp"
    { (yyval.type) = Type::tInt2; }
#line 6866 "ds_parser.cpp"
    break;

  case 356:
#line 1925 "ds_parser.ypp"
    { (yyval.type) = Type::tInt3; }
#line 6872 "ds_parser.cpp"
    break;

  case 357:
#line 1926 "ds_parser.ypp"
    { (yyval.type) = Type::tInt4; }
#line 6878 "ds_parser.cpp"
    break;

  case 358:
#line 1927 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt; }
#line 6884 "ds_parser.cpp"
    break;

  case 359:
#line 1928 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt8; }
#line 6890 "ds_parser.cpp"
    break;

  case 360:
#line 1929 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt16; }
#line 6896 "ds_parser.cpp"
    break;

  case 361:
#line 1930 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt64; }
#line 6902 "ds_parser.cpp"
    break;

  case 362:
#line 1931 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt2; }
#line 6908 "ds_parser.cpp"
    break;

  case 363:
#line 1932 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt3; }
#line 6914 "ds_parser.cpp"
    break;

  case 364:
#line 1933 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt4; }
#line 6920 "ds_parser.cpp"
    break;

  case 365:
#line 1934 "ds_parser.ypp"
    { (yyval.type) = Type::tFloat; }
#line 6926 "ds_parser.cpp"
    break;

  case 366:
#line 1935 "ds_parser.ypp"
    { (yyval.type) = Type::tFloat2; }
#line 6932 "ds_parser.cpp"
    break;

  case 367:
#line 1936 "ds_parser.ypp"
    { (yyval.type) = Type::tFloat3; }
#line 6938 "ds_parser.cpp"
    break;

  case 368:
#line 1937 "ds_parser.ypp"
    { (yyval.type) = Type::tFloat4; }
#line 6944 "ds_parser.cpp"
    break;

  case 369:
#line 1938 "ds_parser.ypp"
    { (yyval.type) = Type::tVoid; }
#line 6950 "ds_parser.cpp"
    break;

  case 370:
#line 1939 "ds_parser.ypp"
    { (yyval.type) = Type::tRange; }
#line 6956 "ds_parser.cpp"
    break;

  case 371:
#line 1940 "ds_parser.ypp"
    { (yyval.type) = Type::tURange; }
#line 6962 "ds_parser.cpp"
    break;

  case 372:
#line 1941 "ds_parser.ypp"
    { (yyval.type) = Type::tDouble; }
#line 6968 "ds_parser.cpp"
    break;

  case 373:
#line 1942 "ds_parser.ypp"
    { (yyval.type) = Type::tBitfield; }
#line 6974 "ds_parser.cpp"
    break;

  case 374:
#line 1946 "ds_parser.ypp"
    { (yyval.type) = Type::tInt; }
#line 6980 "ds_parser.cpp"
    break;

  case 375:
#line 1947 "ds_parser.ypp"
    { (yyval.type) = Type::tInt8; }
#line 6986 "ds_parser.cpp"
    break;

  case 376:
#line 1948 "ds_parser.ypp"
    { (yyval.type) = Type::tInt16; }
#line 6992 "ds_parser.cpp"
    break;

  case 377:
#line 1949 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt; }
#line 6998 "ds_parser.cpp"
    break;

  case 378:
#line 1950 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt8; }
#line 7004 "ds_parser.cpp"
    break;

  case 379:
#line 1951 "ds_parser.ypp"
    { (yyval.type) = Type::tUInt16; }
#line 7010 "ds_parser.cpp"
    break;

  case 380:
#line 1955 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = g_Program->makeTypeDeclaration(tokAt((yylsp[0])),*(yyvsp[0].s));
        if ( !(yyval.pTypeDecl) ) {
            (yyval.pTypeDecl) = new TypeDecl(Type::tVoid);
            (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
        }
        delete (yyvsp[0].s);
    }
#line 7023 "ds_parser.cpp"
    break;

  case 381:
#line 1966 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
    }
#line 7032 "ds_parser.cpp"
    break;

  case 382:
#line 1970 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[-1].s),tokAt((yylsp[-1])));
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-3]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-1].s);
        delete (yyvsp[-1].s);
    }
#line 7044 "ds_parser.cpp"
    break;

  case 383:
#line 1980 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[0].s),tokAt((yylsp[0])));
        auto pSL = new vector<string>();
        pSL->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = pSL;
        delete (yyvsp[0].s);
    }
#line 7056 "ds_parser.cpp"
    break;

  case 384:
#line 1987 "ds_parser.ypp"
    {
		das_checkName(*(yyvsp[0].s),tokAt((yylsp[0])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        delete (yyvsp[0].s);
    }
#line 7067 "ds_parser.cpp"
    break;

  case 385:
#line 1996 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7073 "ds_parser.cpp"
    break;

  case 386:
#line 1996 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7079 "ds_parser.cpp"
    break;

  case 387:
#line 1996 "ds_parser.ypp"
    {
            (yyval.pTypeDecl) = new TypeDecl(Type::tBitfield);
            (yyval.pTypeDecl)->argNames = *(yyvsp[-2].pNameList);
            if ( (yyval.pTypeDecl)->argNames.size()>32 ) {
                das_yyerror("only 32 different bits allowed",tokAt((yylsp[-5])),
                    CompilationError::invalid_type);
            }
            (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
            delete (yyvsp[-2].pNameList);
    }
#line 7094 "ds_parser.cpp"
    break;

  case 388:
#line 2009 "ds_parser.ypp"
    { (yyval.pTypeDecl) = new TypeDecl((yyvsp[0].type)); (yyval.pTypeDecl)->at = tokAt((yylsp[0])); }
#line 7100 "ds_parser.cpp"
    break;

  case 389:
#line 2010 "ds_parser.ypp"
    { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
#line 7106 "ds_parser.cpp"
    break;

  case 390:
#line 2011 "ds_parser.ypp"
    { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
#line 7112 "ds_parser.cpp"
    break;

  case 391:
#line 2012 "ds_parser.ypp"
    { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
#line 7118 "ds_parser.cpp"
    break;

  case 392:
#line 2013 "ds_parser.ypp"
    {
        int32_t dI = TypeDecl::dimConst;
        if ( (yyvsp[-1].pExpression)->rtti_isConstant() ) {                // note: this shortcut is here so we don`t get extra infer pass on every array
            auto cI = (ExprConst *) (yyvsp[-1].pExpression);
            auto bt = cI->baseType;
            if ( bt==Type::tInt || bt==Type::tUInt ) {
                dI = cast<int32_t>::to(cI->value);
            }
        }
        (yyvsp[-3].pTypeDecl)->dim.push_back(dI);
        (yyvsp[-3].pTypeDecl)->dimExpr.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        (yyvsp[-3].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
#line 7137 "ds_parser.cpp"
    break;

  case 393:
#line 2027 "ds_parser.ypp"
    {
        (yyvsp[-2].pTypeDecl)->dim.push_back(TypeDecl::dimAuto);
        (yyvsp[-2].pTypeDecl)->dimExpr.push_back(nullptr);
        (yyvsp[-2].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
#line 7148 "ds_parser.cpp"
    break;

  case 394:
#line 2033 "ds_parser.ypp"
    {
        (yyvsp[-3].pTypeDecl)->removeDim = true;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
#line 7157 "ds_parser.cpp"
    break;

  case 395:
#line 2037 "ds_parser.ypp"
    {
        (yyvsp[-1].pTypeDecl)->constant = true;
        (yyvsp[-1].pTypeDecl)->removeConstant = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
#line 7167 "ds_parser.cpp"
    break;

  case 396:
#line 2042 "ds_parser.ypp"
    {
        (yyvsp[-2].pTypeDecl)->constant = false;
        (yyvsp[-2].pTypeDecl)->removeConstant = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
#line 7177 "ds_parser.cpp"
    break;

  case 397:
#line 2047 "ds_parser.ypp"
    {
        (yyvsp[-1].pTypeDecl)->ref = true;
        (yyvsp[-1].pTypeDecl)->removeRef = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
#line 7187 "ds_parser.cpp"
    break;

  case 398:
#line 2052 "ds_parser.ypp"
    {
        (yyvsp[-2].pTypeDecl)->ref = false;
        (yyvsp[-2].pTypeDecl)->removeRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
#line 7197 "ds_parser.cpp"
    break;

  case 399:
#line 2057 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->temporary = true;
    }
#line 7206 "ds_parser.cpp"
    break;

  case 400:
#line 2061 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->implicit = true;
    }
#line 7215 "ds_parser.cpp"
    break;

  case 401:
#line 2065 "ds_parser.ypp"
    {
        (yyvsp[-2].pTypeDecl)->temporary = false;
        (yyvsp[-2].pTypeDecl)->removeTemporary = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
#line 7225 "ds_parser.cpp"
    break;

  case 402:
#line 2070 "ds_parser.ypp"
    {
        (yyvsp[-2].pTypeDecl)->explicitConst = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
#line 7234 "ds_parser.cpp"
    break;

  case 403:
#line 2074 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-1]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
#line 7244 "ds_parser.cpp"
    break;

  case 404:
#line 2079 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7250 "ds_parser.cpp"
    break;

  case 405:
#line 2079 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7256 "ds_parser.cpp"
    break;

  case 406:
#line 2079 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        (yyval.pTypeDecl)->smartPtr = true;
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
#line 7267 "ds_parser.cpp"
    break;

  case 407:
#line 2085 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-1]));
        (yyval.pTypeDecl)->firstType = make_smart<TypeDecl>(Type::tPointer);
		(yyval.pTypeDecl)->firstType->at = tokAt((yylsp[-1]));
		(yyval.pTypeDecl)->firstType->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
#line 7279 "ds_parser.cpp"
    break;

  case 408:
#line 2092 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7285 "ds_parser.cpp"
    break;

  case 409:
#line 2092 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7291 "ds_parser.cpp"
    break;

  case 410:
#line 2092 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tArray);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
#line 7301 "ds_parser.cpp"
    break;

  case 411:
#line 2097 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7307 "ds_parser.cpp"
    break;

  case 412:
#line 2097 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7313 "ds_parser.cpp"
    break;

  case 413:
#line 2097 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTable);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-7]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        (yyval.pTypeDecl)->secondType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
#line 7324 "ds_parser.cpp"
    break;

  case 414:
#line 2103 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7330 "ds_parser.cpp"
    break;

  case 415:
#line 2103 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7336 "ds_parser.cpp"
    break;

  case 416:
#line 2103 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tIterator);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
#line 7346 "ds_parser.cpp"
    break;

  case 417:
#line 2108 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
    }
#line 7355 "ds_parser.cpp"
    break;

  case 418:
#line 2112 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7361 "ds_parser.cpp"
    break;

  case 419:
#line 2112 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7367 "ds_parser.cpp"
    break;

  case 420:
#line 2112 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
#line 7377 "ds_parser.cpp"
    break;

  case 421:
#line 2117 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7383 "ds_parser.cpp"
    break;

  case 422:
#line 2117 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7389 "ds_parser.cpp"
    break;

  case 423:
#line 2117 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl((yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
#line 7403 "ds_parser.cpp"
    break;

  case 424:
#line 2126 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
    }
#line 7412 "ds_parser.cpp"
    break;

  case 425:
#line 2130 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7418 "ds_parser.cpp"
    break;

  case 426:
#line 2130 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7424 "ds_parser.cpp"
    break;

  case 427:
#line 2130 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
#line 7434 "ds_parser.cpp"
    break;

  case 428:
#line 2135 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7440 "ds_parser.cpp"
    break;

  case 429:
#line 2135 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7446 "ds_parser.cpp"
    break;

  case 430:
#line 2135 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl((yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
#line 7460 "ds_parser.cpp"
    break;

  case 431:
#line 2144 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
    }
#line 7469 "ds_parser.cpp"
    break;

  case 432:
#line 2148 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7475 "ds_parser.cpp"
    break;

  case 433:
#line 2148 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7481 "ds_parser.cpp"
    break;

  case 434:
#line 2148 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
#line 7491 "ds_parser.cpp"
    break;

  case 435:
#line 2153 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7497 "ds_parser.cpp"
    break;

  case 436:
#line 2153 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7503 "ds_parser.cpp"
    break;

  case 437:
#line 2153 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl((yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
#line 7517 "ds_parser.cpp"
    break;

  case 438:
#line 2162 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7523 "ds_parser.cpp"
    break;

  case 439:
#line 2162 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7529 "ds_parser.cpp"
    break;

  case 440:
#line 2162 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTuple);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        varDeclToTypeDecl((yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
#line 7540 "ds_parser.cpp"
    break;

  case 441:
#line 2168 "ds_parser.ypp"
    { das_arrow_depth ++; }
#line 7546 "ds_parser.cpp"
    break;

  case 442:
#line 2168 "ds_parser.ypp"
    { das_arrow_depth --; }
#line 7552 "ds_parser.cpp"
    break;

  case 443:
#line 2168 "ds_parser.ypp"
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tVariant);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        varDeclToTypeDecl((yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
#line 7563 "ds_parser.cpp"
    break;

  case 444:
#line 2177 "ds_parser.ypp"
    { das_need_oxford_comma=false; }
#line 7569 "ds_parser.cpp"
    break;

  case 445:
#line 2177 "ds_parser.ypp"
    {
        auto vtype = make_smart<TypeDecl>(Type::tVariant);
        vtype->alias = *(yyvsp[-4].s);
        vtype->at = tokAt((yylsp[-4]));
        varDeclToTypeDecl(vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !g_Program->addAlias(vtype) ) {
            das_yyerror("type alias is already defined "+*(yyvsp[-4].s),tokAt((yylsp[-4])),
                CompilationError::type_alias_already_declared);
        }
        delete (yyvsp[-4].s);
    }
#line 7586 "ds_parser.cpp"
    break;

  case 446:
#line 2192 "ds_parser.ypp"
    { das_need_oxford_comma=false; }
#line 7592 "ds_parser.cpp"
    break;

  case 447:
#line 2192 "ds_parser.ypp"
    {
        auto btype = make_smart<TypeDecl>(Type::tBitfield);
        btype->alias = *(yyvsp[-4].s);
        btype->at = tokAt((yylsp[-4]));
        btype->argNames = *(yyvsp[-2].pNameList);
        if ( btype->argNames.size()>32 ) {
            das_yyerror("only 32 different bits allowed",tokAt((yylsp[-4])),
                CompilationError::invalid_type);
        }
        if ( !g_Program->addAlias(btype) ) {
            das_yyerror("type alias is already defined "+*(yyvsp[-4].s),tokAt((yylsp[-4])),
                CompilationError::type_alias_already_declared);
        }
        delete (yyvsp[-4].s);
        delete (yyvsp[-2].pNameList);
    }
#line 7613 "ds_parser.cpp"
    break;

  case 448:
#line 2212 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 7619 "ds_parser.cpp"
    break;

  case 449:
#line 2213 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 7625 "ds_parser.cpp"
    break;

  case 450:
#line 2214 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 7631 "ds_parser.cpp"
    break;

  case 451:
#line 2215 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 7637 "ds_parser.cpp"
    break;

  case 452:
#line 2219 "ds_parser.ypp"
    {
        auto mfd = make_smart<MakeFieldDecl>(tokAt((yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b));
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
#line 7649 "ds_parser.cpp"
    break;

  case 453:
#line 2226 "ds_parser.ypp"
    {
        auto mfd = make_smart<MakeFieldDecl>(tokAt((yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b));
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
#line 7660 "ds_parser.cpp"
    break;

  case 454:
#line 2235 "ds_parser.ypp"
    {
        auto msd = new ExprMakeStructureOrDefaultValue();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
#line 7670 "ds_parser.cpp"
    break;

  case 455:
#line 2240 "ds_parser.ypp"
    {
        ((ExprMakeStructureOrDefaultValue *) (yyvsp[-2].pExpression))->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 7679 "ds_parser.cpp"
    break;

  case 456:
#line 2247 "ds_parser.ypp"
    {
        ((ExprMakeStructureOrDefaultValue *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyvsp[-2].pExpression)->at = tokAt((yylsp[-4]));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 7689 "ds_parser.cpp"
    break;

  case 457:
#line 2252 "ds_parser.ypp"
    {
        auto msd = new ExprMakeStructureOrDefaultValue();
        msd->makeType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        msd->at = tokAt((yylsp[-3]));
        (yyval.pExpression) = msd;
    }
#line 7700 "ds_parser.cpp"
    break;

  case 458:
#line 2258 "ds_parser.ypp"
    {
        ((ExprMakeStructureOrDefaultValue *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        ((ExprMakeStructureOrDefaultValue *)(yyvsp[-2].pExpression))->useInitializer = true;
        (yyvsp[-2].pExpression)->at = tokAt((yylsp[-6]));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 7711 "ds_parser.cpp"
    break;

  case 459:
#line 2264 "ds_parser.ypp"
    {
        ((ExprMakeStructureOrDefaultValue *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyvsp[-2].pExpression)->at = tokAt((yylsp[-4]));
        auto tam = g_Program->makeCall(tokAt((yylsp[-4])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = tam;
    }
#line 7723 "ds_parser.cpp"
    break;

  case 460:
#line 2271 "ds_parser.ypp"
    {
        ((ExprMakeStructureOrDefaultValue *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        ((ExprMakeStructureOrDefaultValue *)(yyvsp[-2].pExpression))->useInitializer = true;
        (yyvsp[-2].pExpression)->at = tokAt((yylsp[-6]));
        auto tam = g_Program->makeCall(tokAt((yylsp[-6])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = tam;
    }
#line 7736 "ds_parser.cpp"
    break;

  case 461:
#line 2282 "ds_parser.ypp"
    {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
#line 7744 "ds_parser.cpp"
    break;

  case 462:
#line 2285 "ds_parser.ypp"
    {
        ExprMakeTuple * mt;
        if ( (yyvsp[-2].pExpression)->rtti_isMakeTuple() ) {
            mt = static_cast<ExprMakeTuple *>((yyvsp[-2].pExpression));
        } else {
            mt = new ExprMakeTuple(tokAt((yylsp[-2])));
            mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        }
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
#line 7760 "ds_parser.cpp"
    break;

  case 463:
#line 2299 "ds_parser.ypp"
    {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt((yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
#line 7771 "ds_parser.cpp"
    break;

  case 464:
#line 2308 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 7777 "ds_parser.cpp"
    break;

  case 465:
#line 2309 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 7783 "ds_parser.cpp"
    break;

  case 466:
#line 2313 "ds_parser.ypp"
    {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
#line 7793 "ds_parser.cpp"
    break;

  case 467:
#line 2318 "ds_parser.ypp"
    {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 7802 "ds_parser.cpp"
    break;

  case 468:
#line 2325 "ds_parser.ypp"
    {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt((yylsp[-4]));
       (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 7812 "ds_parser.cpp"
    break;

  case 469:
#line 2330 "ds_parser.ypp"
    {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt((yylsp[-4]));
       (yyval.pExpression) = (yyvsp[-2].pExpression);
       auto tam = g_Program->makeCall(tokAt((yylsp[-4])),"to_array_move");
       tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
       (yyval.pExpression) = tam;
    }
#line 7825 "ds_parser.cpp"
    break;

  case 470:
#line 2341 "ds_parser.ypp"
    {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
#line 7835 "ds_parser.cpp"
    break;

  case 471:
#line 2346 "ds_parser.ypp"
    {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 7844 "ds_parser.cpp"
    break;

  case 472:
#line 2353 "ds_parser.ypp"
    {
        auto mkt = make_smart<TypeDecl>(Type::autoinfer);
        mkt->dim.push_back(TypeDecl::dimAuto);
        ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = mkt;
        (yyvsp[-2].pExpression)->at = tokAt((yylsp[-3]));
        auto ttm = g_Program->makeCall(tokAt((yylsp[-3])),"to_table_move");
        ttm->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = ttm;
    }
#line 7858 "ds_parser.cpp"
    break;

  case 473:
#line 2365 "ds_parser.ypp"
    { (yyval.pExpression) = nullptr; }
#line 7864 "ds_parser.cpp"
    break;

  case 474:
#line 2366 "ds_parser.ypp"
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 7870 "ds_parser.cpp"
    break;

  case 475:
#line 2370 "ds_parser.ypp"
    {
        auto pFor = make_smart<ExprFor>(tokAt((yylsp[-8])));
        for ( const auto & np : *(yyvsp[-7].pNameWithPosList) ) {
            pFor->iterators.push_back(np.first);
            pFor->iteratorsAt.push_back(np.second);
        }
        delete (yyvsp[-7].pNameWithPosList);
        pFor->sources = sequenceToList((yyvsp[-5].pExpression));
        auto pAC = new ExprArrayComprehension(tokAt((yylsp[-8])));
        pAC->generatorSyntax = true;
        pAC->exprFor = pFor;
        pAC->subexpr = ExpressionPtr((yyvsp[-3].pExpression));
        if ( (yyvsp[-2].pExpression) ) {
            pAC->exprWhere = ExpressionPtr((yyvsp[-2].pExpression));
        }
        (yyval.pExpression) = pAC;
    }
#line 7892 "ds_parser.cpp"
    break;

  case 476:
#line 2387 "ds_parser.ypp"
    {
        auto pFor = make_smart<ExprFor>(tokAt((yylsp[-8])));
        for ( const auto & np : *(yyvsp[-7].pNameWithPosList) ) {
            pFor->iterators.push_back(np.first);
            pFor->iteratorsAt.push_back(np.second);
        }
        delete (yyvsp[-7].pNameWithPosList);
        pFor->sources = sequenceToList((yyvsp[-5].pExpression));
        auto pAC = new ExprArrayComprehension(tokAt((yylsp[-8])));
        pAC->generatorSyntax = false;
        pAC->exprFor = pFor;
        pAC->subexpr = ExpressionPtr((yyvsp[-3].pExpression));
        if ( (yyvsp[-2].pExpression) ) {
            pAC->exprWhere = ExpressionPtr((yyvsp[-2].pExpression));
        }
        (yyval.pExpression) = pAC;
    }
#line 7914 "ds_parser.cpp"
    break;


#line 7918 "ds_parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2406 "ds_parser.ypp"


void das_checkName(const string & name, const LineInfo &at) {
	if ( name.length()>=2 && name[0]=='_' && name[1]=='_' ) {
		g_Program->error("names starting with __ are reserved, " + name,"","",at,CompilationError::invalid_name);
	}
}

void das_yyerror(const string & error, const LineInfo & at, CompilationError cerr) {
    g_Program->error(error,"","",at,cerr);
}

void das_yyfatalerror(const string & error, CompilationError cerr) {
    g_Program->error(error,"","",LineInfo(g_FileAccessStack.back(),
        yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line),cerr);
}

void das_yyerror(const string & error) {
    if ( !das_supress_errors ) {
        g_Program->error(error,"","",LineInfo(g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line),
                CompilationError::syntax_error);
    }
}

vector<ExpressionPtr> sequenceToList ( Expression * arguments ) {
    vector<ExpressionPtr> argList;
    auto arg = arguments;
    if ( arg->rtti_isSequence() ) {
        while ( arg->rtti_isSequence() ) {
            auto pSeq = static_cast<ExprSequence *>(arg);
            DAS_ASSERT(!pSeq->right->rtti_isSequence());
            argList.push_back(pSeq->right);
            arg = pSeq->left.get();
        }
        argList.push_back(arg);
        reverse(argList.begin(),argList.end());
        delete arguments;
    } else {
        argList.push_back(ExpressionPtr(arg));
    }
    return argList;
}

ExprLooksLikeCall * parseFunctionArguments ( ExprLooksLikeCall * pCall, Expression * arguments ) {
    pCall->arguments = sequenceToList(arguments);
    return pCall;
}

void deleteVariableDeclarationList ( vector<VariableDeclaration *> * list ) {
    if ( !list ) return;
    for ( auto pD : *list )
        delete pD;
    delete list;
}

LineInfo tokAt ( const struct YYLTYPE & li ) {
    return LineInfo(g_FileAccessStack.back(),
        li.first_column,li.first_line,
        li.last_column,li.last_line);
}

LineInfo tokRangeAt ( const struct YYLTYPE & li, const struct YYLTYPE & lie ) {
    return LineInfo(g_FileAccessStack.back(),
        li.first_column,li.first_line,
        lie.last_column,lie.last_line);
}

Annotation * findAnnotation ( const string & name, const LineInfo & at ) {
    auto ann = g_Program->findAnnotation(name);
    if ( ann.size()==1 ) {
        return ann.back().get();
    } else if ( ann.size()==0 ) {
        das_yyerror("annotation " + name + " not found", at, CompilationError::annotation_not_found );
        return nullptr;
    } else {
        string candidates = g_Program->describeCandidates(ann);
        das_yyerror("too many options for annotation " + name + "\n" + candidates, at, CompilationError::annotation_not_found );
        return nullptr;
    }
}

void varDeclToTypeDecl ( TypeDecl * pType, vector<VariableDeclaration*> * list, bool needNames ) {
    bool anyNames = false;
    for ( auto pDecl : *list ) {
        if ( pDecl->pTypeDecl ) {
            int count = pDecl->pNameList ? int(pDecl->pNameList->size()) : 1;
            for ( int ai=0; ai!=count; ++ai ) {
                auto pVarType = make_smart<TypeDecl>(*pDecl->pTypeDecl);
                if ( pDecl->pInit ) {
                    das_yyerror("can't have default values in type declaration",
                        (*pDecl->pNameList)[ai].second,CompilationError::cant_initialize);
                }
                pType->argTypes.push_back(pVarType);
                if ( needNames && pDecl->pNameList && !(*pDecl->pNameList)[ai].first.empty() ) {
                    anyNames = true;
                }
            }
        }
    }
    if ( anyNames ) {
        for ( auto pDecl : *list ) {
            if ( pDecl->pTypeDecl ) {
                if ( pDecl->pNameList ) {
                    for ( const auto & name : *pDecl->pNameList ) {
                        pType->argNames.push_back(name.first);
                    }
                } else {
                    pType->argNames.push_back(string());
                }
            }
        }
    }
}


