/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

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

/* First part of user prologue.  */

    #include "daScript/misc/platform.h"
    #include "daScript/simulate/debug_info.h"
    #include "daScript/ast/compilation_errors.h"

    #ifdef _MSC_VER
    #pragma warning(disable:4262)
    #pragma warning(disable:4127)
    #pragma warning(disable:4702)
    #endif

    using namespace das;

    union DAS_YYSTYPE;
    struct DAS_YYLTYPE;

    #define YY_NO_UNISTD_H
    #include "lex.yy.h"

    void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error );
    void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr );
    int yylex ( DAS_YYSTYPE *lvalp, DAS_YYLTYPE *llocp, yyscan_t scanner );
    void yybegin ( const char * str );

    void das_yybegin_reader ( yyscan_t yyscanner );
    void das_yyend_reader ( yyscan_t yyscanner );

    namespace das { class Module; }
    void das_collect_keywords ( das::Module * mod, yyscan_t yyscanner );

    #undef yyextra
    #define yyextra (*((das::DasParserState **)(scanner)))


# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "ds_parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LEXER_ERROR = 3,                /* "lexer error"  */
  YYSYMBOL_DAS_STRUCT = 4,                 /* "struct"  */
  YYSYMBOL_DAS_CLASS = 5,                  /* "class"  */
  YYSYMBOL_DAS_LET = 6,                    /* "let"  */
  YYSYMBOL_DAS_DEF = 7,                    /* "def"  */
  YYSYMBOL_DAS_WHILE = 8,                  /* "while"  */
  YYSYMBOL_DAS_IF = 9,                     /* "if"  */
  YYSYMBOL_DAS_STATIC_IF = 10,             /* "static_if"  */
  YYSYMBOL_DAS_ELSE = 11,                  /* "else"  */
  YYSYMBOL_DAS_FOR = 12,                   /* "for"  */
  YYSYMBOL_DAS_CATCH = 13,                 /* "recover"  */
  YYSYMBOL_DAS_TRUE = 14,                  /* "true"  */
  YYSYMBOL_DAS_FALSE = 15,                 /* "false"  */
  YYSYMBOL_DAS_NEWT = 16,                  /* "new"  */
  YYSYMBOL_DAS_TYPEINFO = 17,              /* "typeinfo"  */
  YYSYMBOL_DAS_TYPE = 18,                  /* "type"  */
  YYSYMBOL_DAS_IN = 19,                    /* "in"  */
  YYSYMBOL_DAS_IS = 20,                    /* "is"  */
  YYSYMBOL_DAS_AS = 21,                    /* "as"  */
  YYSYMBOL_DAS_ELIF = 22,                  /* "elif"  */
  YYSYMBOL_DAS_STATIC_ELIF = 23,           /* "static_elif"  */
  YYSYMBOL_DAS_ARRAY = 24,                 /* "array"  */
  YYSYMBOL_DAS_RETURN = 25,                /* "return"  */
  YYSYMBOL_DAS_NULL = 26,                  /* "null"  */
  YYSYMBOL_DAS_BREAK = 27,                 /* "break"  */
  YYSYMBOL_DAS_TRY = 28,                   /* "try"  */
  YYSYMBOL_DAS_OPTIONS = 29,               /* "options"  */
  YYSYMBOL_DAS_TABLE = 30,                 /* "table"  */
  YYSYMBOL_DAS_EXPECT = 31,                /* "expect"  */
  YYSYMBOL_DAS_CONST = 32,                 /* "const"  */
  YYSYMBOL_DAS_REQUIRE = 33,               /* "require"  */
  YYSYMBOL_DAS_OPERATOR = 34,              /* "operator"  */
  YYSYMBOL_DAS_ENUM = 35,                  /* "enum"  */
  YYSYMBOL_DAS_FINALLY = 36,               /* "finally"  */
  YYSYMBOL_DAS_DELETE = 37,                /* "delete"  */
  YYSYMBOL_DAS_DEREF = 38,                 /* "deref"  */
  YYSYMBOL_DAS_TYPEDEF = 39,               /* "typedef"  */
  YYSYMBOL_DAS_WITH = 40,                  /* "with"  */
  YYSYMBOL_DAS_AKA = 41,                   /* "aka"  */
  YYSYMBOL_DAS_ASSUME = 42,                /* "assume"  */
  YYSYMBOL_DAS_CAST = 43,                  /* "cast"  */
  YYSYMBOL_DAS_OVERRIDE = 44,              /* "override"  */
  YYSYMBOL_DAS_ABSTRACT = 45,              /* "abstract"  */
  YYSYMBOL_DAS_UPCAST = 46,                /* "upcast"  */
  YYSYMBOL_DAS_ITERATOR = 47,              /* "iterator"  */
  YYSYMBOL_DAS_VAR = 48,                   /* "var"  */
  YYSYMBOL_DAS_ADDR = 49,                  /* "addr"  */
  YYSYMBOL_DAS_CONTINUE = 50,              /* "continue"  */
  YYSYMBOL_DAS_WHERE = 51,                 /* "where"  */
  YYSYMBOL_DAS_PASS = 52,                  /* "pass"  */
  YYSYMBOL_DAS_REINTERPRET = 53,           /* "reinterpret"  */
  YYSYMBOL_DAS_MODULE = 54,                /* "module"  */
  YYSYMBOL_DAS_PUBLIC = 55,                /* "public"  */
  YYSYMBOL_DAS_LABEL = 56,                 /* "label"  */
  YYSYMBOL_DAS_GOTO = 57,                  /* "goto"  */
  YYSYMBOL_DAS_IMPLICIT = 58,              /* "implicit"  */
  YYSYMBOL_DAS_EXPLICIT = 59,              /* "explicit"  */
  YYSYMBOL_DAS_SHARED = 60,                /* "shared"  */
  YYSYMBOL_DAS_PRIVATE = 61,               /* "private"  */
  YYSYMBOL_DAS_SMART_PTR = 62,             /* "smart_ptr"  */
  YYSYMBOL_DAS_UNSAFE = 63,                /* "unsafe"  */
  YYSYMBOL_DAS_INSCOPE = 64,               /* "inscope"  */
  YYSYMBOL_DAS_TBOOL = 65,                 /* "bool"  */
  YYSYMBOL_DAS_TVOID = 66,                 /* "void"  */
  YYSYMBOL_DAS_TSTRING = 67,               /* "string"  */
  YYSYMBOL_DAS_TAUTO = 68,                 /* "auto"  */
  YYSYMBOL_DAS_TINT = 69,                  /* "int"  */
  YYSYMBOL_DAS_TINT2 = 70,                 /* "int2"  */
  YYSYMBOL_DAS_TINT3 = 71,                 /* "int3"  */
  YYSYMBOL_DAS_TINT4 = 72,                 /* "int4"  */
  YYSYMBOL_DAS_TUINT = 73,                 /* "uint"  */
  YYSYMBOL_DAS_TBITFIELD = 74,             /* "bitfield"  */
  YYSYMBOL_DAS_TUINT2 = 75,                /* "uint2"  */
  YYSYMBOL_DAS_TUINT3 = 76,                /* "uint3"  */
  YYSYMBOL_DAS_TUINT4 = 77,                /* "uint4"  */
  YYSYMBOL_DAS_TFLOAT = 78,                /* "float"  */
  YYSYMBOL_DAS_TFLOAT2 = 79,               /* "float2"  */
  YYSYMBOL_DAS_TFLOAT3 = 80,               /* "float3"  */
  YYSYMBOL_DAS_TFLOAT4 = 81,               /* "float4"  */
  YYSYMBOL_DAS_TRANGE = 82,                /* "range"  */
  YYSYMBOL_DAS_TURANGE = 83,               /* "urange"  */
  YYSYMBOL_DAS_TRANGE64 = 84,              /* "range64"  */
  YYSYMBOL_DAS_TURANGE64 = 85,             /* "urange64"  */
  YYSYMBOL_DAS_TBLOCK = 86,                /* "block"  */
  YYSYMBOL_DAS_TINT64 = 87,                /* "int64"  */
  YYSYMBOL_DAS_TUINT64 = 88,               /* "uint64"  */
  YYSYMBOL_DAS_TDOUBLE = 89,               /* "double"  */
  YYSYMBOL_DAS_TFUNCTION = 90,             /* "function"  */
  YYSYMBOL_DAS_TLAMBDA = 91,               /* "lambda"  */
  YYSYMBOL_DAS_TINT8 = 92,                 /* "int8"  */
  YYSYMBOL_DAS_TUINT8 = 93,                /* "uint8"  */
  YYSYMBOL_DAS_TINT16 = 94,                /* "int16"  */
  YYSYMBOL_DAS_TUINT16 = 95,               /* "uint16"  */
  YYSYMBOL_DAS_TTUPLE = 96,                /* "tuple"  */
  YYSYMBOL_DAS_TVARIANT = 97,              /* "variant"  */
  YYSYMBOL_DAS_GENERATOR = 98,             /* "generator"  */
  YYSYMBOL_DAS_YIELD = 99,                 /* "yield"  */
  YYSYMBOL_DAS_SEALED = 100,               /* "sealed"  */
  YYSYMBOL_ADDEQU = 101,                   /* "+="  */
  YYSYMBOL_SUBEQU = 102,                   /* "-="  */
  YYSYMBOL_DIVEQU = 103,                   /* "/="  */
  YYSYMBOL_MULEQU = 104,                   /* "*="  */
  YYSYMBOL_MODEQU = 105,                   /* "%="  */
  YYSYMBOL_ANDEQU = 106,                   /* "&="  */
  YYSYMBOL_OREQU = 107,                    /* "|="  */
  YYSYMBOL_XOREQU = 108,                   /* "^="  */
  YYSYMBOL_SHL = 109,                      /* "<<"  */
  YYSYMBOL_SHR = 110,                      /* ">>"  */
  YYSYMBOL_ADDADD = 111,                   /* "++"  */
  YYSYMBOL_SUBSUB = 112,                   /* "--"  */
  YYSYMBOL_LEEQU = 113,                    /* "<="  */
  YYSYMBOL_SHLEQU = 114,                   /* "<<="  */
  YYSYMBOL_SHREQU = 115,                   /* ">>="  */
  YYSYMBOL_GREQU = 116,                    /* ">="  */
  YYSYMBOL_EQUEQU = 117,                   /* "=="  */
  YYSYMBOL_NOTEQU = 118,                   /* "!="  */
  YYSYMBOL_RARROW = 119,                   /* "->"  */
  YYSYMBOL_LARROW = 120,                   /* "<-"  */
  YYSYMBOL_QQ = 121,                       /* "??"  */
  YYSYMBOL_QDOT = 122,                     /* "?."  */
  YYSYMBOL_QBRA = 123,                     /* "?["  */
  YYSYMBOL_LPIPE = 124,                    /* "<|"  */
  YYSYMBOL_LBPIPE = 125,                   /* " <|"  */
  YYSYMBOL_LAPIPE = 126,                   /* "@ <|"  */
  YYSYMBOL_LFPIPE = 127,                   /* "@@ <|"  */
  YYSYMBOL_RPIPE = 128,                    /* "|>"  */
  YYSYMBOL_CLONEEQU = 129,                 /* ":="  */
  YYSYMBOL_ROTL = 130,                     /* "<<<"  */
  YYSYMBOL_ROTR = 131,                     /* ">>>"  */
  YYSYMBOL_ROTLEQU = 132,                  /* "<<<="  */
  YYSYMBOL_ROTREQU = 133,                  /* ">>>="  */
  YYSYMBOL_MAPTO = 134,                    /* "=>"  */
  YYSYMBOL_COLCOL = 135,                   /* "::"  */
  YYSYMBOL_ANDAND = 136,                   /* "&&"  */
  YYSYMBOL_OROR = 137,                     /* "||"  */
  YYSYMBOL_XORXOR = 138,                   /* "^^"  */
  YYSYMBOL_ANDANDEQU = 139,                /* "&&="  */
  YYSYMBOL_OROREQU = 140,                  /* "||="  */
  YYSYMBOL_XORXOREQU = 141,                /* "^^="  */
  YYSYMBOL_DOTDOT = 142,                   /* ".."  */
  YYSYMBOL_MTAG_E = 143,                   /* "$$"  */
  YYSYMBOL_MTAG_I = 144,                   /* "$i"  */
  YYSYMBOL_MTAG_V = 145,                   /* "$v"  */
  YYSYMBOL_MTAG_B = 146,                   /* "$b"  */
  YYSYMBOL_MTAG_A = 147,                   /* "$a"  */
  YYSYMBOL_MTAG_T = 148,                   /* "$t"  */
  YYSYMBOL_MTAG_C = 149,                   /* "$c"  */
  YYSYMBOL_MTAG_F = 150,                   /* "$f"  */
  YYSYMBOL_MTAG_DOTDOTDOT = 151,           /* "..."  */
  YYSYMBOL_BRABRAB = 152,                  /* "[["  */
  YYSYMBOL_BRACBRB = 153,                  /* "[{"  */
  YYSYMBOL_CBRCBRB = 154,                  /* "{{"  */
  YYSYMBOL_INTEGER = 155,                  /* "integer constant"  */
  YYSYMBOL_LONG_INTEGER = 156,             /* "long integer constant"  */
  YYSYMBOL_UNSIGNED_INTEGER = 157,         /* "unsigned integer constant"  */
  YYSYMBOL_UNSIGNED_LONG_INTEGER = 158,    /* "unsigned long integer constant"  */
  YYSYMBOL_UNSIGNED_INT8 = 159,            /* "unsigned int8 constant"  */
  YYSYMBOL_FLOAT = 160,                    /* "floating point constant"  */
  YYSYMBOL_DOUBLE = 161,                   /* "double constant"  */
  YYSYMBOL_NAME = 162,                     /* "name"  */
  YYSYMBOL_KEYWORD = 163,                  /* "keyword"  */
  YYSYMBOL_BEGIN_STRING = 164,             /* "start of the string"  */
  YYSYMBOL_STRING_CHARACTER = 165,         /* STRING_CHARACTER  */
  YYSYMBOL_STRING_CHARACTER_ESC = 166,     /* STRING_CHARACTER_ESC  */
  YYSYMBOL_END_STRING = 167,               /* "end of the string"  */
  YYSYMBOL_BEGIN_STRING_EXPR = 168,        /* "{"  */
  YYSYMBOL_END_STRING_EXPR = 169,          /* "}"  */
  YYSYMBOL_END_OF_READ = 170,              /* "end of failed eader macro"  */
  YYSYMBOL_171_ = 171,                     /* ','  */
  YYSYMBOL_172_ = 172,                     /* '='  */
  YYSYMBOL_173_ = 173,                     /* '?'  */
  YYSYMBOL_174_ = 174,                     /* ':'  */
  YYSYMBOL_175_ = 175,                     /* '|'  */
  YYSYMBOL_176_ = 176,                     /* '^'  */
  YYSYMBOL_177_ = 177,                     /* '&'  */
  YYSYMBOL_178_ = 178,                     /* '<'  */
  YYSYMBOL_179_ = 179,                     /* '>'  */
  YYSYMBOL_180_ = 180,                     /* '-'  */
  YYSYMBOL_181_ = 181,                     /* '+'  */
  YYSYMBOL_182_ = 182,                     /* '*'  */
  YYSYMBOL_183_ = 183,                     /* '/'  */
  YYSYMBOL_184_ = 184,                     /* '%'  */
  YYSYMBOL_UNARY_MINUS = 185,              /* UNARY_MINUS  */
  YYSYMBOL_UNARY_PLUS = 186,               /* UNARY_PLUS  */
  YYSYMBOL_187_ = 187,                     /* '~'  */
  YYSYMBOL_188_ = 188,                     /* '!'  */
  YYSYMBOL_PRE_INC = 189,                  /* PRE_INC  */
  YYSYMBOL_PRE_DEC = 190,                  /* PRE_DEC  */
  YYSYMBOL_POST_INC = 191,                 /* POST_INC  */
  YYSYMBOL_POST_DEC = 192,                 /* POST_DEC  */
  YYSYMBOL_DEREF = 193,                    /* DEREF  */
  YYSYMBOL_194_ = 194,                     /* '.'  */
  YYSYMBOL_195_ = 195,                     /* '['  */
  YYSYMBOL_196_ = 196,                     /* ']'  */
  YYSYMBOL_197_ = 197,                     /* '('  */
  YYSYMBOL_198_ = 198,                     /* ')'  */
  YYSYMBOL_199_ = 199,                     /* '$'  */
  YYSYMBOL_200_ = 200,                     /* '@'  */
  YYSYMBOL_201_ = 201,                     /* ';'  */
  YYSYMBOL_202_ = 202,                     /* '{'  */
  YYSYMBOL_203_ = 203,                     /* '}'  */
  YYSYMBOL_204_ = 204,                     /* '#'  */
  YYSYMBOL_YYACCEPT = 205,                 /* $accept  */
  YYSYMBOL_program = 206,                  /* program  */
  YYSYMBOL_optional_public_or_private_module = 207, /* optional_public_or_private_module  */
  YYSYMBOL_module_name = 208,              /* module_name  */
  YYSYMBOL_module_declaration = 209,       /* module_declaration  */
  YYSYMBOL_character_sequence = 210,       /* character_sequence  */
  YYSYMBOL_string_constant = 211,          /* string_constant  */
  YYSYMBOL_string_builder_body = 212,      /* string_builder_body  */
  YYSYMBOL_string_builder = 213,           /* string_builder  */
  YYSYMBOL_reader_character_sequence = 214, /* reader_character_sequence  */
  YYSYMBOL_expr_reader = 215,              /* expr_reader  */
  YYSYMBOL_216_1 = 216,                    /* $@1  */
  YYSYMBOL_options_declaration = 217,      /* options_declaration  */
  YYSYMBOL_require_declaration = 218,      /* require_declaration  */
  YYSYMBOL_keyword_or_name = 219,          /* keyword_or_name  */
  YYSYMBOL_require_module_name = 220,      /* require_module_name  */
  YYSYMBOL_require_module = 221,           /* require_module  */
  YYSYMBOL_is_public_module = 222,         /* is_public_module  */
  YYSYMBOL_expect_declaration = 223,       /* expect_declaration  */
  YYSYMBOL_expect_list = 224,              /* expect_list  */
  YYSYMBOL_expect_error = 225,             /* expect_error  */
  YYSYMBOL_expression_label = 226,         /* expression_label  */
  YYSYMBOL_expression_goto = 227,          /* expression_goto  */
  YYSYMBOL_elif_or_static_elif = 228,      /* elif_or_static_elif  */
  YYSYMBOL_expression_else = 229,          /* expression_else  */
  YYSYMBOL_if_or_static_if = 230,          /* if_or_static_if  */
  YYSYMBOL_expression_else_one_liner = 231, /* expression_else_one_liner  */
  YYSYMBOL_232_2 = 232,                    /* $@2  */
  YYSYMBOL_expression_if_one_liner = 233,  /* expression_if_one_liner  */
  YYSYMBOL_expression_if_then_else = 234,  /* expression_if_then_else  */
  YYSYMBOL_235_3 = 235,                    /* $@3  */
  YYSYMBOL_expression_for_loop = 236,      /* expression_for_loop  */
  YYSYMBOL_expression_unsafe = 237,        /* expression_unsafe  */
  YYSYMBOL_expression_while_loop = 238,    /* expression_while_loop  */
  YYSYMBOL_expression_with = 239,          /* expression_with  */
  YYSYMBOL_expression_with_alias = 240,    /* expression_with_alias  */
  YYSYMBOL_241_4 = 241,                    /* $@4  */
  YYSYMBOL_annotation_argument_value = 242, /* annotation_argument_value  */
  YYSYMBOL_annotation_argument_value_list = 243, /* annotation_argument_value_list  */
  YYSYMBOL_annotation_argument_name = 244, /* annotation_argument_name  */
  YYSYMBOL_annotation_argument = 245,      /* annotation_argument  */
  YYSYMBOL_annotation_argument_list = 246, /* annotation_argument_list  */
  YYSYMBOL_annotation_declaration_name = 247, /* annotation_declaration_name  */
  YYSYMBOL_annotation_declaration_basic = 248, /* annotation_declaration_basic  */
  YYSYMBOL_annotation_declaration = 249,   /* annotation_declaration  */
  YYSYMBOL_annotation_list = 250,          /* annotation_list  */
  YYSYMBOL_optional_annotation_list = 251, /* optional_annotation_list  */
  YYSYMBOL_optional_function_argument_list = 252, /* optional_function_argument_list  */
  YYSYMBOL_optional_function_type = 253,   /* optional_function_type  */
  YYSYMBOL_function_name = 254,            /* function_name  */
  YYSYMBOL_global_function_declaration = 255, /* global_function_declaration  */
  YYSYMBOL_optional_public_or_private_function = 256, /* optional_public_or_private_function  */
  YYSYMBOL_function_declaration_header = 257, /* function_declaration_header  */
  YYSYMBOL_function_declaration = 258,     /* function_declaration  */
  YYSYMBOL_259_5 = 259,                    /* $@5  */
  YYSYMBOL_expression_block = 260,         /* expression_block  */
  YYSYMBOL_expression_any = 261,           /* expression_any  */
  YYSYMBOL_expressions = 262,              /* expressions  */
  YYSYMBOL_expr_keyword = 263,             /* expr_keyword  */
  YYSYMBOL_expression_keyword = 264,       /* expression_keyword  */
  YYSYMBOL_265_6 = 265,                    /* $@6  */
  YYSYMBOL_266_7 = 266,                    /* $@7  */
  YYSYMBOL_expr_pipe = 267,                /* expr_pipe  */
  YYSYMBOL_name_in_namespace = 268,        /* name_in_namespace  */
  YYSYMBOL_expression_delete = 269,        /* expression_delete  */
  YYSYMBOL_new_type_declaration = 270,     /* new_type_declaration  */
  YYSYMBOL_271_8 = 271,                    /* $@8  */
  YYSYMBOL_272_9 = 272,                    /* $@9  */
  YYSYMBOL_expr_new = 273,                 /* expr_new  */
  YYSYMBOL_expression_break = 274,         /* expression_break  */
  YYSYMBOL_expression_continue = 275,      /* expression_continue  */
  YYSYMBOL_expression_return_no_pipe = 276, /* expression_return_no_pipe  */
  YYSYMBOL_expression_return = 277,        /* expression_return  */
  YYSYMBOL_expression_yield_no_pipe = 278, /* expression_yield_no_pipe  */
  YYSYMBOL_expression_yield = 279,         /* expression_yield  */
  YYSYMBOL_expression_try_catch = 280,     /* expression_try_catch  */
  YYSYMBOL_kwd_let = 281,                  /* kwd_let  */
  YYSYMBOL_optional_in_scope = 282,        /* optional_in_scope  */
  YYSYMBOL_expression_let = 283,           /* expression_let  */
  YYSYMBOL_expr_cast = 284,                /* expr_cast  */
  YYSYMBOL_285_10 = 285,                   /* $@10  */
  YYSYMBOL_286_11 = 286,                   /* $@11  */
  YYSYMBOL_287_12 = 287,                   /* $@12  */
  YYSYMBOL_288_13 = 288,                   /* $@13  */
  YYSYMBOL_289_14 = 289,                   /* $@14  */
  YYSYMBOL_290_15 = 290,                   /* $@15  */
  YYSYMBOL_expr_type_decl = 291,           /* expr_type_decl  */
  YYSYMBOL_292_16 = 292,                   /* $@16  */
  YYSYMBOL_293_17 = 293,                   /* $@17  */
  YYSYMBOL_expr_type_info = 294,           /* expr_type_info  */
  YYSYMBOL_expr_list = 295,                /* expr_list  */
  YYSYMBOL_block_or_simple_block = 296,    /* block_or_simple_block  */
  YYSYMBOL_block_or_lambda = 297,          /* block_or_lambda  */
  YYSYMBOL_capture_entry = 298,            /* capture_entry  */
  YYSYMBOL_capture_list = 299,             /* capture_list  */
  YYSYMBOL_optional_capture_list = 300,    /* optional_capture_list  */
  YYSYMBOL_expr_block = 301,               /* expr_block  */
  YYSYMBOL_expr_numeric_const = 302,       /* expr_numeric_const  */
  YYSYMBOL_expr_assign = 303,              /* expr_assign  */
  YYSYMBOL_expr_assign_pipe = 304,         /* expr_assign_pipe  */
  YYSYMBOL_expr_named_call = 305,          /* expr_named_call  */
  YYSYMBOL_expr_method_call = 306,         /* expr_method_call  */
  YYSYMBOL_func_addr_name = 307,           /* func_addr_name  */
  YYSYMBOL_func_addr_expr = 308,           /* func_addr_expr  */
  YYSYMBOL_309_18 = 309,                   /* $@18  */
  YYSYMBOL_310_19 = 310,                   /* $@19  */
  YYSYMBOL_311_20 = 311,                   /* $@20  */
  YYSYMBOL_312_21 = 312,                   /* $@21  */
  YYSYMBOL_expr_field = 313,               /* expr_field  */
  YYSYMBOL_314_22 = 314,                   /* $@22  */
  YYSYMBOL_315_23 = 315,                   /* $@23  */
  YYSYMBOL_expr = 316,                     /* expr  */
  YYSYMBOL_317_24 = 317,                   /* $@24  */
  YYSYMBOL_318_25 = 318,                   /* $@25  */
  YYSYMBOL_319_26 = 319,                   /* $@26  */
  YYSYMBOL_320_27 = 320,                   /* $@27  */
  YYSYMBOL_321_28 = 321,                   /* $@28  */
  YYSYMBOL_322_29 = 322,                   /* $@29  */
  YYSYMBOL_expr_mtag = 323,                /* expr_mtag  */
  YYSYMBOL_optional_field_annotation = 324, /* optional_field_annotation  */
  YYSYMBOL_optional_override = 325,        /* optional_override  */
  YYSYMBOL_optional_constant = 326,        /* optional_constant  */
  YYSYMBOL_optional_public_or_private_member_variable = 327, /* optional_public_or_private_member_variable  */
  YYSYMBOL_structure_variable_declaration = 328, /* structure_variable_declaration  */
  YYSYMBOL_struct_variable_declaration_list = 329, /* struct_variable_declaration_list  */
  YYSYMBOL_330_30 = 330,                   /* $@30  */
  YYSYMBOL_331_31 = 331,                   /* $@31  */
  YYSYMBOL_332_32 = 332,                   /* $@32  */
  YYSYMBOL_function_argument_declaration = 333, /* function_argument_declaration  */
  YYSYMBOL_function_argument_list = 334,   /* function_argument_list  */
  YYSYMBOL_tuple_type = 335,               /* tuple_type  */
  YYSYMBOL_tuple_type_list = 336,          /* tuple_type_list  */
  YYSYMBOL_variant_type = 337,             /* variant_type  */
  YYSYMBOL_variant_type_list = 338,        /* variant_type_list  */
  YYSYMBOL_copy_or_move = 339,             /* copy_or_move  */
  YYSYMBOL_variable_declaration = 340,     /* variable_declaration  */
  YYSYMBOL_copy_or_move_or_clone = 341,    /* copy_or_move_or_clone  */
  YYSYMBOL_optional_ref = 342,             /* optional_ref  */
  YYSYMBOL_let_variable_name_with_pos_list = 343, /* let_variable_name_with_pos_list  */
  YYSYMBOL_let_variable_declaration = 344, /* let_variable_declaration  */
  YYSYMBOL_global_variable_declaration_list = 345, /* global_variable_declaration_list  */
  YYSYMBOL_346_33 = 346,                   /* $@33  */
  YYSYMBOL_optional_shared = 347,          /* optional_shared  */
  YYSYMBOL_optional_public_or_private_variable = 348, /* optional_public_or_private_variable  */
  YYSYMBOL_global_let = 349,               /* global_let  */
  YYSYMBOL_350_34 = 350,                   /* $@34  */
  YYSYMBOL_enum_list = 351,                /* enum_list  */
  YYSYMBOL_single_alias = 352,             /* single_alias  */
  YYSYMBOL_353_35 = 353,                   /* $@35  */
  YYSYMBOL_alias_list = 354,               /* alias_list  */
  YYSYMBOL_alias_declaration = 355,        /* alias_declaration  */
  YYSYMBOL_optional_public_or_private_enum = 356, /* optional_public_or_private_enum  */
  YYSYMBOL_enum_name = 357,                /* enum_name  */
  YYSYMBOL_enum_declaration = 358,         /* enum_declaration  */
  YYSYMBOL_optional_structure_parent = 359, /* optional_structure_parent  */
  YYSYMBOL_optional_sealed = 360,          /* optional_sealed  */
  YYSYMBOL_structure_name = 361,           /* structure_name  */
  YYSYMBOL_class_or_struct = 362,          /* class_or_struct  */
  YYSYMBOL_optional_public_or_private_structure = 363, /* optional_public_or_private_structure  */
  YYSYMBOL_structure_declaration = 364,    /* structure_declaration  */
  YYSYMBOL_365_36 = 365,                   /* $@36  */
  YYSYMBOL_366_37 = 366,                   /* $@37  */
  YYSYMBOL_variable_name_with_pos_list = 367, /* variable_name_with_pos_list  */
  YYSYMBOL_basic_type_declaration = 368,   /* basic_type_declaration  */
  YYSYMBOL_enum_basic_type_declaration = 369, /* enum_basic_type_declaration  */
  YYSYMBOL_structure_type_declaration = 370, /* structure_type_declaration  */
  YYSYMBOL_auto_type_declaration = 371,    /* auto_type_declaration  */
  YYSYMBOL_bitfield_bits = 372,            /* bitfield_bits  */
  YYSYMBOL_bitfield_type_declaration = 373, /* bitfield_type_declaration  */
  YYSYMBOL_374_38 = 374,                   /* $@38  */
  YYSYMBOL_375_39 = 375,                   /* $@39  */
  YYSYMBOL_table_type_pair = 376,          /* table_type_pair  */
  YYSYMBOL_type_declaration_no_options = 377, /* type_declaration_no_options  */
  YYSYMBOL_378_40 = 378,                   /* $@40  */
  YYSYMBOL_379_41 = 379,                   /* $@41  */
  YYSYMBOL_380_42 = 380,                   /* $@42  */
  YYSYMBOL_381_43 = 381,                   /* $@43  */
  YYSYMBOL_382_44 = 382,                   /* $@44  */
  YYSYMBOL_383_45 = 383,                   /* $@45  */
  YYSYMBOL_384_46 = 384,                   /* $@46  */
  YYSYMBOL_385_47 = 385,                   /* $@47  */
  YYSYMBOL_386_48 = 386,                   /* $@48  */
  YYSYMBOL_387_49 = 387,                   /* $@49  */
  YYSYMBOL_388_50 = 388,                   /* $@50  */
  YYSYMBOL_389_51 = 389,                   /* $@51  */
  YYSYMBOL_390_52 = 390,                   /* $@52  */
  YYSYMBOL_391_53 = 391,                   /* $@53  */
  YYSYMBOL_392_54 = 392,                   /* $@54  */
  YYSYMBOL_393_55 = 393,                   /* $@55  */
  YYSYMBOL_394_56 = 394,                   /* $@56  */
  YYSYMBOL_395_57 = 395,                   /* $@57  */
  YYSYMBOL_396_58 = 396,                   /* $@58  */
  YYSYMBOL_397_59 = 397,                   /* $@59  */
  YYSYMBOL_398_60 = 398,                   /* $@60  */
  YYSYMBOL_399_61 = 399,                   /* $@61  */
  YYSYMBOL_400_62 = 400,                   /* $@62  */
  YYSYMBOL_401_63 = 401,                   /* $@63  */
  YYSYMBOL_type_declaration = 402,         /* type_declaration  */
  YYSYMBOL_variant_alias_declaration = 403, /* variant_alias_declaration  */
  YYSYMBOL_404_64 = 404,                   /* $@64  */
  YYSYMBOL_405_65 = 405,                   /* $@65  */
  YYSYMBOL_bitfield_alias_declaration = 406, /* bitfield_alias_declaration  */
  YYSYMBOL_407_66 = 407,                   /* $@66  */
  YYSYMBOL_make_decl = 408,                /* make_decl  */
  YYSYMBOL_make_struct_fields = 409,       /* make_struct_fields  */
  YYSYMBOL_make_struct_dim = 410,          /* make_struct_dim  */
  YYSYMBOL_optional_block = 411,           /* optional_block  */
  YYSYMBOL_make_struct_decl = 412,         /* make_struct_decl  */
  YYSYMBOL_make_tuple = 413,               /* make_tuple  */
  YYSYMBOL_make_map_tuple = 414,           /* make_map_tuple  */
  YYSYMBOL_make_dim = 415,                 /* make_dim  */
  YYSYMBOL_make_dim_decl = 416,            /* make_dim_decl  */
  YYSYMBOL_make_table = 417,               /* make_table  */
  YYSYMBOL_make_table_decl = 418,          /* make_table_decl  */
  YYSYMBOL_array_comprehension_where = 419, /* array_comprehension_where  */
  YYSYMBOL_array_comprehension = 420       /* array_comprehension  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL \
             && defined DAS_YYSTYPE_IS_TRIVIAL && DAS_YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   11644

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  205
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  699
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   432


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   188,     2,   204,   199,   184,   177,     2,
     197,   198,   182,   181,   171,   180,   194,   183,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   174,   201,
     178,   172,   179,   173,   200,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   195,     2,   196,   176,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   202,   175,   203,   187,     2,     2,     2,
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   185,   186,   189,   190,
     191,   192,   193
};

#if DAS_YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   490,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   506,   507,   508,   512,   513,
     517,   535,   536,   537,   538,   542,   546,   551,   560,   568,
     584,   589,   597,   597,   627,   648,   652,   653,   657,   660,
     664,   670,   679,   682,   688,   689,   693,   697,   698,   702,
     705,   711,   717,   720,   726,   727,   731,   732,   733,   742,
     743,   747,   748,   748,   754,   755,   756,   757,   758,   762,
     768,   768,   774,   780,   788,   798,   807,   807,   814,   815,
     816,   817,   818,   819,   823,   828,   836,   837,   838,   842,
     843,   844,   845,   846,   847,   848,   849,   855,   858,   864,
     865,   866,   870,   878,   891,   894,   902,   913,   924,   935,
     941,   945,   952,   953,   957,   958,   959,   963,   966,   973,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   991,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
    1047,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,
    1057,  1058,  1059,  1064,  1086,  1087,  1088,  1092,  1098,  1098,
    1115,  1119,  1130,  1131,  1132,  1133,  1134,  1135,  1136,  1137,
    1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1149,  1150,  1154,  1159,  1165,  1171,  1182,  1182,  1182,
    1193,  1227,  1230,  1236,  1237,  1248,  1252,  1255,  1263,  1263,
    1263,  1266,  1272,  1275,  1278,  1282,  1288,  1292,  1296,  1299,
    1302,  1310,  1313,  1316,  1324,  1327,  1335,  1338,  1341,  1349,
    1355,  1356,  1360,  1361,  1365,  1371,  1371,  1371,  1374,  1374,
    1374,  1379,  1379,  1379,  1387,  1387,  1387,  1393,  1403,  1414,
    1429,  1432,  1438,  1439,  1446,  1457,  1458,  1459,  1463,  1464,
    1465,  1466,  1470,  1475,  1483,  1484,  1488,  1493,  1500,  1501,
    1502,  1503,  1504,  1505,  1506,  1510,  1511,  1512,  1513,  1514,
    1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,  1523,  1524,
    1525,  1526,  1527,  1528,  1532,  1533,  1534,  1535,  1539,  1546,
    1558,  1563,  1573,  1577,  1584,  1587,  1587,  1587,  1592,  1592,
    1592,  1605,  1609,  1613,  1613,  1613,  1620,  1621,  1622,  1623,
    1624,  1625,  1626,  1627,  1628,  1629,  1630,  1631,  1632,  1633,
    1634,  1635,  1636,  1637,  1638,  1639,  1640,  1641,  1642,  1643,
    1644,  1645,  1646,  1647,  1648,  1649,  1650,  1651,  1652,  1653,
    1654,  1655,  1661,  1662,  1663,  1664,  1665,  1666,  1667,  1668,
    1669,  1670,  1671,  1672,  1673,  1677,  1681,  1684,  1687,  1688,
    1689,  1690,  1693,  1696,  1697,  1700,  1700,  1700,  1703,  1708,
    1712,  1716,  1716,  1716,  1721,  1724,  1728,  1728,  1728,  1733,
    1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,  1744,  1745,
    1746,  1751,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1765,
    1769,  1773,  1777,  1781,  1785,  1789,  1793,  1797,  1804,  1805,
    1809,  1810,  1811,  1815,  1816,  1820,  1821,  1822,  1826,  1836,
    1839,  1839,  1858,  1857,  1872,  1871,  1884,  1893,  1899,  1904,
    1914,  1915,  1919,  1922,  1931,  1932,  1936,  1945,  1946,  1951,
    1952,  1956,  1962,  1968,  1971,  1975,  1981,  1990,  1991,  1992,
    1996,  1997,  2001,  2008,  2013,  2022,  2028,  2039,  2042,  2047,
    2052,  2060,  2071,  2074,  2074,  2094,  2095,  2099,  2100,  2101,
    2105,  2108,  2108,  2127,  2130,  2139,  2152,  2152,  2173,  2174,
    2178,  2179,  2183,  2184,  2185,  2189,  2199,  2206,  2216,  2217,
    2221,  2222,  2226,  2232,  2233,  2237,  2238,  2239,  2243,  2248,
    2243,  2258,  2265,  2270,  2279,  2285,  2296,  2297,  2298,  2299,
    2300,  2301,  2302,  2303,  2304,  2305,  2306,  2307,  2308,  2309,
    2310,  2311,  2312,  2313,  2314,  2315,  2316,  2317,  2318,  2319,
    2320,  2321,  2322,  2326,  2327,  2328,  2329,  2330,  2331,  2335,
    2346,  2350,  2357,  2369,  2376,  2385,  2385,  2385,  2398,  2402,
    2409,  2410,  2411,  2412,  2413,  2427,  2433,  2437,  2441,  2446,
    2451,  2456,  2461,  2465,  2469,  2474,  2478,  2482,  2487,  2487,
    2487,  2493,  2500,  2500,  2500,  2505,  2505,  2505,  2511,  2511,
    2511,  2516,  2520,  2520,  2520,  2525,  2525,  2525,  2534,  2538,
    2538,  2538,  2543,  2543,  2543,  2552,  2556,  2556,  2556,  2561,
    2561,  2561,  2570,  2570,  2570,  2576,  2576,  2576,  2585,  2588,
    2599,  2615,  2615,  2615,  2639,  2639,  2659,  2660,  2661,  2662,
    2666,  2673,  2680,  2686,  2695,  2700,  2707,  2708,  2712,  2718,
    2725,  2733,  2740,  2748,  2760,  2763,  2769,  2783,  2789,  2795,
    2800,  2807,  2812,  2822,  2827,  2834,  2846,  2847,  2851,  2854
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"lexer error\"",
  "\"struct\"", "\"class\"", "\"let\"", "\"def\"", "\"while\"", "\"if\"",
  "\"static_if\"", "\"else\"", "\"for\"", "\"recover\"", "\"true\"",
  "\"false\"", "\"new\"", "\"typeinfo\"", "\"type\"", "\"in\"", "\"is\"",
  "\"as\"", "\"elif\"", "\"static_elif\"", "\"array\"", "\"return\"",
  "\"null\"", "\"break\"", "\"try\"", "\"options\"", "\"table\"",
  "\"expect\"", "\"const\"", "\"require\"", "\"operator\"", "\"enum\"",
  "\"finally\"", "\"delete\"", "\"deref\"", "\"typedef\"", "\"with\"",
  "\"aka\"", "\"assume\"", "\"cast\"", "\"override\"", "\"abstract\"",
  "\"upcast\"", "\"iterator\"", "\"var\"", "\"addr\"", "\"continue\"",
  "\"where\"", "\"pass\"", "\"reinterpret\"", "\"module\"", "\"public\"",
  "\"label\"", "\"goto\"", "\"implicit\"", "\"explicit\"", "\"shared\"",
  "\"private\"", "\"smart_ptr\"", "\"unsafe\"", "\"inscope\"", "\"bool\"",
  "\"void\"", "\"string\"", "\"auto\"", "\"int\"", "\"int2\"", "\"int3\"",
  "\"int4\"", "\"uint\"", "\"bitfield\"", "\"uint2\"", "\"uint3\"",
  "\"uint4\"", "\"float\"", "\"float2\"", "\"float3\"", "\"float4\"",
  "\"range\"", "\"urange\"", "\"range64\"", "\"urange64\"", "\"block\"",
  "\"int64\"", "\"uint64\"", "\"double\"", "\"function\"", "\"lambda\"",
  "\"int8\"", "\"uint8\"", "\"int16\"", "\"uint16\"", "\"tuple\"",
  "\"variant\"", "\"generator\"", "\"yield\"", "\"sealed\"", "\"+=\"",
  "\"-=\"", "\"/=\"", "\"*=\"", "\"%=\"", "\"&=\"", "\"|=\"", "\"^=\"",
  "\"<<\"", "\">>\"", "\"++\"", "\"--\"", "\"<=\"", "\"<<=\"", "\">>=\"",
  "\">=\"", "\"==\"", "\"!=\"", "\"->\"", "\"<-\"", "\"??\"", "\"?.\"",
  "\"?[\"", "\"<|\"", "\" <|\"", "\"@ <|\"", "\"@@ <|\"", "\"|>\"",
  "\":=\"", "\"<<<\"", "\">>>\"", "\"<<<=\"", "\">>>=\"", "\"=>\"",
  "\"::\"", "\"&&\"", "\"||\"", "\"^^\"", "\"&&=\"", "\"||=\"", "\"^^=\"",
  "\"..\"", "\"$$\"", "\"$i\"", "\"$v\"", "\"$b\"", "\"$a\"", "\"$t\"",
  "\"$c\"", "\"$f\"", "\"...\"", "\"[[\"", "\"[{\"", "\"{{\"",
  "\"integer constant\"", "\"long integer constant\"",
  "\"unsigned integer constant\"", "\"unsigned long integer constant\"",
  "\"unsigned int8 constant\"", "\"floating point constant\"",
  "\"double constant\"", "\"name\"", "\"keyword\"",
  "\"start of the string\"", "STRING_CHARACTER", "STRING_CHARACTER_ESC",
  "\"end of the string\"", "\"{\"", "\"}\"",
  "\"end of failed eader macro\"", "','", "'='", "'?'", "':'", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'-'", "'+'", "'*'", "'/'", "'%'",
  "UNARY_MINUS", "UNARY_PLUS", "'~'", "'!'", "PRE_INC", "PRE_DEC",
  "POST_INC", "POST_DEC", "DEREF", "'.'", "'['", "']'", "'('", "')'",
  "'$'", "'@'", "';'", "'{'", "'}'", "'#'", "$accept", "program",
  "optional_public_or_private_module", "module_name", "module_declaration",
  "character_sequence", "string_constant", "string_builder_body",
  "string_builder", "reader_character_sequence", "expr_reader", "$@1",
  "options_declaration", "require_declaration", "keyword_or_name",
  "require_module_name", "require_module", "is_public_module",
  "expect_declaration", "expect_list", "expect_error", "expression_label",
  "expression_goto", "elif_or_static_elif", "expression_else",
  "if_or_static_if", "expression_else_one_liner", "$@2",
  "expression_if_one_liner", "expression_if_then_else", "$@3",
  "expression_for_loop", "expression_unsafe", "expression_while_loop",
  "expression_with", "expression_with_alias", "$@4",
  "annotation_argument_value", "annotation_argument_value_list",
  "annotation_argument_name", "annotation_argument",
  "annotation_argument_list", "annotation_declaration_name",
  "annotation_declaration_basic", "annotation_declaration",
  "annotation_list", "optional_annotation_list",
  "optional_function_argument_list", "optional_function_type",
  "function_name", "global_function_declaration",
  "optional_public_or_private_function", "function_declaration_header",
  "function_declaration", "$@5", "expression_block", "expression_any",
  "expressions", "expr_keyword", "expression_keyword", "$@6", "$@7",
  "expr_pipe", "name_in_namespace", "expression_delete",
  "new_type_declaration", "$@8", "$@9", "expr_new", "expression_break",
  "expression_continue", "expression_return_no_pipe", "expression_return",
  "expression_yield_no_pipe", "expression_yield", "expression_try_catch",
  "kwd_let", "optional_in_scope", "expression_let", "expr_cast", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "expr_type_decl", "$@16", "$@17",
  "expr_type_info", "expr_list", "block_or_simple_block",
  "block_or_lambda", "capture_entry", "capture_list",
  "optional_capture_list", "expr_block", "expr_numeric_const",
  "expr_assign", "expr_assign_pipe", "expr_named_call", "expr_method_call",
  "func_addr_name", "func_addr_expr", "$@18", "$@19", "$@20", "$@21",
  "expr_field", "$@22", "$@23", "expr", "$@24", "$@25", "$@26", "$@27",
  "$@28", "$@29", "expr_mtag", "optional_field_annotation",
  "optional_override", "optional_constant",
  "optional_public_or_private_member_variable",
  "structure_variable_declaration", "struct_variable_declaration_list",
  "$@30", "$@31", "$@32", "function_argument_declaration",
  "function_argument_list", "tuple_type", "tuple_type_list",
  "variant_type", "variant_type_list", "copy_or_move",
  "variable_declaration", "copy_or_move_or_clone", "optional_ref",
  "let_variable_name_with_pos_list", "let_variable_declaration",
  "global_variable_declaration_list", "$@33", "optional_shared",
  "optional_public_or_private_variable", "global_let", "$@34", "enum_list",
  "single_alias", "$@35", "alias_list", "alias_declaration",
  "optional_public_or_private_enum", "enum_name", "enum_declaration",
  "optional_structure_parent", "optional_sealed", "structure_name",
  "class_or_struct", "optional_public_or_private_structure",
  "structure_declaration", "$@36", "$@37", "variable_name_with_pos_list",
  "basic_type_declaration", "enum_basic_type_declaration",
  "structure_type_declaration", "auto_type_declaration", "bitfield_bits",
  "bitfield_type_declaration", "$@38", "$@39", "table_type_pair",
  "type_declaration_no_options", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
  "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "$@62",
  "$@63", "type_declaration", "variant_alias_declaration", "$@64", "$@65",
  "bitfield_alias_declaration", "$@66", "make_decl", "make_struct_fields",
  "make_struct_dim", "optional_block", "make_struct_decl", "make_tuple",
  "make_map_tuple", "make_dim", "make_dim_decl", "make_table",
  "make_table_decl", "array_comprehension_where", "array_comprehension", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-984)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-650)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -984,    22,  -984,  -984,    31,   -47,   233,   -96,  -984,   -75,
    -984,  -984,   243,  -984,  -984,  -984,  -984,  -984,   273,  -984,
      94,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
      -5,  -984,    34,    35,    71,  -984,  -984,  -984,   233,  -984,
       5,  -984,  -984,   138,  -984,  -984,  -984,    94,   188,   208,
    -984,  -984,   270,   228,   243,   243,   255,  -984,   484,   125,
    -984,  -984,  -984,   325,   420,   434,  -984,   442,    16,    31,
     227,   -47,   266,   317,  -984,   262,   262,  -984,   320,   319,
    -114,   444,   298,  -984,  -984,   383,  -984,   -65,    31,   243,
     243,   243,   243,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
     399,  -984,  -984,  -984,  -984,  -984,   370,  -984,  -984,  -984,
    -984,  -984,   347,   124,  -984,  -984,  -984,  -984,   482,  -984,
    -984, 11296,  -984,  -984,   365,  -984,  -984,  -984,   407,   384,
    -984,  -984,    -1,  -984,   366,   441,   484, 11482,  -984,  -107,
     495,  -984,   465,  -984,  -984,   458,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,    97,  -984,   448,   451,   452,   455,  -984,
    -984,  -984,   440,  -984,  -984,  -984,  -984,  -984,   464,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
     466,  -984,  -984,  -984,   467,   468,  -984,  -984,  -984,  -984,
     469,   470,   453,  -984,  -984,  -984,  -984,  -984,   110,   474,
    -984,  -984,   454,   481,  -984, 10071,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,   618,   623,  -984,   461,   471,   335,  -984,  -984,   512,
    -984,   473,    31,   155,  -984,  -984,  -984,   124,  -984,  -984,
    -984,  -984,  -984,   515,  -984,   269,   275,   299,  -984,  -984,
    6322,  -984,  -984,  -984,     0,  -984,  -984,  -984,    30,  3523,
    -984,  6956,   -78,   504,  -984,   478,   518,   519,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   524,   491,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,   667,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,   527,   494,  -984,  -984,   -66,
     520,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   490,
     -74,   522,   496,  -984,   465,   126,   503,   660,   316,  -984,
    -984, 11296, 11296, 11296, 11296,   505,   407, 11296,   461, 11296,
     461, 11296,   461, 11394,   481,  -984,  -984,   240,   507,   530,
    -984,   516,   534,   536,   525,   537,   535,  -984,   543,  6322,
    6322,   542,   544,   545,   546,   547,   548,  -984, 10973, 11071,
    6322,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   549,  -984,
    6322,  6322,  6322,   168,  6322,  6322,  6322,  -984,   502,  -984,
    -984,  -984,  -984,     3,  -984,  -984,  -984,  -984,   538,  -984,
    -984,  -984,  -984,  -984,  -984,  6946,  -984,   550,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,   552,  -984,  -984,
    9484,  -984,   110,  -984,  -984, 11296,   -59,  -984,  -984,  -984,
    -984,   572,  -984,  -984,   553,  -984,    52,  -984,   355, 11296,
    -984,  1514,  -984,    10,  -984,   168,  -984,  -984,   155,   555,
    6322,   578,   584, 11296,  -984,   -38,   141,   573,   -85,   356,
     364,  -984,   -87,   367,   520,   369,   520,   375,   520,   -15,
    -984,    47,   474,   134,  -984,   557,  -984,  -984,   168,  -984,
    6322,  -984,  -984,  6322,  -984,  6322, 11296,    38,    38,  6322,
    6322,  6322,  6322,  6322,  6322,   277,  1895,   277,  2070, 10170,
    -984,    60,  -984,   424,    38,    38,   -54,  -984,    38,    38,
    7040,   336,  -984,  2892,   605, 10244, 11104,  6322,  6322,  -984,
    -984,  6322,  6322,  6322,  6322,   596,  6322,   -51,  6322,  6322,
    6322,  6322,  6322,  6322,  6322,  6322,  6322,  3675,  6322,  6322,
    6322,  6322,  6322,  6322,  6322,  6322,  6322,  6322,   107,  6322,
    -984,  3827,  -984,  -984,   474,  -984,  -984,  -984,  6322,   277,
     562,   719,  -984,   226,  -984,   363,   474,  -984,  6322,  -984,
    -984,   277,  2588,  -984,   471,  4002,  6322,   599,  -984,   561,
     608,  4154,   314,  2740,   394,   394,  4306,  -984,   729,   566,
     567,  6322,   760,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,   569,   571,   575,   577,  -984,   580,  -984,  -984,
     709,  -984,   -91,  -984,  1175,    -9,  6322,  -984,  -984,    17,
    -984,  -984,  7134,  -984,   733,   880,  -984,  -984,  -984,  3067,
    -984,  -984, 11296,  -984,  -984,  -984,   615,  -984,   600,  -984,
     603,  -984,   614, 11296,  -984, 11394,  -984,   481, 11296,  4481,
    4656, 11296,  7228, 11296, 11296,  7322, 11296,  7416,     6,  7510,
    7604,  7698,  7792,  7886,  7980,    18,   394,   199,  2245,  4831,
   10250,   613,   -26,   598,   624,   337,    21,  5006,   -26,   331,
    6322,  6322,   593, 11296,  -984,  6322,   437,   632,  -984,   601,
     602,   309,  -984,  -984,   638,  -984,   135, 10504,   -46,   461,
     625,   609,  -984,  -984,   626,   610,  -984,  -984,   143,   143,
     861,   861, 10835, 10835,   612,    24,   616,  -984,  9578,   -21,
     -21,   143,   143, 10730,   346, 10698, 10584, 11198, 10337, 10810,
     488,   607,   861,   861,   170,   170,    24,    24,    24,    66,
    6322,   627,  -984,   288,  6322,   810,  9672,  -984,   185,  8074,
    -984,  6322,   650,  -984,   658,  -984, 11296,  -984,  3067,  -984,
    6416,    27,  3067,  -984,   697,  9965,   813,  6322, 10504,  6416,
     655,  -984,   656,   674, 10504,  -984,  3067,  -984,  9965,   631,
    -984,  -984,  6416,   630,  -984,  -984,  6416,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,   155,   394,  -984,  6322,  6322,  6322,
    6322,  6322,  6322,  6322,  6322,  6322,  6322,  3219,  6322,  6322,
    6322,  6322,  6322,  6322,  3371,  -984,  6731,   243,  -984,   826,
     465,  -984,   672,  -984,  3067,  -984,  6521,  -984,  -984,   474,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,   474,
    -984,  -984,  -984,   396,  -984,   201,   673,  8168,   403,  -984,
     459,   576,  -984,   844,  -984,   605,  -984,  -984,  -984,  -984,
    -984,   639,  6322,  -984,  6322,  6322,    -4,  6322,   675,   638,
     642,   643,  6322,   644,  6322,  6322,   638,   641,   645, 10504,
    -984,  -984,   891, 10417,  -984,   680,  6322,  6322, 11296,   461,
     -35,   136,  5181,  -984,   688,   711,   713,   715,  -984,   230,
     520,  -984,  6322,  -984,  6322,  5341,  6322,  -984,   700,   682,
    -984,  -984,  6322,   683,  -984,  9766,  6322,   687,  -984,  9860,
    -984,  -984,  6322,  -984,  -984,  8262,  -984,   845,   -57,  -984,
    9965,  -984,  6322,  -984,  9965,  6322,  6322,   471, 10504,  -984,
    -984,  -984,  -984,  -984,  9965,  -984,  -984,  -984,   423,  6322,
    -984,  -984, 10504, 10504, 10504, 10504, 10504, 10504, 10504, 10504,
   10504, 10504,   394,   394, 10504, 10504, 10504, 10504, 10504, 10504,
   10504,   394,   394, 10504,  -984,   239,   446,    -3,   684,  -984,
    -984,  6626,  -984,  -984,  -984,  -984,  -984,  -984,   236,  -984,
    -984,  -984,  -984,  -984,   690,  5516,   -20, 10504, 10504,   -26,
     692, 10504,   -16,   613,   693,  -984, 10504,  -984,   624,     1,
     -26,   694,  -984,  -984,  -984,  -984,  8356,  8450,  1041,   520,
     696,   638, 10504,  -984,  -984,  -984,  -984,   -46,   695,   -95,
   11296,  8544, 11296,  8638,  -984,   213,  8732,  -984,  6322, 10618,
    6322,  -984,  8826,  6322,  -984,  -984,  -984,   730,  6322,   114,
    -984,  6322,  1717,   471,  -984,  -984,  6322,  -984,  1317,  -984,
    -984,  -984,  -984,   698,  -984,  -984,    12,  -984,  -984,   446,
    -984,  -984,  -984,  6322,   736,  -984,  6322,  6322,  6322,  5691,
    -984,   214,  6322,   699,   708,  6322,  6322,  -984,  6322,   702,
    -984,  6322,  -984,  -984,  -984,   728,  -984,   245,  -984,  -984,
    5866,  -984,  -984,  1053,  -984,   404,  -984,  -984,  -984, 11296,
    8920,  9014,  -984,  9108,  -984, 10504,   471, 10504,  -984,  -984,
    6416,  -984,   712,  -984,  -984,   877,   277,  9202,   731,   861,
     861,   861,  -984,  9296,  -984,  6818,   718,  -984, 10504, 10504,
    6818,   721,   861,   225,  -984,   720,  6322, 10584,  -984,  -984,
     409,  -984,  -984,  -984,  -984,   423,  2436,  -984, 11482,  -984,
    -984,  -984,  -984,  6322,  -984,   869,   725,  -984,   722,  -984,
    -984,   225,  -984, 10618,  -984,  -984,  -984,  -984,  6018,  6170,
    -984,  -984,  -984,  -984,  -984, 10504,   723, 11482,  9390,  6322,
     726,   732,  -984,  -984,  6322, 10504,  6322, 10504,  -984,   471,
    -984, 10504,  -984,  -984, 10504, 10504,  -984
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,   112,     1,   270,     0,     0,     0,     0,   271,     0,
     664,   661,     0,    14,     3,    10,     9,     8,     0,     7,
     515,     6,    11,     5,     4,    12,    13,    87,    88,    86,
      95,    97,    34,    49,    46,    47,    36,    37,     0,    38,
      44,    35,   526,     0,   531,    19,    18,   515,     0,     0,
     100,   101,     0,   243,     0,     0,   102,   104,   110,     0,
      99,   544,   543,   204,   532,   545,   516,   517,     0,     0,
       0,     0,    39,     0,    45,     0,     0,    42,     0,     0,
       0,    15,     0,   662,   245,     0,   105,     0,     0,     0,
       0,     0,     0,   113,   206,   205,   208,   203,   534,   533,
       0,   547,   546,   548,   519,   518,   521,    93,    94,    91,
      92,    90,     0,     0,    89,    98,    50,    48,    44,    41,
      40,     0,   528,   530,     0,    16,    17,    20,     0,     0,
     244,   109,     0,   106,   107,   108,   111,     0,   535,     0,
     540,   512,   458,    21,    22,     0,    82,    83,    80,    81,
      79,    78,    84,     0,    43,     0,     0,     0,     0,   556,
     576,   557,   590,   558,   562,   563,   564,   565,   582,   569,
     570,   571,   572,   573,   574,   575,   577,   578,   579,   580,
     631,   561,   568,   581,   638,   645,   559,   566,   560,   567,
       0,     0,     0,   589,   600,   603,   601,   602,   658,   527,
     529,   593,     0,     0,   103,     0,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,     0,     0,   119,   114,     0,     0,   523,   541,     0,
     549,   513,     0,     0,    23,    24,    25,     0,    96,   622,
     625,   628,   618,     0,   595,   632,   639,   646,   652,   655,
       0,   608,   613,   607,     0,   621,   617,   610,     0,     0,
     612,     0,     0,     0,   487,     0,   172,   173,   170,   122,
     123,   125,   124,   126,   127,   128,   129,   155,   156,   153,
     154,   146,   157,   158,   147,   144,   145,   171,   166,     0,
     169,   159,   160,   161,   162,   133,   134,   135,   130,   131,
     132,   143,     0,   149,   150,   148,   141,   142,   137,   136,
     138,   139,   140,   121,   120,   165,     0,   151,   152,   458,
     117,   233,   209,   583,   586,   584,   587,   585,   588,     0,
       0,   538,     0,   520,   458,     0,     0,   502,   500,   522,
      85,     0,     0,     0,     0,     0,     0,     0,   114,     0,
     114,     0,   114,     0,     0,   362,   363,     0,     0,     0,
     356,     0,     0,     0,     0,     0,     0,   582,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,     0,     0,
       0,   308,   310,   309,   311,   312,   313,   314,     0,    26,
       0,     0,     0,     0,     0,     0,     0,   295,   296,   360,
     359,   306,   441,   357,   433,   432,   431,   430,   112,   436,
     358,   435,   434,   403,   364,     0,   365,     0,   361,   666,
     667,   668,   669,   615,   616,   609,   611,     0,   614,   605,
       0,   660,   659,   594,   665,     0,     0,   174,   175,   168,
     164,   176,   167,   163,     0,   115,     0,   480,     0,     0,
     207,     0,   523,     0,   536,     0,   542,   469,     0,     0,
       0,     0,     0,     0,   501,     0,     0,     0,   598,     0,
       0,   591,     0,     0,   117,     0,   117,     0,   117,   243,
     484,     0,   482,     0,   248,   252,   251,   255,     0,   284,
       0,   275,   278,     0,   281,     0,     0,   392,   393,     0,
       0,     0,     0,     0,     0,     0,   676,     0,     0,   688,
     693,     0,   237,     0,   369,   368,   408,    32,   367,   366,
       0,   297,   439,     0,   304,     0,     0,     0,     0,   394,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   353,     0,
     592,     0,   606,   604,   486,   663,   488,   177,     0,     0,
       0,   551,   477,   491,   116,   458,   118,   235,     0,    59,
      60,     0,   258,   256,     0,     0,     0,     0,   257,     0,
       0,     0,     0,     0,     0,     0,     0,   212,   210,     0,
       0,     0,     0,   228,   223,   220,   219,   221,   222,   234,
     214,   213,     0,    67,    68,    65,   226,    66,   227,   229,
     273,   218,     0,   215,   315,     0,     0,   524,   539,   470,
     514,   459,     0,   504,   505,     0,   498,   499,   497,     0,
     623,   626,     0,   629,   619,   596,     0,   633,     0,   640,
       0,   647,     0,     0,   653,     0,   656,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,     0,     0,
     684,   674,   676,     0,   689,     0,     0,     0,   676,     0,
       0,     0,     0,     0,    29,     0,    27,     0,   396,     0,
       0,   345,   342,   344,     0,   404,     0,   290,     0,   114,
       0,     0,   419,   418,     0,     0,   420,   424,   370,   371,
     383,   384,   381,   382,     0,   413,     0,   401,     0,   437,
     438,   372,   373,   388,   389,   390,   391,     0,     0,   386,
     387,   385,   379,   380,   375,   374,   376,   377,   378,     0,
       0,     0,   351,     0,     0,     0,     0,   406,     0,     0,
     478,     0,     0,   490,     0,   489,     0,   492,     0,   481,
       0,     0,     0,   262,     0,   259,     0,     0,   246,     0,
       0,   232,     0,     0,    53,    73,     0,   267,   264,   296,
     241,   242,     0,     0,   230,   231,     0,    70,   217,   224,
     225,   261,   266,   272,     0,     0,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   537,     0,     0,   550,     0,
     458,   503,     0,   507,     0,   511,   315,   624,   627,   599,
     630,   620,   597,   634,   636,   641,   643,   648,   650,   483,
     654,   485,   657,     0,   253,     0,     0,     0,     0,   409,
       0,     0,   410,     0,   440,   304,   442,   443,   444,   445,
     446,     0,     0,   677,     0,     0,   676,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   687,
     694,   695,     0,     0,    30,    33,     0,     0,     0,   114,
       0,     0,     0,   405,     0,     0,     0,     0,   302,     0,
     117,   415,     0,   421,     0,     0,     0,   399,     0,     0,
     425,   429,     0,     0,   402,     0,     0,     0,   352,     0,
     354,   397,     0,   407,   479,     0,   553,   554,   493,   496,
     495,    74,     0,   263,   260,     0,     0,     0,   247,    75,
      76,    51,    52,   268,   265,   297,   236,   233,    56,     0,
     274,   240,   325,   326,   328,   327,   329,   319,   320,   321,
     330,   331,     0,     0,   317,   318,   332,   333,   322,   323,
     324,     0,     0,   316,   525,     0,   465,   460,     0,   506,
     509,   315,   510,   637,   644,   651,   249,   254,     0,   287,
     285,   276,   279,   282,     0,     0,     0,   671,   670,   676,
       0,   685,     0,   675,     0,   679,   686,   691,   690,     0,
     676,     0,   692,   238,    28,    31,     0,     0,     0,   117,
       0,     0,   291,   300,   301,   299,   298,     0,     0,     0,
       0,     0,     0,     0,   340,     0,     0,   426,     0,   414,
       0,   400,     0,     0,   398,   355,   552,     0,     0,     0,
     269,     0,     0,     0,    54,    55,     0,    69,    61,   336,
     337,   334,   335,   113,   466,   467,   460,   461,   462,   465,
     471,   508,   250,     0,     0,   286,     0,     0,     0,     0,
     448,     0,     0,     0,     0,     0,     0,   678,     0,     0,
     682,     0,   343,   457,   346,     0,   338,     0,   303,   305,
       0,   292,   307,     0,   456,     0,   454,   341,   451,     0,
       0,     0,   450,     0,   555,   494,     0,    77,   211,    57,
       0,    62,     0,   476,   472,   463,     0,     0,     0,   277,
     280,   283,   411,     0,   449,   696,     0,   680,   673,   672,
     696,     0,   239,     0,   349,     0,     0,   293,   416,   422,
       0,   455,   453,   452,    72,    56,     0,    71,     0,   464,
     474,   468,   288,     0,   412,     0,     0,   681,     0,   683,
     347,     0,   339,   294,   417,   423,   427,    58,   258,     0,
      63,    67,    68,    65,    66,    64,     0,     0,     0,     0,
       0,     0,   350,   428,     0,   259,     0,   264,   473,     0,
     289,   697,   698,   699,   260,   265,   475
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -984,  -984,  -984,  -984,  -984,   406,   858,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,   539,   889,  -984,   812,  -984,  -984,
     860,  -984,  -984,  -984,  -243,  -984,  -984,  -984,  -241,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,   686,  -984,  -984,
     868,   -55,  -984,  -984,   220,   103,  -399,  -345,  -476,  -984,
    -984,  -984,  -983,  -984,  -984,  -221,  -984,   -25,  -984,  -984,
    -984,  -984,  -574,   -12,  -984,  -984,  -984,  -984,  -984,  -233,
    -232,  -231,  -984,  -230,  -984,  -984,   946,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -564,  -984,  -984,   -99,  -984,    77,  -569,  -984,  -459,  -984,
    -984,  -984,  -942,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,   305,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -141,
    -133,  -984,  -134,  -984,  -984,  -984,  -984,  -984,   371,  -984,
     292,  -984,  -423,   594,  -580,  -573,   315,  -984,  -984,  -452,
    -984,  -984,   912,  -984,  -984,  -984,   500,    50,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -463,  -116,  -984,   597,  -984,   611,  -984,  -984,
    -984,  -984,  -267,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,  -984,
    -984,  -984,  -984,  -984,  -984,  -984,  -984,  -101,  -984,  -984,
    -984,  -984,  -984,   619,  -705,  -507,  -671,  -984,    69,   265,
     450,  -984,  -984,  -984,  -191,  -984
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,   127,    47,    14,   145,   151,   523,   409,   905,
     410,   707,    15,    16,    39,    40,    41,    77,    17,    34,
      35,   609,   610,  1076,  1077,   611,  1142,  1176,   612,   613,
     969,   614,   615,   616,   617,   618,  1071,   152,   153,    30,
      31,    32,    56,    57,    58,    59,    18,   330,   460,   234,
      19,    96,   235,    97,   137,   411,   619,   461,   620,   412,
     703,  1111,   621,   413,   622,   495,   668,  1092,   414,   623,
     624,   625,   626,   627,   628,   629,   630,   814,   631,   415,
     673,  1096,   674,  1097,   676,  1098,   416,   671,  1095,   417,
     716,  1122,   418,   918,   919,   719,   419,   420,   784,   633,
     421,   422,   713,   423,   908,  1163,   909,  1191,   424,   765,
    1065,   717,  1050,  1194,  1052,  1195,  1129,  1213,   426,   456,
    1089,  1180,  1086,   998,   639,   840,  1178,  1207,   457,   458,
     490,   491,   274,   275,   885,   582,   649,   475,   348,   349,
     241,   344,    67,   106,    21,   142,   340,    44,    78,    80,
      22,   100,   139,    23,   466,   239,   240,    65,   103,    24,
     140,   342,   583,   427,   339,   195,   196,   202,   197,   356,
     852,   477,   198,   354,   851,   351,   847,   352,   848,   353,
     850,   357,   853,   358,  1003,   359,   855,   360,  1004,   361,
     857,   362,  1005,   363,   860,   364,   862,   492,    25,    49,
     129,    26,    48,   428,   691,   692,   693,   429,   694,   520,
     695,   430,   521,   431,  1186,   432
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,   243,   632,   778,   442,   194,   770,   768,   658,   911,
     660,   698,   662,   484,   332,   486,   640,   488,   783,   534,
     199,   890,     2,   576,  -112,   686,    73,   897,     3,   797,
     107,   108,   433,   132,   815,   800,   801,   882,   261,  1120,
     895,  1087,    60,    60,   535,   536,   952,   686,    42,    27,
      28,     4,   685,     5,   696,     6,  1087,  1144,   535,   536,
      74,     7,   435,   773,   262,   263,    42,   236,   547,   548,
       8,    89,    90,    91,   914,   845,     9,    60,    60,    60,
      60,   454,   646,   915,   443,   773,   242,    45,   463,   123,
     271,   647,   655,    79,   884,   237,    10,  1088,   545,   736,
     579,   547,   548,   273,   773,   865,    43,   331,    33,   193,
     816,   737,  1088,  1105,   656,   775,   652,   883,   271,    11,
      85,   516,   518,   264,    46,   444,   916,   265,   781,   464,
     124,   917,   455,   131,   648,   539,   540,   775,   146,   147,
     568,   569,   261,   545,   575,   546,   547,   548,   549,   539,
     540,   942,   550,   463,    66,   194,   775,   545,   910,   663,
     547,   548,   549,   535,   536,   532,   550,    68,   262,   263,
      69,   109,   942,   568,   569,   889,   110,   434,   111,   266,
     112,  1102,   636,   267,  1023,   875,   268,   345,    75,   774,
     535,   536,   774,    29,   835,  1206,   580,   204,   774,    76,
     533,   269,  1108,   468,   949,    69,   645,   436,   953,    70,
     270,   637,   837,   113,   581,  1020,   933,    12,   568,   569,
     838,  1190,   963,    13,  1219,   437,   664,   264,   934,   759,
     760,   265,   568,   569,   438,   194,   194,   194,   194,   678,
     839,   194,    71,   194,   576,   194,   971,   194,   665,  1212,
     476,   478,   479,   480,   539,   540,   483,   761,   485,   193,
     487,   701,   545,   702,   546,   547,   548,   549,   247,   762,
    1000,   550,   194,   194,    86,    87,    50,    61,    62,   148,
      63,   539,   540,   266,   149,   942,   150,   267,   112,   545,
     268,   546,   547,   548,   549,   248,    92,    69,   550,   346,
      42,   763,   764,    52,    51,   269,   912,   888,    64,   133,
     134,   135,   136,   666,   270,  1136,   271,   347,  1016,   773,
     650,    93,   469,   563,   564,   565,   566,   567,   884,   194,
      53,  1029,  1040,   913,    85,   667,  1117,   568,   569,   193,
     193,   193,   193,   194,   574,   193,   773,   193,  1103,   193,
      82,   193,   565,   566,   567,   193,   942,   194,   586,  1109,
      52,  1055,   970,    85,   568,   569,   535,   536,  1068,   709,
      83,   775,   942,   786,   920,    52,   193,   193,    52,  1019,
      94,   795,   116,   943,   942,   942,    95,    53,  1069,  1030,
     194,   527,   388,   389,   390,    36,    37,   774,   775,  1007,
     776,  1047,    53,   777,   333,    53,   870,   871,   334,   873,
      92,  1127,  1154,  1079,  1080,  1093,   888,    38,   494,   723,
     727,   580,  1081,  1082,    36,    37,  1048,   335,   336,   337,
     338,    54,    84,   193,  1073,  1083,   902,  1094,   937,   581,
      55,  1165,  1106,  -635,  1049,  1074,  1075,   193,  -635,  -642,
     938,  1101,    88,   638,  -642,   537,   538,   539,   540,   541,
      76,   193,   542,   543,   544,   545,  -635,   546,   547,   548,
     549,    52,  -642,  -649,   550,    98,   551,   552,  -649,   118,
     709,    99,   553,  -348,   555,   710,   670,   472,  -348,   101,
     473,   261,   121,   474,   193,   102,  -649,   104,    53,   125,
     128,  1084,    89,   105,    91,   126,  -348,  1085,   535,   536,
     454,   505,   143,   144,   711,   242,   331,   262,   263,   712,
     122,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   271,   894,   893,   898,   653,   194,    74,   894,   271,
     568,   569,   271,   654,   271,   130,   657,   194,   659,   194,
     271,   849,   194,   584,   661,   194,   585,   194,   194,   951,
     194,   138,   859,  1115,  1039,   425,   200,   863,   959,   201,
     868,   271,   141,  1181,   440,  1006,   264,    89,   271,   271,
     265,   966,  1010,  1169,   271,   968,   203,   194,  1196,   143,
     144,   704,   705,   407,   799,   238,   331,   537,   538,   539,
     540,   541,   244,   245,   542,   543,   544,   545,   261,   546,
     547,   548,   549,   632,   119,   120,   550,   242,   551,   552,
      89,    90,    91,   244,   245,   246,   249,   535,   536,   250,
     251,   931,   266,   252,   262,   263,   267,   253,  1011,   268,
     193,  1038,   254,   273,   255,   256,   257,   258,   259,   271,
     260,   193,   327,   193,   269,   272,   193,   328,   329,   193,
     194,   193,   193,   270,   193,   560,   561,   562,   563,   564,
     565,   566,   567,   331,   341,   948,   343,   355,   445,   446,
     447,   448,   568,   569,   507,   508,   449,   450,   451,   452,
     453,   193,   462,   264,   459,   519,   465,   265,   467,   997,
     470,   471,   531,   481,   498,   524,   525,   526,   499,   528,
     529,   530,   501,   500,   502,   504,   537,   538,   539,   540,
     541,   506,   503,   542,   543,   544,   545,   522,   546,   547,
     548,   549,   505,    12,   577,   550,  1070,   551,   552,   509,
     643,   510,   511,   512,   513,   514,   644,   571,   572,   266,
     578,   641,   651,   267,   669,  1012,   268,   718,   734,   771,
     772,   790,   791,   792,   193,   803,   634,   804,   805,   807,
     808,   269,   809,   813,   842,   642,   810,   443,   811,   854,
     270,   812,   856,  1123,   888,   561,   562,   563,   564,   565,
     566,   567,   194,   858,   891,   892,   901,   904,   906,   907,
     910,   568,   569,   921,   923,   672,   922,   924,   675,   925,
     677,   940,   946,   926,   679,   680,   681,   682,   683,   684,
     947,   690,   815,   690,   936,    60,   957,   960,  1121,   962,
     961,   965,   967,   996,   999,  1008,  1015,  1022,  1024,  1025,
    1027,  1032,   728,   729,  1031,  1035,   730,   731,   732,   733,
    1043,   735,  1139,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   758,  1044,   766,  1045,   261,  1046,  1057,  1058,
    1060,   535,   536,   769,  1063,  1090,  1067,  1099,  1104,  1107,
    1110,  1119,  1134,   780,  1116,  1156,   193,   785,  1148,  1143,
     788,   789,   262,   263,  1157,  1161,   794,  1164,   798,  1179,
    1183,   802,   261,  1177,  1187,  1174,   806,  1189,  1192,  1175,
    1209,  1210,  1222,   261,  1218,  1211,   114,    72,  1223,   706,
     154,   117,  1197,   350,   194,  1200,   194,   115,   262,   263,
     995,   836,  1072,  1201,  1202,  1203,  1204,    20,  1118,   262,
     263,  1125,  1014,  1145,   846,  1146,   779,   861,   493,    81,
     844,   264,   635,  1028,   496,   265,   900,   482,   699,  1188,
     537,   538,   539,   540,     0,   867,     0,     0,     0,     0,
     545,     0,   546,   547,   548,   549,   497,     0,     0,   550,
       0,   551,   552,   524,   530,     0,     0,   264,  1226,     0,
     646,   265,   530,     0,     0,   899,   519,     0,   264,   647,
     903,     0,   265,   194,     0,     0,     0,   266,     0,     0,
       0,   267,     0,  1013,   268,     0,     0,     0,  1170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   269,
     193,   563,   564,   565,   566,   567,     0,     0,   270,     0,
       0,     0,   648,   266,     0,   568,   569,   267,     0,     0,
     268,     0,     0,     0,   266,   935,     0,     0,   267,   939,
    1033,   268,     0,   261,     0,   269,   945,     0,     0,     0,
       0,   843,     0,   950,   270,   261,   269,   954,     0,     0,
       0,     0,   958,     0,     0,   270,     0,     0,     0,   262,
     263,   964,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   262,   263,     0,     0,     0,     0,   193,     0,     0,
       0,     0,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   984,   985,   986,   987,   988,   989,   990,   993,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1001,
       0,   712,     0,     0,     0,     0,     0,     0,   264,     0,
       0,     0,   265,     0,     0,     0,     0,     0,     0,     0,
     264,     0,     0,     0,   265,     0,     0,     0,     0,   712,
       0,     0,     0,     0,   -64,     0,     0,     0,     0,  1017,
    1018,     0,  1021,     0,     0,   535,   536,  1026,     0,   690,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1036,  1037,     0,   266,     0,     0,  1042,   267,     0,
    1114,   268,     0,     0,     0,     0,   266,  1051,     0,  1053,
     267,  1056,  1168,   268,     0,     0,   269,  1059,     0,     0,
       0,  1062,     0,     0,     0,   270,     0,  1042,   269,     0,
       0,     0,     0,     0,     0,     0,     0,   270,     0,     0,
     984,   993,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1078,     0,   817,   818,   819,   820,
     821,   822,   823,   824,   537,   538,   539,   540,   541,   825,
     826,   542,   543,   544,   545,   827,   546,   547,   548,   549,
       0,     0,     0,   550,   828,   551,   552,   829,   830,     0,
       0,   553,   554,   555,   831,   832,   833,   556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1141,     0,
       0,     0,     0,     0,     0,     0,     0,   535,   536,     0,
       0,     0,     0,     0,     0,     0,     0,   834,   557,     0,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
       0,     0,     0,  1130,     0,  1131,     0,     0,  1133,   568,
     569,     0,     0,  1135,     0,     0,  1137,   634,     0,     0,
       0,  1140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1147,     0,
       0,  1149,  1150,  1151,  1153,     0,     0,  1155,     0,     0,
    1158,  1159,     0,  1160,     0,     0,  1162,     0,     0,     0,
       0,     0,     0,     0,     0,  1167,   537,   538,   539,   540,
     541,     0,     0,   542,   543,   544,   545,     0,   546,   547,
     548,   549,     0,     0,     0,   550,     0,   551,   552,     0,
       0,     0,     0,   553,   554,   555,     0,     0,     0,   556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1193,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1205,     0,     0,     0,     0,     0,     0,  1208,     0,
     557,     0,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,     0,  1215,  1217,     0,     0,     0,     0,     0,
       0,   568,   569,     0,  1221,   587,     0,     0,     0,  1224,
       3,  1225,   588,   589,   590,     0,   591,     0,   365,   366,
     367,   368,   369,     0,     0,     0,     0,     0,     0,   592,
     370,   593,   594,     0,     0,     0,     0,     0,     0,     0,
       0,   595,   371,     0,   596,     0,   597,   372,     0,     0,
     373,     0,     8,   374,   598,     0,   599,   375,     0,     0,
     600,   601,     0,     0,     0,     0,     0,   602,     0,   159,
     160,   161,     0,   163,   164,   165,   166,   167,   377,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,   181,   182,   183,     0,     0,   186,   187,   188,   189,
       0,     0,   378,   603,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   379,   380,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     604,   605,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,   381,   382,   383,
     384,   385,     0,   386,     0,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,    53,   606,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   400,   401,   402,     0,   403,     0,
       0,   404,   405,     0,     0,     0,     0,     0,     0,     0,
       0,   406,     0,   407,   408,   607,   331,   608,   587,     0,
       0,     0,     0,     3,     0,   588,   589,   590,     0,   591,
       0,   365,   366,   367,   368,   369,     0,     0,     0,     0,
       0,     0,   592,   370,   593,   594,     0,     0,     0,     0,
       0,     0,     0,     0,   595,   371,     0,   596,     0,   597,
     372,     0,     0,   373,     0,     8,   374,   598,     0,   599,
     375,     0,     0,   600,   601,     0,     0,     0,     0,     0,
     602,     0,   159,   160,   161,     0,   163,   164,   165,   166,
     167,   377,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,   181,   182,   183,     0,     0,   186,
     187,   188,   189,     0,     0,   378,   603,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   379,   380,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   604,   605,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
     381,   382,   383,   384,   385,     0,   386,     0,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,    53,
     606,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   400,   401,   402,
       0,   403,     0,     0,   404,   405,     0,     0,     0,   365,
     366,   367,   368,   369,   406,     0,   407,   408,   607,   331,
    1138,   370,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,   372,     0,
       0,   373,     0,     0,   374,     0,   686,     0,   375,     0,
       0,     0,     0,   262,   263,     0,     0,     0,   376,     0,
     159,   160,   161,     0,   163,   164,   165,   166,   167,   377,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,     0,   181,   182,   183,     0,     0,   186,   187,   188,
     189,     0,     0,   378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   379,   380,     0,     0,
       0,     0,   264,     0,     0,     0,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,   381,   382,
     383,   384,   385,     0,   386,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   687,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,   266,     0,
       0,     0,   267,     0,     0,   688,   401,   402,     0,   403,
       0,     0,   404,   405,   365,   366,   367,   368,   369,     0,
     269,     0,   689,     0,   407,   408,   370,   331,     0,   270,
       0,     0,   261,     0,     0,     0,     0,     0,   371,     0,
       0,     0,     0,   372,     0,     0,   373,     0,     0,   374,
       0,     0,     0,   375,     0,     0,     0,     0,   262,   263,
       0,     0,     0,   376,     0,   159,   160,   161,     0,   163,
     164,   165,   166,   167,   377,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,   181,   182,   183,
       0,     0,   186,   187,   188,   189,     0,     0,   378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   379,   380,     0,     0,     0,     0,   264,     0,     0,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,   381,   382,   383,   384,   385,     0,   386,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   687,   398,   399,     0,     0,     0,     0,     0,
       0,     0,     0,   266,     0,     0,     0,   267,     0,     0,
     688,   401,   402,     0,   403,     0,     0,   404,   405,   365,
     366,   367,   368,   369,     0,   269,     0,   697,     0,   407,
     408,   370,   331,     0,   270,     0,     0,   435,     0,     0,
       0,     0,     0,   371,     0,     0,     0,     0,   372,     0,
       0,   373,     0,     0,   374,     0,     0,     0,   375,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   376,     0,
     159,   160,   161,     0,   163,   164,   165,   166,   167,   377,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,     0,   181,   182,   183,     0,     0,   186,   187,   188,
     189,     0,     0,   378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   379,   380,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,   381,   382,
     383,   384,   385,     0,   386,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,    53,   398,   399,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   436,     0,     0,   400,   401,   402,     0,   403,
       0,     0,   404,   405,     0,     0,     0,     0,     0,     0,
     437,     0,   406,     0,   407,   408,     0,   331,     0,   438,
     365,   366,   367,   368,   369,     0,     0,     0,     0,     0,
       0,  1198,   370,   593,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,     0,     0,   372,
       0,     0,   373,     0,     0,   374,   598,     0,     0,   375,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
       0,   159,   160,   161,     0,   163,   164,   165,   166,   167,
     377,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   181,   182,   183,     0,     0,   186,   187,
     188,   189,     0,     0,   378,  1199,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,   380,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,   381,
     382,   383,   384,   385,     0,   386,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,    53,   398,
     399,     0,   365,   366,   367,   368,   369,     0,     0,     0,
       0,     0,     0,     0,   370,     0,   400,   401,   402,     0,
     403,     0,     0,   404,   405,     0,   371,     0,     0,     0,
       0,   372,     0,   406,   373,   407,   408,   374,   331,     0,
       0,   375,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   376,     0,   159,   160,   161,     0,   163,   164,   165,
     166,   167,   377,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,   181,   182,   183,     0,     0,
     186,   187,   188,   189,     0,     0,   378,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   379,
     380,     0,     0,     0,     0,     0,     0,     0,   782,     0,
       0,     0,     0,     0,   604,   605,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,   381,   382,   383,   384,   385,     0,   386,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
      53,   398,   399,     0,   365,   366,   367,   368,   369,     0,
       0,     0,     0,     0,     0,     0,   370,     0,   400,   401,
     402,     0,   403,     0,     0,   404,   405,     0,   371,     0,
       0,     0,     0,   372,     0,   406,   373,   407,   408,   374,
     331,     0,     0,   375,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   376,     0,   159,   160,   161,     0,   163,
     164,   165,   166,   167,   377,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,   181,   182,   183,
       0,     0,   186,   187,   188,   189,     0,     0,   378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   379,   380,     0,     0,     0,     0,     0,     0,     0,
     796,     0,     0,     0,     0,     0,   604,   605,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,   381,   382,   383,   384,   385,     0,   386,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,    53,   398,   399,     0,   365,   366,   367,   368,
     369,     0,     0,     0,     0,     0,     0,     0,   370,     0,
     400,   401,   402,     0,   403,     0,     0,   404,   405,     0,
     371,     0,     0,     0,     0,   372,     0,   406,   373,   407,
     408,   374,   331,     0,     0,   375,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   376,     0,   159,   160,   161,
       0,   163,   164,   165,   166,   167,   377,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,   181,
     182,   183,     0,     0,   186,   187,   188,   189,     0,     0,
     378,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   379,   380,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,   381,   382,   383,   384,   385,
       0,   386,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,    53,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   400,   401,   402,     0,   403,     0,     0,   404,
     405,   365,   366,   367,   368,   369,     0,   714,     0,   406,
     715,   407,   408,   370,   331,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   371,     0,     0,     0,     0,
     372,     0,     0,   373,     0,     0,   374,     0,     0,     0,
     375,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     376,     0,   159,   160,   161,     0,   163,   164,   165,   166,
     167,   377,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,   181,   182,   183,     0,     0,   186,
     187,   188,   189,     0,     0,   378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   379,   380,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   604,   605,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
     381,   382,   383,   384,   385,     0,   386,     0,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,    53,
     398,   399,     0,   365,   366,   367,   368,   369,     0,     0,
       0,     0,     0,     0,     0,   370,     0,   400,   401,   402,
       0,   403,     0,     0,   404,   405,     0,   371,     0,     0,
       0,     0,   372,     0,   406,   373,   407,   408,   374,   331,
       0,     0,   375,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   376,     0,   159,   160,   161,     0,   163,   164,
     165,   166,   167,   377,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,     0,   181,   182,   183,     0,
       0,   186,   187,   188,   189,     0,     0,   378,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     379,   380,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   982,   983,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,   381,   382,   383,   384,   385,     0,   386,     0,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,    53,   398,   399,     0,   365,   366,   367,   368,   369,
       0,     0,     0,     0,     0,     0,     0,   370,     0,   400,
     401,   402,     0,   403,     0,     0,   404,   405,     0,   371,
       0,     0,     0,     0,   372,     0,   406,   373,   407,   408,
     374,   331,     0,     0,   375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,   159,   160,   161,     0,
     163,   164,   165,   166,   167,   377,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,   181,   182,
     183,     0,     0,   186,   187,   188,   189,     0,     0,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   991,   992,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,   381,   382,   383,   384,   385,     0,
     386,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,    53,   398,   399,     0,   365,   366,   367,
     368,   369,     0,     0,     0,     0,     0,     0,     0,   370,
       0,   400,   401,   402,     0,   403,     0,     0,   404,   405,
       0,   371,     0,     0,     0,     0,   372,     0,   406,   373,
     407,   408,   374,   331,     0,     0,   375,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   376,     0,   159,   160,
     161,     0,   163,   164,   165,   166,   167,   377,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,     0,
     181,   182,   183,     0,     0,   186,   187,   188,   189,     0,
       0,   378,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   379,   380,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,   381,   382,   383,   384,
     385,     0,   386,     0,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,    53,   398,   399,     0,   365,
     366,   367,   368,   369,     0,     0,   747,     0,     0,     0,
       0,   370,     0,   400,   401,   402,     0,   403,     0,     0,
     404,   405,     0,   371,     0,     0,     0,     0,   372,   439,
     406,   373,   407,   408,   374,   331,     0,     0,   375,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   376,     0,
     159,   160,   161,     0,   163,   164,   165,   166,   167,   377,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,     0,   181,   182,   183,     0,     0,   186,   187,   188,
     189,     0,     0,   378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   379,   380,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,   381,   382,
     383,   384,   385,     0,   386,     0,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,    53,   398,   399,
       0,   365,   366,   367,   368,   369,     0,     0,     0,     0,
       0,     0,     0,   370,     0,   400,   401,   402,     0,   403,
       0,     0,   404,   405,     0,   371,     0,     0,     0,     0,
     372,     0,   406,   373,   407,   408,   374,   331,     0,     0,
     375,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     376,     0,   159,   160,   161,     0,   163,   164,   165,   166,
     167,   377,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,   181,   182,   183,     0,     0,   186,
     187,   188,   189,     0,     0,   378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   379,   380,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
     381,   382,   383,   384,   385,     0,   386,     0,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,    53,
     398,   399,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   400,   401,   402,
       0,   403,     0,     0,   404,   405,   365,   366,   367,   368,
     369,     0,     0,     0,   406,   767,   407,   408,   370,   331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     371,     0,     0,     0,     0,   372,     0,     0,   373,     0,
       0,   374,     0,     0,     0,   375,     0,     0,     0,     0,
       0,   787,     0,     0,     0,   376,     0,   159,   160,   161,
       0,   163,   164,   165,   166,   167,   377,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,   181,
     182,   183,     0,     0,   186,   187,   188,   189,     0,     0,
     378,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   379,   380,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,   381,   382,   383,   384,   385,
       0,   386,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,    53,   398,   399,     0,   365,   366,
     367,   368,   369,     0,     0,     0,     0,     0,     0,     0,
     370,     0,   400,   401,   402,     0,   403,     0,     0,   404,
     405,     0,   371,     0,     0,     0,     0,   372,     0,   406,
     373,   407,   408,   374,   331,     0,     0,   375,     0,     0,
     793,     0,     0,     0,     0,     0,     0,   376,     0,   159,
     160,   161,     0,   163,   164,   165,   166,   167,   377,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,   181,   182,   183,     0,     0,   186,   187,   188,   189,
       0,     0,   378,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   379,   380,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,   381,   382,   383,
     384,   385,     0,   386,     0,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,    53,   398,   399,     0,
     365,   366,   367,   368,   369,     0,     0,     0,     0,     0,
       0,     0,   370,     0,   400,   401,   402,     0,   403,     0,
       0,   404,   405,     0,   371,     0,     0,     0,     0,   372,
       0,   406,   373,   407,   408,   374,   331,     0,     0,   375,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
       0,   159,   160,   161,     0,   163,   164,   165,   166,   167,
     377,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   181,   182,   183,     0,     0,   186,   187,
     188,   189,     0,     0,   378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,   380,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,   381,
     382,   383,   384,   385,     0,   386,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,    53,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   522,     0,   400,   401,   402,     0,
     403,     0,     0,   404,   405,   365,   366,   367,   368,   369,
       0,     0,     0,   406,     0,   407,   408,   370,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
       0,     0,     0,     0,   372,     0,     0,   373,     0,     0,
     374,     0,     0,     0,   375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,   159,   160,   161,     0,
     163,   164,   165,   166,   167,   377,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,   181,   182,
     183,     0,     0,   186,   187,   188,   189,     0,     0,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,   381,   382,   383,   384,   385,     0,
     386,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,    53,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,   402,     0,   403,     0,     0,   404,   405,
     365,   366,   367,   368,   369,     0,     0,     0,   406,   864,
     407,   408,   370,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,     0,     0,   372,
       0,     0,   373,     0,     0,   374,     0,     0,     0,   375,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
       0,   159,   160,   161,     0,   163,   164,   165,   166,   167,
     377,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   181,   182,   183,     0,     0,   186,   187,
     188,   189,     0,     0,   378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,   380,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,   381,
     382,   383,   384,   385,     0,   386,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,    53,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   866,     0,   400,   401,   402,     0,
     403,     0,     0,   404,   405,   365,   366,   367,   368,   369,
       0,     0,     0,   406,     0,   407,   408,   370,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
       0,     0,     0,     0,   372,     0,     0,   373,     0,     0,
     374,     0,     0,     0,   375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,   159,   160,   161,     0,
     163,   164,   165,   166,   167,   377,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,   181,   182,
     183,     0,     0,   186,   187,   188,   189,     0,     0,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,   381,   382,   383,   384,   385,     0,
     386,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,    53,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,   402,     0,   403,     0,     0,   404,   405,
     365,   366,   367,   368,   369,     0,     0,     0,   406,   886,
     407,   408,   370,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,     0,     0,   372,
       0,     0,   373,     0,     0,   374,     0,     0,     0,   375,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
       0,   159,   160,   161,     0,   163,   164,   165,   166,   167,
     377,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   181,   182,   183,     0,     0,   186,   187,
     188,   189,     0,     0,   378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,   380,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,   381,
     382,   383,   384,   385,     0,   386,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,    53,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   400,   401,   402,     0,
     403,     0,     0,   404,   405,   365,   366,   367,   368,   369,
       0,     0,     0,   406,   896,   407,   408,   370,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
       0,     0,     0,     0,   372,     0,     0,   373,     0,     0,
     374,     0,     0,     0,   375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,   159,   160,   161,     0,
     163,   164,   165,   166,   167,   377,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,   181,   182,
     183,     0,     0,   186,   187,   188,   189,     0,     0,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,   381,   382,   383,   384,   385,     0,
     386,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,    53,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   365,   366,   367,   368,   369,
       0,   400,   401,   402,     0,   403,     0,   370,   404,   405,
       0,     0,     0,     0,     0,     0,  1041,     0,   406,   371,
     407,   408,     0,   331,   372,     0,     0,   373,     0,     0,
     374,     0,     0,     0,   375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,   159,   160,   161,     0,
     163,   164,   165,   166,   167,   377,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,   181,   182,
     183,     0,     0,   186,   187,   188,   189,     0,     0,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,   381,   382,   383,   384,   385,     0,
     386,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,    53,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,   402,     0,   403,     0,     0,   404,   405,
     365,   366,   367,   368,   369,     0,     0,     0,   406,  1054,
     407,   408,   370,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,     0,     0,   372,
       0,     0,   373,     0,     0,   374,     0,     0,     0,   375,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
       0,   159,   160,   161,     0,   163,   164,   165,   166,   167,
     377,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   181,   182,   183,     0,     0,   186,   187,
     188,   189,     0,     0,   378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,   380,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,   381,
     382,   383,   384,   385,     0,   386,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,    53,   398,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   400,   401,   402,     0,
     403,     0,     0,   404,   405,   365,   366,   367,   368,   369,
       0,     0,     0,   406,  1100,   407,   408,   370,   331,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
       0,     0,     0,     0,   372,     0,     0,   373,     0,     0,
     374,     0,     0,     0,   375,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,   159,   160,   161,     0,
     163,   164,   165,   166,   167,   377,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,   181,   182,
     183,     0,     0,   186,   187,   188,   189,     0,     0,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   379,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,   381,   382,   383,   384,   385,     0,
     386,     0,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,    53,   398,   399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   401,   402,     0,   403,     0,     0,   404,   405,
     365,   366,   367,   368,   369,     0,     0,     0,   406,  1152,
     407,   408,   370,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,     0,     0,   372,
       0,     0,   373,     0,     0,   374,     0,     0,     0,   375,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
       0,   159,   160,   161,     0,   163,   164,   165,   166,   167,
     377,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,   181,   182,   183,     0,     0,   186,   187,
     188,   189,     0,     0,   378,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   379,   380,     0,
       0,     0,     0,     0,     0,     0,  1166,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,   381,
     382,   383,   384,   385,     0,   386,     0,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,    53,   398,
     399,     0,   365,   366,   367,   368,   369,     0,     0,     0,
       0,     0,     0,     0,   370,     0,   400,   401,   402,     0,
     403,     0,     0,   404,   405,     0,   371,     0,     0,     0,
       0,   372,     0,   406,   373,   407,   408,   374,   331,     0,
       0,   375,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   376,     0,   159,   160,   161,     0,   163,   164,   165,
     166,   167,   377,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,   181,   182,   183,     0,     0,
     186,   187,   188,   189,     0,     0,   378,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   379,
     380,     0,     0,     0,     0,     0,     0,     0,  1214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,   381,   382,   383,   384,   385,     0,   386,     0,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
      53,   398,   399,     0,   365,   366,   367,   368,   369,     0,
       0,     0,     0,     0,     0,     0,   370,     0,   400,   401,
     402,     0,   403,     0,     0,   404,   405,     0,   371,     0,
       0,     0,     0,   372,     0,   406,   373,   407,   408,   374,
     331,     0,     0,   375,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   376,     0,   159,   160,   161,     0,   163,
     164,   165,   166,   167,   377,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,   181,   182,   183,
       0,     0,   186,   187,   188,   189,     0,     0,   378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   379,   380,     0,     0,     0,     0,     0,     0,     0,
    1216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,   381,   382,   383,   384,   385,     0,   386,
       0,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,    53,   398,   399,     0,   365,   366,   367,   368,
     369,     0,     0,     0,     0,     0,     0,     0,   370,     0,
     400,   401,   402,     0,   403,     0,     0,   404,   405,     0,
     371,     0,     0,     0,     0,   372,     0,   406,   373,   407,
     408,   374,   331,     0,     0,   375,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   376,     0,   159,   160,   161,
       0,   163,   164,   165,   166,   167,   377,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,   181,
     182,   183,     0,     0,   186,   187,   188,   189,     0,     0,
     378,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   379,   380,     0,   535,   536,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,   381,   382,   383,   384,   385,
       0,   386,     0,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,    53,   398,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   400,   401,   402,     0,   403,     0,     0,   404,
     405,     0,     0,     0,     0,     0,     0,     0,     0,   406,
       0,   407,   408,     0,   331,   537,   538,   539,   540,   541,
       0,     0,   542,   543,   544,   545,     0,   546,   547,   548,
     549,   535,   536,     0,   550,     0,   551,   552,     0,     0,
       0,     0,   553,   554,   555,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,     0,     0,     0,     0,     0,     0,   331,     0,
       0,     0,   817,   818,   819,   820,   821,   822,   823,   824,
     537,   538,   539,   540,   541,   825,   826,   542,   543,   544,
     545,   955,   546,   547,   548,   549,   535,   536,     0,   550,
     828,   551,   552,   829,   830,     0,     0,   553,   554,   555,
     831,   832,   833,   556,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   956,   557,     0,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   568,   569,     0,     0,     0,
       0,     0,  1002,     0,     0,     0,     0,   817,   818,   819,
     820,   821,   822,   823,   824,   537,   538,   539,   540,   541,
     825,   826,   542,   543,   544,   545,   955,   546,   547,   548,
     549,   535,   536,     0,   550,   828,   551,   552,   829,   830,
       0,     0,   553,   554,   555,   831,   832,   833,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   956,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,     0,     0,     0,     0,     0,  1091,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   535,   536,
     537,   538,   539,   540,   541,     0,     0,   542,   543,   544,
     545,     0,   546,   547,   548,   549,     0,     0,     0,   550,
       0,   551,   552,     0,     0,     0,     0,   553,   554,   555,
       0,     0,     0,   556,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   557,     0,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   568,   569,   537,   538,   539,
     540,   541,   994,     0,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
       0,     0,     0,     0,   553,   554,   555,     0,     0,     0,
     556,     0,     0,     0,     0,     0,   535,   536,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,   156,     0,     0,     0,
       0,   557,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   157,     0,     0,     0,     0,     0,     0,
       0,     0,   568,   569,     0,     0,     0,     0,   158,  1185,
       0,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,     0,   537,   538,   539,   540,   541,
     535,   536,   542,   543,   544,   545,     0,   546,   547,   548,
     549,     0,     0,     0,   550,     0,   551,   552,     0,     0,
       0,     0,   553,   554,   555,     0,     0,     0,   556,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,     0,     0,   570,     0,     0,     0,     0,   537,
     538,   539,   540,   541,   535,   536,   542,   543,   544,   545,
     441,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,     0,     0,   553,   554,   555,     0,
       0,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,   569,     0,     0,   708,     0,
       0,     0,     0,   537,   538,   539,   540,   541,   535,   536,
     542,   543,   544,   545,     0,   546,   547,   548,   549,     0,
       0,     0,   550,     0,   551,   552,     0,     0,     0,     0,
     553,   554,   555,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   568,   569,
       0,     0,   841,     0,     0,     0,     0,   537,   538,   539,
     540,   541,   535,   536,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
       0,     0,     0,     0,   553,   554,   555,     0,     0,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   568,   569,     0,     0,   869,     0,     0,     0,
       0,   537,   538,   539,   540,   541,   535,   536,   542,   543,
     544,   545,     0,   546,   547,   548,   549,     0,     0,     0,
     550,     0,   551,   552,     0,     0,     0,     0,   553,   554,
     555,     0,     0,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   557,     0,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   568,   569,     0,     0,
     872,     0,     0,     0,     0,   537,   538,   539,   540,   541,
     535,   536,   542,   543,   544,   545,     0,   546,   547,   548,
     549,     0,     0,     0,   550,     0,   551,   552,     0,     0,
       0,     0,   553,   554,   555,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,     0,     0,   874,     0,     0,     0,     0,   537,
     538,   539,   540,   541,   535,   536,   542,   543,   544,   545,
       0,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,     0,     0,   553,   554,   555,     0,
       0,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,   569,     0,     0,   876,     0,
       0,     0,     0,   537,   538,   539,   540,   541,   535,   536,
     542,   543,   544,   545,     0,   546,   547,   548,   549,     0,
       0,     0,   550,     0,   551,   552,     0,     0,     0,     0,
     553,   554,   555,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   568,   569,
       0,     0,   877,     0,     0,     0,     0,   537,   538,   539,
     540,   541,   535,   536,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
       0,     0,     0,     0,   553,   554,   555,     0,     0,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   568,   569,     0,     0,   878,     0,     0,     0,
       0,   537,   538,   539,   540,   541,   535,   536,   542,   543,
     544,   545,     0,   546,   547,   548,   549,     0,     0,     0,
     550,     0,   551,   552,     0,     0,     0,     0,   553,   554,
     555,     0,     0,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   557,     0,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   568,   569,     0,     0,
     879,     0,     0,     0,     0,   537,   538,   539,   540,   541,
     535,   536,   542,   543,   544,   545,     0,   546,   547,   548,
     549,     0,     0,     0,   550,     0,   551,   552,     0,     0,
       0,     0,   553,   554,   555,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,     0,     0,   880,     0,     0,     0,     0,   537,
     538,   539,   540,   541,   535,   536,   542,   543,   544,   545,
       0,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,     0,     0,   553,   554,   555,     0,
       0,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,   569,     0,     0,   881,     0,
       0,     0,     0,   537,   538,   539,   540,   541,   535,   536,
     542,   543,   544,   545,     0,   546,   547,   548,   549,     0,
       0,     0,   550,     0,   551,   552,     0,     0,     0,     0,
     553,   554,   555,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   568,   569,
       0,     0,   944,     0,     0,     0,     0,   537,   538,   539,
     540,   541,   535,   536,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
       0,     0,     0,     0,   553,   554,   555,     0,     0,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   568,   569,     0,     0,  1009,     0,     0,     0,
       0,   537,   538,   539,   540,   541,   535,   536,   542,   543,
     544,   545,     0,   546,   547,   548,   549,     0,     0,     0,
     550,     0,   551,   552,     0,     0,     0,     0,   553,   554,
     555,     0,     0,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   557,     0,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   568,   569,     0,     0,
    1066,     0,     0,     0,     0,   537,   538,   539,   540,   541,
     535,   536,   542,   543,   544,   545,     0,   546,   547,   548,
     549,     0,     0,     0,   550,     0,   551,   552,     0,     0,
       0,     0,   553,   554,   555,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,     0,     0,  1112,     0,     0,     0,     0,   537,
     538,   539,   540,   541,   535,   536,   542,   543,   544,   545,
       0,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,     0,     0,   553,   554,   555,     0,
       0,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,   569,     0,     0,  1113,     0,
       0,     0,     0,   537,   538,   539,   540,   541,   535,   536,
     542,   543,   544,   545,     0,   546,   547,   548,   549,     0,
       0,     0,   550,     0,   551,   552,     0,     0,     0,     0,
     553,   554,   555,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   568,   569,
       0,     0,  1124,     0,     0,     0,     0,   537,   538,   539,
     540,   541,   535,   536,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
       0,     0,     0,     0,   553,   554,   555,     0,     0,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   568,   569,     0,     0,  1126,     0,     0,     0,
       0,   537,   538,   539,   540,   541,   535,   536,   542,   543,
     544,   545,     0,   546,   547,   548,   549,     0,     0,     0,
     550,     0,   551,   552,     0,     0,     0,     0,   553,   554,
     555,     0,     0,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   557,     0,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   568,   569,     0,     0,
    1128,     0,     0,     0,     0,   537,   538,   539,   540,   541,
     535,   536,   542,   543,   544,   545,     0,   546,   547,   548,
     549,     0,     0,     0,   550,     0,   551,   552,     0,     0,
       0,     0,   553,   554,   555,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,     0,     0,  1132,     0,     0,     0,     0,   537,
     538,   539,   540,   541,   535,   536,   542,   543,   544,   545,
       0,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,     0,     0,   553,   554,   555,     0,
       0,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,   569,     0,     0,  1171,     0,
       0,     0,     0,   537,   538,   539,   540,   541,   535,   536,
     542,   543,   544,   545,     0,   546,   547,   548,   549,     0,
       0,     0,   550,     0,   551,   552,     0,     0,     0,     0,
     553,   554,   555,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   568,   569,
       0,     0,  1172,     0,     0,     0,     0,   537,   538,   539,
     540,   541,   535,   536,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
       0,     0,     0,     0,   553,   554,   555,     0,     0,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   568,   569,     0,     0,  1173,     0,     0,     0,
       0,   537,   538,   539,   540,   541,   535,   536,   542,   543,
     544,   545,     0,   546,   547,   548,   549,     0,     0,     0,
     550,     0,   551,   552,     0,     0,     0,     0,   553,   554,
     555,     0,     0,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   557,     0,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   568,   569,     0,     0,
    1182,     0,     0,     0,     0,   537,   538,   539,   540,   541,
     535,   536,   542,   543,   544,   545,     0,   546,   547,   548,
     549,     0,     0,     0,   550,     0,   551,   552,     0,     0,
       0,     0,   553,   554,   555,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,     0,     0,  1184,     0,     0,     0,     0,   537,
     538,   539,   540,   541,   535,   536,   542,   543,   544,   545,
       0,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,     0,     0,   553,   554,   555,     0,
       0,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,   569,     0,     0,  1220,     0,
       0,     0,     0,   537,   538,   539,   540,   541,   535,   536,
     542,   543,   544,   545,     0,   546,   547,   548,   549,     0,
       0,     0,   550,     0,   551,   552,     0,     0,     0,     0,
     553,   554,   555,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   568,   569,
     573,     0,     0,     0,     0,     0,     0,   537,   538,   539,
     540,   541,   535,   536,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
       0,     0,     0,     0,   553,   554,   555,     0,     0,     0,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   568,   569,   927,     0,     0,     0,     0,     0,
       0,   537,   538,   539,   540,   541,   535,   536,   542,   543,
     544,   545,     0,   546,   547,   548,   549,     0,     0,     0,
     550,     0,   551,   552,     0,     0,     0,     0,   553,   554,
     555,     0,     0,     0,   556,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   557,     0,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   568,   569,   941,     0,
       0,     0,     0,     0,     0,   537,   538,   539,   540,   541,
     535,   536,   542,   543,   544,   545,     0,   546,   547,   548,
     549,     0,     0,     0,   550,     0,   551,   552,     0,     0,
       0,     0,   553,   554,   555,     0,     0,     0,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   557,
       0,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     568,   569,  1061,     0,     0,     0,     0,     0,     0,   537,
     538,   539,   540,   541,     0,     0,   542,   543,   544,   545,
       0,   546,   547,   548,   549,   535,   536,     0,   550,     0,
     551,   552,     0,     0,     0,     0,   553,   554,   555,     0,
       0,     0,   556,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,   569,  1064,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   817,   818,   819,   820,
     821,   822,   823,   824,   537,   538,   539,   540,   541,   825,
     826,   542,   543,   544,   545,   955,   546,   547,   548,   549,
    -315,   276,   277,   550,   828,   551,   552,   829,   830,     0,
       0,   553,   554,   555,   831,   832,   833,   556,   278,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   956,   557,     0,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   568,
     569,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     535,   536,   297,   298,   299,     0,     0,     0,     0,     0,
     300,   301,   302,   303,   304,     0,     0,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,     0,     0,   323,   324,
       0,     0,   720,     0,     0,   325,   326,     0,     0,     0,
     535,   536,     0,     0,     0,     0,     0,     0,     0,   537,
     538,   539,   540,   541,     0,     0,   542,   543,   544,   545,
       0,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,   700,     0,   553,   554,   555,   159,
     160,   161,   556,   163,   164,   165,   166,   167,   377,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,   181,   182,   183,     0,     0,   186,   187,   188,   189,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,   535,   536,   537,
     538,   539,   540,   541,   568,   569,   542,   543,   544,   545,
       0,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,   887,     0,   553,   554,   555,     0,
       0,     0,   556,     0,   721,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   722,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,   535,   536,     0,
       0,     0,     0,     0,   568,   569,   537,   538,   539,   540,
     541,     0,     0,   542,   543,   544,   545,     0,   546,   547,
     548,   549,     0,     0,     0,   550,     0,   551,   552,     0,
       0,     0,     0,   553,   554,   555,     0,     0,     0,   556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     557,   932,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,     0,     0,   535,   536,   537,   538,   539,   540,
     541,   568,   569,   542,   543,   544,   545,     0,   546,   547,
     548,   549,     0,     0,     0,   550,     0,   551,   552,     0,
       0,     0,     0,   553,   554,   555,     0,     0,     0,   556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1034,     0,     0,     0,
     557,     0,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,     0,     0,   535,   536,     0,     0,     0,     0,
       0,   568,   569,   537,   538,   539,   540,   541,     0,     0,
     542,   543,   544,   545,     0,   546,   547,   548,   549,     0,
       0,     0,   550,     0,   551,   552,     0,     0,   535,   536,
     553,   554,   555,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   557,     0,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,     0,
       0,     0,     0,   537,   538,   539,   540,   541,   568,   569,
     542,   543,   544,   545,     0,   546,   547,   548,   549,     0,
       0,     0,   550,     0,   551,   552,     0,     0,   535,   536,
     553,   554,   555,     0,     0,     0,  -650,   537,   538,   539,
     540,   541,     0,     0,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
     535,   536,     0,     0,   553,   554,   555,   557,     0,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   568,   569,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,     0,     0,     0,     0,   537,   538,   539,
     540,   541,   568,   569,   542,   543,   544,   545,     0,   546,
     547,   548,   549,     0,     0,     0,   550,     0,   551,   552,
     535,   536,     0,     0,   553,     0,     0,     0,     0,   537,
     538,   539,   540,   541,     0,     0,   542,   543,   544,   545,
       0,   546,   547,   548,   549,   535,   536,     0,   550,     0,
     551,   552,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   568,   569,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,     0,     0,   537,
     538,   539,   540,   541,   568,   569,   542,   543,   544,   545,
       0,   546,   547,   548,   549,     0,     0,     0,   550,     0,
     551,   552,     0,     0,   537,   538,   539,   540,   541,     0,
       0,   542,     0,     0,   545,     0,   546,   547,   548,   549,
       0,     0,     0,   550,     0,   551,   552,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   515,   559,   560,   561,   562,
     563,   564,   565,   566,   567,     0,     0,   155,     0,     0,
       0,     0,     0,   156,   568,   569,     0,     0,     0,     0,
       0,     0,     0,   561,   562,   563,   564,   565,   566,   567,
     157,     0,     0,     0,     0,     0,     0,     0,     0,   568,
     569,     0,     0,     0,     0,   158,     0,     0,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   517,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,     0,     0,     0,     0,
       0,   156,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
       0,   192,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   158,     0,    53,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   159,
     160,   161,     0,   163,   164,   165,   166,   167,   377,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,   181,   182,   183,     0,     0,   186,   187,   188,   189,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   928,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   725,     0,     0,     0,     0,     0,
       0,     0,     0,   159,   160,   161,   726,   163,   164,   165,
     166,   167,   377,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,   181,   182,   183,     0,     0,
     186,   187,   188,   189,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,     0,     0,     0,   929,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,     0,
     930,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,     0,
       0,     0,     0,     0,   156,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   158,     0,    53,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,     0,     0,     0,     0,   206,     0,   207,
       0,   208,   209,   210,   211,   212,   489,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,     0,   224,
     225,   226,     0,     0,   227,   228,   229,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,   232,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233
};

static const yytype_int16 yycheck[] =
{
      12,   142,   461,   583,   271,   121,   579,   571,   484,   714,
     486,   518,   488,   358,   235,   360,   468,   362,   592,   418,
     121,   692,     0,   446,     7,    51,    21,   698,     6,   603,
      14,    15,    32,    88,   125,   604,   605,    19,    32,   134,
      19,    44,    54,    55,    20,    21,    19,    51,   162,    18,
      19,    29,   515,    31,   517,    33,    44,    45,    20,    21,
      55,    39,    32,   120,    58,    59,   162,   174,   122,   123,
      48,   136,   137,   138,   120,   649,    54,    89,    90,    91,
      92,   147,   120,   129,   162,   120,   152,   162,   162,   203,
     175,   129,   179,    43,   129,   202,    74,   100,   119,   150,
      48,   122,   123,   162,   120,   669,   202,   202,   155,   121,
     201,   162,   100,   129,   201,   172,   201,   686,   175,    97,
     135,   388,   389,   117,   199,   203,   172,   121,   591,   203,
      80,   177,   198,   198,   172,   111,   112,   172,    14,    15,
     194,   195,    32,   119,   203,   121,   122,   123,   124,   111,
     112,   171,   128,   162,    60,   271,   172,   119,   162,   174,
     122,   123,   124,    20,    21,   162,   128,   172,    58,    59,
     171,   155,   171,   194,   195,   201,   160,   177,   162,   173,
     164,   201,   172,   177,   889,   179,   180,   242,   183,   171,
      20,    21,   171,   162,   203,  1178,   144,   198,   171,   194,
     197,   195,   201,   344,   778,   171,   473,   177,   782,   174,
     204,   201,   195,   197,   162,   886,   150,   195,   194,   195,
     203,  1163,   796,   201,  1207,   195,   179,   117,   162,   122,
     123,   121,   194,   195,   204,   351,   352,   353,   354,   506,
     639,   357,   171,   359,   667,   361,   815,   363,   201,  1191,
     351,   352,   353,   354,   111,   112,   357,   150,   359,   271,
     361,   201,   119,   203,   121,   122,   123,   124,   171,   162,
     844,   128,   388,   389,    54,    55,    33,     4,     5,   155,
       7,   111,   112,   173,   160,   171,   162,   177,   164,   119,
     180,   121,   122,   123,   124,   198,   171,   171,   128,   144,
     162,   194,   195,   135,    61,   195,   171,   171,    35,    89,
      90,    91,    92,   179,   204,   201,   175,   162,   882,   120,
     179,   196,   196,   180,   181,   182,   183,   184,   129,   445,
     162,   895,   196,   198,   135,   201,  1041,   194,   195,   351,
     352,   353,   354,   459,   445,   357,   120,   359,  1019,   361,
     162,   363,   182,   183,   184,   367,   171,   473,   459,  1030,
     135,   925,   814,   135,   194,   195,    20,    21,   948,   144,
     162,   172,   171,   594,   719,   135,   388,   389,   135,   886,
      55,   602,   155,   198,   171,   171,    61,   162,   952,   896,
     506,   403,   152,   153,   154,   162,   163,   171,   172,   198,
     174,   171,   162,   177,    69,   162,   673,   674,    73,   676,
     171,   198,   198,   982,   983,   179,   171,   184,   178,   535,
     536,   144,   991,   992,   162,   163,   196,    92,    93,    94,
      95,   188,   162,   445,    11,   196,   703,   201,   150,   162,
     197,   196,  1022,   174,   920,    22,    23,   459,   179,   174,
     162,  1015,   197,   465,   179,   109,   110,   111,   112,   113,
     194,   473,   116,   117,   118,   119,   197,   121,   122,   123,
     124,   135,   197,   174,   128,    55,   130,   131,   179,   162,
     144,    61,   136,   174,   138,   149,   498,   171,   179,    55,
     174,    32,   172,   177,   506,    61,   197,    55,   162,    55,
     202,    55,   136,    61,   138,    61,   197,    61,    20,    21,
     147,   197,   165,   166,   178,   152,   202,    58,    59,   531,
     201,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   175,   201,   196,   203,   179,   652,    55,   201,   175,
     194,   195,   175,   179,   175,   162,   179,   663,   179,   665,
     175,   652,   668,   198,   179,   671,   201,   673,   674,   780,
     676,   162,   663,  1039,   909,   260,   201,   668,   789,   162,
     671,   175,   202,  1146,   269,   179,   117,   136,   175,   175,
     121,   802,   179,   179,   175,   806,   202,   703,   179,   165,
     166,   167,   168,   199,   200,   100,   202,   109,   110,   111,
     112,   113,   165,   166,   116,   117,   118,   119,    32,   121,
     122,   123,   124,  1072,    75,    76,   128,   152,   130,   131,
     136,   137,   138,   165,   166,   167,   178,    20,    21,   178,
     178,   747,   173,   178,    58,    59,   177,   197,   179,   180,
     652,   908,   178,   162,   178,   178,   178,   178,   178,   175,
     197,   663,    34,   665,   195,   201,   668,    34,   197,   671,
     776,   673,   674,   204,   676,   177,   178,   179,   180,   181,
     182,   183,   184,   202,   162,   776,   203,   162,   174,   201,
     162,   162,   194,   195,   379,   380,   162,   196,    21,   162,
     196,   703,   202,   117,   174,   390,   174,   121,   202,   840,
     197,    41,   200,   198,   197,   400,   401,   402,   178,   404,
     405,   406,   178,   197,   178,   178,   109,   110,   111,   112,
     113,   178,   197,   116,   117,   118,   119,   178,   121,   122,
     123,   124,   197,   195,   162,   128,   957,   130,   131,   197,
     162,   197,   197,   197,   197,   197,   162,   197,   196,   173,
     197,   196,   179,   177,   197,   179,   180,   152,   162,   197,
      41,   162,   201,   155,   776,    36,   461,   201,   201,     9,
     201,   195,   201,    64,    41,   470,   201,   162,   201,   179,
     204,   201,   179,  1050,   171,   178,   179,   180,   181,   182,
     183,   184,   908,   179,   196,   171,   203,   165,   197,   197,
     162,   194,   195,   178,   178,   500,   197,   197,   503,   197,
     505,     1,   162,   197,   509,   510,   511,   512,   513,   514,
     162,   516,   125,   518,   197,   837,    13,   172,  1049,   155,
     174,   200,   202,     7,   162,   162,   197,   162,   196,   196,
     196,   196,   537,   538,   203,   165,   541,   542,   543,   544,
     162,   546,  1073,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   162,   569,   162,    32,   162,   178,   197,
     197,    20,    21,   578,   197,   201,    41,   197,   196,   196,
     196,   196,   162,   588,   198,   196,   908,   592,   162,   201,
     595,   596,    58,    59,   196,   203,   601,   179,   603,    32,
     179,   606,    32,   201,   196,  1136,   611,   196,   198,  1140,
      51,   196,   196,    32,   201,   203,    68,    38,   196,   523,
     118,    71,  1175,   247,  1050,  1176,  1052,    69,    58,    59,
     837,   636,   967,  1176,  1176,  1176,  1176,     1,  1047,    58,
      59,  1052,   875,  1086,   649,  1089,   585,   665,   364,    47,
     645,   117,   462,   894,   367,   121,   701,   356,   518,  1160,
     109,   110,   111,   112,    -1,   670,    -1,    -1,    -1,    -1,
     119,    -1,   121,   122,   123,   124,   367,    -1,    -1,   128,
      -1,   130,   131,   688,   689,    -1,    -1,   117,  1219,    -1,
     120,   121,   697,    -1,    -1,   700,   701,    -1,   117,   129,
     705,    -1,   121,  1129,    -1,    -1,    -1,   173,    -1,    -1,
      -1,   177,    -1,   179,   180,    -1,    -1,    -1,  1129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1050,   195,
    1052,   180,   181,   182,   183,   184,    -1,    -1,   204,    -1,
      -1,    -1,   172,   173,    -1,   194,   195,   177,    -1,    -1,
     180,    -1,    -1,    -1,   173,   760,    -1,    -1,   177,   764,
     179,   180,    -1,    32,    -1,   195,   771,    -1,    -1,    -1,
      -1,   201,    -1,   778,   204,    32,   195,   782,    -1,    -1,
      -1,    -1,   787,    -1,    -1,   204,    -1,    -1,    -1,    58,
      59,   796,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,  1129,    -1,    -1,
      -1,    -1,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,   834,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   844,
      -1,  1163,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,  1191,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,   884,
     885,    -1,   887,    -1,    -1,    20,    21,   892,    -1,   894,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   906,   907,    -1,   173,    -1,    -1,   912,   177,    -1,
     179,   180,    -1,    -1,    -1,    -1,   173,   922,    -1,   924,
     177,   926,   179,   180,    -1,    -1,   195,   932,    -1,    -1,
      -1,   936,    -1,    -1,    -1,   204,    -1,   942,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,
     955,   956,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   969,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,    -1,   128,   129,   130,   131,   132,   133,    -1,
      -1,   136,   137,   138,   139,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,    -1,    -1,  1058,    -1,  1060,    -1,    -1,  1063,   194,
     195,    -1,    -1,  1068,    -1,    -1,  1071,  1072,    -1,    -1,
      -1,  1076,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1093,    -1,
      -1,  1096,  1097,  1098,  1099,    -1,    -1,  1102,    -1,    -1,
    1105,  1106,    -1,  1108,    -1,    -1,  1111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1120,   109,   110,   111,   112,
     113,    -1,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,
      -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1176,    -1,    -1,    -1,    -1,    -1,    -1,  1183,    -1,
     173,    -1,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,  1198,  1199,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,    -1,  1209,     1,    -1,    -1,    -1,  1214,
       6,  1216,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    -1,    42,    43,    -1,    -1,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,
     146,   147,    -1,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,   181,   182,    -1,   184,    -1,
      -1,   187,   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,   199,   200,   201,   202,   203,     1,    -1,
      -1,    -1,    -1,     6,    -1,     8,     9,    10,    -1,    12,
      -1,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,
      43,    -1,    -1,    46,    -1,    48,    49,    50,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    88,    89,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,   145,   146,   147,    -1,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
      -1,   184,    -1,    -1,   187,   188,    -1,    -1,    -1,    14,
      15,    16,    17,    18,   197,    -1,   199,   200,   201,   202,
     203,    26,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    49,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    63,    -1,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    88,    89,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,    -1,   180,   181,   182,    -1,   184,
      -1,    -1,   187,   188,    14,    15,    16,    17,    18,    -1,
     195,    -1,   197,    -1,   199,   200,    26,   202,    -1,   204,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    49,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    88,    89,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,   117,    -1,    -1,
      -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,    -1,
     180,   181,   182,    -1,   184,    -1,    -1,   187,   188,    14,
      15,    16,    17,    18,    -1,   195,    -1,   197,    -1,   199,
     200,    26,   202,    -1,   204,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    88,    89,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,   180,   181,   182,    -1,   184,
      -1,    -1,   187,   188,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,   197,    -1,   199,   200,    -1,   202,    -1,   204,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    -1,    49,    50,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,   180,   181,   182,    -1,
     184,    -1,    -1,   187,   188,    -1,    38,    -1,    -1,    -1,
      -1,    43,    -1,   197,    46,   199,   200,    49,   202,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    66,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    87,    88,    89,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,   146,   147,    -1,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   180,   181,
     182,    -1,   184,    -1,    -1,   187,   188,    -1,    38,    -1,
      -1,    -1,    -1,    43,    -1,   197,    46,   199,   200,    49,
     202,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    88,    89,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
     180,   181,   182,    -1,   184,    -1,    -1,   187,   188,    -1,
      38,    -1,    -1,    -1,    -1,    43,    -1,   197,    46,   199,
     200,    49,   202,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,
      -1,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   180,   181,   182,    -1,   184,    -1,    -1,   187,
     188,    14,    15,    16,    17,    18,    -1,   195,    -1,   197,
     198,   199,   200,    26,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    88,    89,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,   145,   146,   147,    -1,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,   180,   181,   182,
      -1,   184,    -1,    -1,   187,   188,    -1,    38,    -1,    -1,
      -1,    -1,    43,    -1,   197,    46,   199,   200,    49,   202,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    87,    88,    89,    -1,
      -1,    92,    93,    94,    95,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,   145,   146,   147,    -1,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   180,
     181,   182,    -1,   184,    -1,    -1,   187,   188,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,   197,    46,   199,   200,
      49,   202,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    14,    15,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,   180,   181,   182,    -1,   184,    -1,    -1,   187,   188,
      -1,    38,    -1,    -1,    -1,    -1,    43,    -1,   197,    46,
     199,   200,    49,   202,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    -1,
      87,    88,    89,    -1,    -1,    92,    93,    94,    95,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,   146,
     147,    -1,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,   180,   181,   182,    -1,   184,    -1,    -1,
     187,   188,    -1,    38,    -1,    -1,    -1,    -1,    43,   196,
     197,    46,   199,   200,    49,   202,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    -1,    87,    88,    89,    -1,    -1,    92,    93,    94,
      95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,   146,   147,    -1,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,    14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,   180,   181,   182,    -1,   184,
      -1,    -1,   187,   188,    -1,    38,    -1,    -1,    -1,    -1,
      43,    -1,   197,    46,   199,   200,    49,   202,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    -1,    87,    88,    89,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,   145,   146,   147,    -1,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
      -1,   184,    -1,    -1,   187,   188,    14,    15,    16,    17,
      18,    -1,    -1,    -1,   197,   198,   199,   200,    26,   202,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,
      -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    -1,    65,    66,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,
      -1,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,   180,   181,   182,    -1,   184,    -1,    -1,   187,
     188,    -1,    38,    -1,    -1,    -1,    -1,    43,    -1,   197,
      46,   199,   200,    49,   202,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,
      66,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,
     146,   147,    -1,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,   180,   181,   182,    -1,   184,    -1,
      -1,   187,   188,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,   197,    46,   199,   200,    49,   202,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,   180,   181,   182,    -1,
     184,    -1,    -1,   187,   188,    14,    15,    16,    17,    18,
      -1,    -1,    -1,   197,    -1,   199,   200,    26,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   180,   181,   182,    -1,   184,    -1,    -1,   187,   188,
      14,    15,    16,    17,    18,    -1,    -1,    -1,   197,   198,
     199,   200,    26,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,   180,   181,   182,    -1,
     184,    -1,    -1,   187,   188,    14,    15,    16,    17,    18,
      -1,    -1,    -1,   197,    -1,   199,   200,    26,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   180,   181,   182,    -1,   184,    -1,    -1,   187,   188,
      14,    15,    16,    17,    18,    -1,    -1,    -1,   197,   198,
     199,   200,    26,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,    -1,
     184,    -1,    -1,   187,   188,    14,    15,    16,    17,    18,
      -1,    -1,    -1,   197,   198,   199,   200,    26,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      -1,   180,   181,   182,    -1,   184,    -1,    26,   187,   188,
      -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,   197,    38,
     199,   200,    -1,   202,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   180,   181,   182,    -1,   184,    -1,    -1,   187,   188,
      14,    15,    16,    17,    18,    -1,    -1,    -1,   197,   198,
     199,   200,    26,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,    -1,
     184,    -1,    -1,   187,   188,    14,    15,    16,    17,    18,
      -1,    -1,    -1,   197,   198,   199,   200,    26,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    -1,    87,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   180,   181,   182,    -1,   184,    -1,    -1,   187,   188,
      14,    15,    16,    17,    18,    -1,    -1,    -1,   197,   198,
     199,   200,    26,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    -1,    87,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,   147,    -1,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,   180,   181,   182,    -1,
     184,    -1,    -1,   187,   188,    -1,    38,    -1,    -1,    -1,
      -1,    43,    -1,   197,    46,   199,   200,    49,   202,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    65,    66,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    87,    88,    89,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,   146,   147,    -1,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   180,   181,
     182,    -1,   184,    -1,    -1,   187,   188,    -1,    38,    -1,
      -1,    -1,    -1,    43,    -1,   197,    46,   199,   200,    49,
     202,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    87,    88,    89,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,   146,   147,    -1,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,    14,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
     180,   181,   182,    -1,   184,    -1,    -1,   187,   188,    -1,
      38,    -1,    -1,    -1,    -1,    43,    -1,   197,    46,   199,
     200,    49,   202,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,   145,   146,   147,
      -1,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   180,   181,   182,    -1,   184,    -1,    -1,   187,
     188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
      -1,   199,   200,    -1,   202,   109,   110,   111,   112,   113,
      -1,    -1,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,    20,    21,    -1,   128,    -1,   130,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    20,    21,    -1,   128,
     129,   130,   131,   132,   133,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,   173,    -1,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    20,    21,    -1,   128,   129,   130,   131,   132,   133,
      -1,    -1,   136,   137,   138,   139,   140,   141,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
     109,   110,   111,   112,   113,    -1,    -1,   116,   117,   118,
     119,    -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,
      -1,   130,   131,    -1,    -1,    -1,    -1,   136,   137,   138,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   109,   110,   111,
     112,   113,   201,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,    -1,    -1,    62,   201,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,   109,   110,   111,   112,   113,
      20,    21,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    20,    21,   116,   117,   118,   119,
     204,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,    20,    21,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,   130,   131,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,   198,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,    20,    21,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,   198,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,    20,    21,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,    -1,    -1,    -1,
     128,    -1,   130,   131,    -1,    -1,    -1,    -1,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
     198,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
      20,    21,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    20,    21,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,    20,    21,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,   130,   131,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,   198,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,    20,    21,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,   198,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,    20,    21,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,    -1,    -1,    -1,
     128,    -1,   130,   131,    -1,    -1,    -1,    -1,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
     198,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
      20,    21,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    20,    21,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,    20,    21,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,   130,   131,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,   198,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,    20,    21,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,   198,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,    20,    21,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,    -1,    -1,    -1,
     128,    -1,   130,   131,    -1,    -1,    -1,    -1,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
     198,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
      20,    21,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    20,    21,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,    20,    21,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,   130,   131,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,   198,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,    20,    21,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,   198,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,    20,    21,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,    -1,    -1,    -1,
     128,    -1,   130,   131,    -1,    -1,    -1,    -1,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
     198,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
      20,    21,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    20,    21,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,    20,    21,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,   130,   131,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,   198,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,    20,    21,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,   198,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,    20,    21,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,    -1,    -1,    -1,
     128,    -1,   130,   131,    -1,    -1,    -1,    -1,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,
     198,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
      20,    21,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    20,    21,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,    20,    21,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,   130,   131,    -1,    -1,    -1,    -1,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,    20,    21,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      -1,    -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   109,   110,   111,   112,   113,    20,    21,   116,   117,
     118,   119,    -1,   121,   122,   123,   124,    -1,    -1,    -1,
     128,    -1,   130,   131,    -1,    -1,    -1,    -1,   136,   137,
     138,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   109,   110,   111,   112,   113,
      20,    21,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,
      -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    -1,    -1,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    20,    21,    -1,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    20,    21,   128,   129,   130,   131,   132,   133,    -1,
      -1,   136,   137,   138,   139,   140,   141,   142,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      20,    21,   121,   122,   123,    -1,    -1,    -1,    -1,    -1,
     129,   130,   131,   132,   133,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,    -1,   187,   188,
      -1,    -1,    18,    -1,    -1,   194,   195,    -1,    -1,    -1,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    -1,    -1,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,   134,    -1,   136,   137,   138,    65,
      66,    67,   142,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    20,    21,   109,
     110,   111,   112,   113,   194,   195,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,   134,    -1,   136,   137,   138,    -1,
      -1,    -1,   142,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    -1,   194,   195,   109,   110,   111,   112,
     113,    -1,    -1,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,
      -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,    -1,    20,    21,   109,   110,   111,   112,
     113,   194,   195,   116,   117,   118,   119,    -1,   121,   122,
     123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,    -1,
      -1,    -1,    -1,   136,   137,   138,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
     173,    -1,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,   194,   195,   109,   110,   111,   112,   113,    -1,    -1,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,   130,   131,    -1,    -1,    20,    21,
     136,   137,   138,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   194,   195,
     116,   117,   118,   119,    -1,   121,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,   130,   131,    -1,    -1,    20,    21,
     136,   137,   138,    -1,    -1,    -1,   142,   109,   110,   111,
     112,   113,    -1,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      20,    21,    -1,    -1,   136,   137,   138,   173,    -1,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   194,   195,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,   130,   131,
      20,    21,    -1,    -1,   136,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,    -1,    -1,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    20,    21,    -1,   128,    -1,
     130,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   194,   195,   116,   117,   118,   119,
      -1,   121,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
     130,   131,    -1,    -1,   109,   110,   111,   112,   113,    -1,
      -1,   116,    -1,    -1,   119,    -1,   121,   122,   123,   124,
      -1,    -1,    -1,   128,    -1,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    12,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,   194,   195,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   178,   179,   180,   181,   182,   183,   184,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,   148,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,   162,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    65,
      66,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      -1,    87,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,   148,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    67,   162,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    -1,    87,    88,    89,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
     162,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,   162,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    69,    70,    71,    72,    73,   162,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    -1,    87,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   206,     0,     6,    29,    31,    33,    39,    48,    54,
      74,    97,   195,   201,   209,   217,   218,   223,   251,   255,
     281,   349,   355,   358,   364,   403,   406,    18,    19,   162,
     244,   245,   246,   155,   224,   225,   162,   163,   184,   219,
     220,   221,   162,   202,   352,   162,   199,   208,   407,   404,
      33,    61,   135,   162,   188,   197,   247,   248,   249,   250,
     268,     4,     5,     7,    35,   362,    60,   347,   172,   171,
     174,   171,   220,    21,    55,   183,   194,   222,   353,   352,
     354,   347,   162,   162,   162,   135,   249,   249,   197,   136,
     137,   138,   171,   196,    55,    61,   256,   258,    55,    61,
     356,    55,    61,   363,    55,    61,   348,    14,    15,   155,
     160,   162,   164,   197,   211,   245,   155,   225,   162,   219,
     219,   172,   201,   203,   352,    55,    61,   207,   202,   405,
     162,   198,   246,   249,   249,   249,   249,   259,   162,   357,
     365,   202,   350,   165,   166,   210,    14,    15,   155,   160,
     162,   211,   242,   243,   222,    24,    30,    47,    62,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   148,   268,   368,   370,   371,   373,   377,   402,
     201,   162,   372,   202,   198,    34,    65,    67,    69,    70,
      71,    72,    73,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    87,    88,    89,    92,    93,    94,
      95,   111,   112,   162,   254,   257,   174,   202,   100,   360,
     361,   345,   152,   324,   165,   166,   167,   171,   198,   178,
     178,   178,   178,   197,   178,   178,   178,   178,   178,   178,
     197,    32,    58,    59,   117,   121,   173,   177,   180,   195,
     204,   175,   201,   162,   337,   338,    20,    21,    37,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   121,   122,   123,
     129,   130,   131,   132,   133,   136,   137,   138,   139,   140,
     141,   142,   173,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   187,   188,   194,   195,    34,    34,   197,
     252,   202,   260,    69,    73,    92,    93,    94,    95,   369,
     351,   162,   366,   203,   346,   246,   144,   162,   343,   344,
     242,   380,   382,   384,   378,   162,   374,   386,   388,   390,
     392,   394,   396,   398,   400,    14,    15,    16,    17,    18,
      26,    38,    43,    46,    49,    53,    63,    74,    98,   111,
     112,   143,   144,   145,   146,   147,   149,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   163,   164,
     180,   181,   182,   184,   187,   188,   197,   199,   200,   213,
     215,   260,   264,   268,   273,   284,   291,   294,   297,   301,
     302,   305,   306,   308,   313,   316,   323,   368,   408,   412,
     416,   418,   420,    32,   177,    32,   177,   195,   204,   196,
     316,   204,   377,   162,   203,   174,   201,   162,   162,   162,
     196,    21,   162,   196,   147,   198,   324,   333,   334,   174,
     253,   262,   202,   162,   203,   174,   359,   202,   324,   196,
     197,    41,   171,   174,   177,   342,   402,   376,   402,   402,
     402,   198,   372,   402,   252,   402,   252,   402,   252,   162,
     335,   336,   402,   338,   178,   270,   370,   408,   197,   178,
     197,   178,   178,   197,   178,   197,   178,   316,   316,   197,
     197,   197,   197,   197,   197,    12,   377,    12,   377,   316,
     414,   417,   178,   212,   316,   316,   316,   268,   316,   316,
     316,   200,   162,   197,   251,    20,    21,   109,   110,   111,
     112,   113,   116,   117,   118,   119,   121,   122,   123,   124,
     128,   130,   131,   136,   137,   138,   142,   173,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   194,   195,
     198,   197,   196,   196,   402,   203,   337,   162,   197,    48,
     144,   162,   340,   367,   198,   201,   402,     1,     8,     9,
      10,    12,    25,    27,    28,    37,    40,    42,    50,    52,
      56,    57,    63,    99,   126,   127,   163,   201,   203,   226,
     227,   230,   233,   234,   236,   237,   238,   239,   240,   261,
     263,   267,   269,   274,   275,   276,   277,   278,   279,   280,
     281,   283,   303,   304,   316,   351,   172,   201,   268,   329,
     344,   196,   316,   162,   162,   377,   120,   129,   172,   341,
     179,   179,   201,   179,   179,   179,   201,   179,   253,   179,
     253,   179,   253,   174,   179,   201,   179,   201,   271,   197,
     268,   292,   316,   285,   287,   316,   289,   316,   377,   316,
     316,   316,   316,   316,   316,   367,    51,   162,   180,   197,
     316,   409,   410,   411,   413,   415,   367,   197,   410,   415,
     134,   201,   203,   265,   167,   168,   210,   216,   198,   144,
     149,   178,   268,   307,   195,   198,   295,   316,   152,   300,
      18,   150,   162,   368,    18,   150,   162,   368,   316,   316,
     316,   316,   316,   316,   162,   316,   150,   162,   316,   316,
     316,   316,   316,   316,   316,   316,   316,    21,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   122,
     123,   150,   162,   194,   195,   314,   316,   198,   295,   316,
     340,   197,    41,   120,   171,   172,   174,   177,   339,   333,
     316,   367,   120,   267,   303,   316,   260,    59,   316,   316,
     162,   201,   155,    56,   316,   260,   120,   267,   316,   200,
     301,   301,   316,    36,   201,   201,   316,     9,   201,   201,
     201,   201,   201,    64,   282,   125,   201,   101,   102,   103,
     104,   105,   106,   107,   108,   114,   115,   120,   129,   132,
     133,   139,   140,   141,   172,   203,   316,   195,   203,   251,
     330,   198,    41,   201,   341,   267,   316,   381,   383,   402,
     385,   379,   375,   387,   179,   391,   179,   395,   179,   402,
     399,   335,   401,   402,   198,   295,   178,   316,   402,   198,
     377,   377,   198,   377,   198,   179,   198,   198,   198,   198,
     198,   198,    19,   301,   129,   339,   198,   134,   171,   201,
     411,   196,   171,   196,   201,    19,   198,   411,   203,   316,
     414,   203,   377,   316,   165,   214,   197,   197,   309,   311,
     162,   409,   171,   198,   120,   129,   172,   177,   298,   299,
     252,   178,   197,   178,   197,   197,   197,   196,    18,   150,
     162,   368,   174,   150,   162,   316,   197,   150,   162,   316,
       1,   196,   171,   198,   198,   316,   162,   162,   402,   267,
     316,   260,    19,   267,   316,   120,   172,    13,   316,   260,
     172,   174,   155,   267,   316,   200,   260,   202,   260,   235,
     344,   301,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   126,   127,   316,   316,   316,   316,   316,   316,
     316,   126,   127,   316,   201,   250,     7,   324,   328,   162,
     267,   316,   201,   389,   393,   397,   179,   198,   162,   198,
     179,   179,   179,   179,   300,   197,   295,   316,   316,   410,
     411,   316,   162,   409,   196,   196,   316,   196,   413,   295,
     410,   203,   196,   179,   169,   165,   316,   316,   377,   252,
     196,   195,   316,   162,   162,   162,   162,   171,   196,   253,
     317,   316,   319,   316,   198,   295,   316,   178,   197,   316,
     197,   196,   316,   197,   196,   315,   198,    41,   339,   295,
     260,   241,   262,    11,    22,    23,   228,   229,   316,   301,
     301,   301,   301,   196,    55,    61,   327,    44,   100,   325,
     201,   201,   272,   179,   201,   293,   286,   288,   290,   197,
     198,   295,   201,   411,   196,   129,   339,   196,   201,   411,
     196,   266,   198,   198,   179,   253,   198,   409,   298,   196,
     134,   260,   296,   377,   198,   402,   198,   198,   198,   321,
     316,   316,   198,   316,   162,   316,   201,   316,   203,   260,
     316,    11,   231,   201,    45,   325,   327,   316,   162,   316,
     316,   316,   198,   316,   198,   316,   196,   196,   316,   316,
     316,   203,   316,   310,   179,   196,   120,   316,   179,   179,
     402,   198,   198,   198,   260,   260,   232,   201,   331,    32,
     326,   340,   198,   179,   198,   201,   419,   196,   419,   196,
     307,   312,   198,   316,   318,   320,   179,   229,    25,    99,
     233,   274,   275,   276,   278,   316,   257,   332,   316,    51,
     196,   203,   307,   322,   120,   316,   120,   316,   201,   257,
     198,   316,   196,   196,   316,   316,   260
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   205,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   207,   207,   207,   208,   208,
     209,   210,   210,   210,   210,   211,   212,   212,   212,   213,
     214,   214,   216,   215,   217,   218,   219,   219,   220,   220,
     220,   220,   221,   221,   222,   222,   223,   224,   224,   225,
     225,   226,   227,   227,   228,   228,   229,   229,   229,   230,
     230,   231,   232,   231,   233,   233,   233,   233,   233,   234,
     235,   234,   236,   237,   238,   239,   241,   240,   242,   242,
     242,   242,   242,   242,   243,   243,   244,   244,   244,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   246,   247,
     247,   247,   248,   248,   249,   249,   249,   249,   249,   249,
     250,   250,   251,   251,   252,   252,   252,   253,   253,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   255,   256,   256,   256,   257,   259,   258,
     260,   260,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   262,   262,   262,   263,   265,   266,   264,
     267,   267,   267,   268,   268,   268,   269,   269,   271,   272,
     270,   270,   273,   273,   273,   273,   274,   275,   276,   276,
     276,   277,   277,   277,   278,   278,   279,   279,   279,   280,
     281,   281,   282,   282,   283,   285,   286,   284,   287,   288,
     284,   289,   290,   284,   292,   293,   291,   294,   294,   294,
     295,   295,   296,   296,   296,   297,   297,   297,   298,   298,
     298,   298,   299,   299,   300,   300,   301,   301,   302,   302,
     302,   302,   302,   302,   302,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   304,   304,   304,   304,   305,   305,
     306,   306,   307,   307,   308,   309,   310,   308,   311,   312,
     308,   313,   313,   314,   315,   313,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   317,   318,   316,   316,   316,
     316,   319,   320,   316,   316,   316,   321,   322,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   324,   324,
     325,   325,   325,   326,   326,   327,   327,   327,   328,   329,
     330,   329,   331,   329,   332,   329,   329,   333,   333,   333,
     334,   334,   335,   335,   336,   336,   337,   338,   338,   339,
     339,   340,   340,   340,   340,   340,   340,   341,   341,   341,
     342,   342,   343,   343,   343,   343,   343,   344,   344,   344,
     344,   344,   345,   346,   345,   347,   347,   348,   348,   348,
     349,   350,   349,   351,   351,   351,   353,   352,   354,   354,
     355,   355,   356,   356,   356,   357,   358,   358,   359,   359,
     360,   360,   361,   362,   362,   363,   363,   363,   365,   366,
     364,   367,   367,   367,   367,   367,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   369,   369,   369,   369,   369,   369,   370,
     371,   371,   371,   372,   372,   374,   375,   373,   376,   376,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   378,   379,
     377,   377,   380,   381,   377,   382,   383,   377,   384,   385,
     377,   377,   386,   387,   377,   388,   389,   377,   377,   390,
     391,   377,   392,   393,   377,   377,   394,   395,   377,   396,
     397,   377,   398,   399,   377,   400,   401,   377,   402,   402,
     402,   404,   405,   403,   407,   406,   408,   408,   408,   408,
     409,   409,   409,   409,   410,   410,   411,   411,   412,   412,
     412,   412,   412,   412,   413,   413,   413,   414,   414,   415,
     415,   416,   416,   417,   417,   418,   419,   419,   420,   420
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     0,     1,     1,     1,     1,
       4,     1,     1,     2,     2,     3,     0,     2,     4,     3,
       1,     2,     0,     4,     2,     2,     1,     1,     1,     2,
       3,     3,     2,     4,     0,     1,     2,     1,     3,     1,
       3,     3,     3,     2,     1,     1,     0,     2,     4,     1,
       1,     0,     0,     3,     1,     1,     1,     1,     1,     4,
       0,     6,     6,     2,     3,     3,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     4,     1,     2,     3,     3,     3,     3,
       1,     3,     0,     3,     0,     2,     3,     0,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     3,     3,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     1,     3,     0,     4,
       3,     7,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       2,     2,     2,     0,     2,     2,     3,     0,     0,     7,
       3,     2,     2,     1,     3,     2,     2,     3,     0,     0,
       5,     1,     2,     4,     5,     2,     1,     1,     1,     2,
       3,     2,     2,     3,     2,     3,     2,     2,     3,     4,
       1,     1,     1,     0,     3,     0,     0,     7,     0,     0,
       7,     0,     0,     7,     0,     0,     6,     5,     8,    10,
       1,     3,     1,     2,     3,     1,     1,     2,     2,     2,
       2,     2,     1,     3,     0,     4,     1,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     6,     8,
       5,     6,     1,     4,     3,     0,     0,     8,     0,     0,
       9,     3,     4,     0,     0,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     3,     4,     5,     4,
       5,     3,     4,     1,     3,     4,     3,     4,     2,     4,
       4,     7,     8,     3,     5,     0,     0,     8,     3,     3,
       3,     0,     0,     8,     3,     4,     0,     0,     9,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       4,     1,     4,     4,     4,     4,     4,     1,     6,     7,
       6,     6,     7,     7,     6,     7,     6,     6,     0,     4,
       0,     1,     1,     0,     1,     0,     1,     1,     4,     0,
       0,     4,     0,     8,     0,     9,     5,     2,     3,     4,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     2,     3,     5,     3,     3,     1,     1,     1,
       0,     1,     1,     4,     3,     3,     5,     4,     6,     5,
       5,     4,     0,     0,     4,     0,     1,     0,     1,     1,
       6,     0,     6,     0,     3,     5,     0,     4,     2,     3,
       4,     2,     0,     1,     1,     1,     7,     9,     0,     2,
       0,     1,     3,     1,     1,     0,     1,     1,     0,     0,
       9,     1,     4,     3,     3,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     1,     3,     0,     0,     6,     1,     3,
       1,     1,     1,     1,     4,     3,     4,     2,     2,     3,
       2,     3,     2,     2,     3,     3,     3,     2,     0,     0,
       6,     2,     0,     0,     6,     0,     0,     6,     0,     0,
       6,     1,     0,     0,     6,     0,     0,     7,     1,     0,
       0,     6,     0,     0,     7,     1,     0,     0,     6,     0,
       0,     7,     0,     0,     6,     0,     0,     6,     1,     3,
       3,     0,     0,     8,     0,     7,     1,     1,     1,     1,
       3,     3,     5,     5,     1,     3,     0,     2,     6,     5,
       7,     8,     6,     8,     1,     3,     3,     3,     1,     1,
       3,     5,     5,     1,     3,     4,     0,     3,    10,    10
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = DAS_YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == DAS_YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use DAS_YYerror or DAS_YYUNDEF. */
#define YYERRCODE DAS_YYUNDEF

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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL

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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !DAS_YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_NAME: /* "name"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_KEYWORD: /* "keyword"  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_module_name: /* module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_character_sequence: /* character_sequence  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_constant: /* string_constant  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_string_builder_body: /* string_builder_body  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_string_builder: /* string_builder  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_reader: /* expr_reader  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_keyword_or_name: /* keyword_or_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_require_module_name: /* require_module_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_label: /* expression_label  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_goto: /* expression_goto  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_else: /* expression_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_else_one_liner: /* expression_else_one_liner  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_if_one_liner: /* expression_if_one_liner  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_if_then_else: /* expression_if_then_else  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_for_loop: /* expression_for_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_unsafe: /* expression_unsafe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_while_loop: /* expression_while_loop  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with: /* expression_with  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_with_alias: /* expression_with_alias  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_annotation_argument_value: /* annotation_argument_value  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_value_list: /* annotation_argument_value_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_argument_name: /* annotation_argument_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_argument: /* annotation_argument  */
            { delete ((*yyvaluep).aa); }
        break;

    case YYSYMBOL_annotation_argument_list: /* annotation_argument_list  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_annotation_declaration_name: /* annotation_declaration_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_annotation_declaration_basic: /* annotation_declaration_basic  */
            { delete ((*yyvaluep).fa); }
        break;

    case YYSYMBOL_annotation_declaration: /* annotation_declaration  */
            { delete ((*yyvaluep).fa); }
        break;

    case YYSYMBOL_annotation_list: /* annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_annotation_list: /* optional_annotation_list  */
            { delete ((*yyvaluep).faList); }
        break;

    case YYSYMBOL_optional_function_argument_list: /* optional_function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_optional_function_type: /* optional_function_type  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_function_name: /* function_name  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_function_declaration_header: /* function_declaration_header  */
            { ((*yyvaluep).pFuncDecl)->delRef(); }
        break;

    case YYSYMBOL_function_declaration: /* function_declaration  */
            { ((*yyvaluep).pFuncDecl)->delRef(); }
        break;

    case YYSYMBOL_expression_block: /* expression_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_any: /* expression_any  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expressions: /* expressions  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_keyword: /* expr_keyword  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_keyword: /* expression_keyword  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_pipe: /* expr_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_name_in_namespace: /* name_in_namespace  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_expression_delete: /* expression_delete  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_new_type_declaration: /* new_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_expr_new: /* expr_new  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_break: /* expression_break  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_continue: /* expression_continue  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_return_no_pipe: /* expression_return_no_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_return: /* expression_return  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_yield_no_pipe: /* expression_yield_no_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_yield: /* expression_yield  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_try_catch: /* expression_try_catch  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expression_let: /* expression_let  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_cast: /* expr_cast  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_decl: /* expr_type_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_type_info: /* expr_type_info  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_block_or_simple_block: /* block_or_simple_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_capture_entry: /* capture_entry  */
            { delete ((*yyvaluep).pCapt); }
        break;

    case YYSYMBOL_capture_list: /* capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_optional_capture_list: /* optional_capture_list  */
            { delete ((*yyvaluep).pCaptList); }
        break;

    case YYSYMBOL_expr_block: /* expr_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_numeric_const: /* expr_numeric_const  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign: /* expr_assign  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_assign_pipe: /* expr_assign_pipe  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_named_call: /* expr_named_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_method_call: /* expr_method_call  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_func_addr_name: /* func_addr_name  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_func_addr_expr: /* func_addr_expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_field: /* expr_field  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr: /* expr  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_expr_mtag: /* expr_mtag  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_field_annotation: /* optional_field_annotation  */
            { delete ((*yyvaluep).aaList); }
        break;

    case YYSYMBOL_structure_variable_declaration: /* structure_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_struct_variable_declaration_list: /* struct_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_function_argument_declaration: /* function_argument_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_function_argument_list: /* function_argument_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_tuple_type: /* tuple_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_tuple_type_list: /* tuple_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variant_type: /* variant_type  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_variant_type_list: /* variant_type_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_variable_declaration: /* variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_let_variable_name_with_pos_list: /* let_variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case YYSYMBOL_let_variable_declaration: /* let_variable_declaration  */
            { delete ((*yyvaluep).pVarDecl); }
        break;

    case YYSYMBOL_global_variable_declaration_list: /* global_variable_declaration_list  */
            { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
        break;

    case YYSYMBOL_enum_list: /* enum_list  */
            { if ( ((*yyvaluep).pEnum)->use_count()==1 ) delete ((*yyvaluep).pEnum); }
        break;

    case YYSYMBOL_enum_name: /* enum_name  */
            { if ( ((*yyvaluep).pEnum)->use_count()==1 ) delete ((*yyvaluep).pEnum); }
        break;

    case YYSYMBOL_optional_structure_parent: /* optional_structure_parent  */
            { delete ((*yyvaluep).s); }
        break;

    case YYSYMBOL_variable_name_with_pos_list: /* variable_name_with_pos_list  */
            { delete ((*yyvaluep).pNameWithPosList); }
        break;

    case YYSYMBOL_structure_type_declaration: /* structure_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_auto_type_declaration: /* auto_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_bitfield_bits: /* bitfield_bits  */
            { delete ((*yyvaluep).pNameList); }
        break;

    case YYSYMBOL_bitfield_type_declaration: /* bitfield_type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_table_type_pair: /* table_type_pair  */
            { delete ((*yyvaluep).aTypePair).firstType; delete ((*yyvaluep).aTypePair).secondType; }
        break;

    case YYSYMBOL_type_declaration_no_options: /* type_declaration_no_options  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_type_declaration: /* type_declaration  */
            { delete ((*yyvaluep).pTypeDecl); }
        break;

    case YYSYMBOL_make_decl: /* make_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_fields: /* make_struct_fields  */
            { delete ((*yyvaluep).pMakeStruct); }
        break;

    case YYSYMBOL_make_struct_dim: /* make_struct_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_optional_block: /* optional_block  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_struct_decl: /* make_struct_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_tuple: /* make_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_map_tuple: /* make_map_tuple  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim: /* make_dim  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_dim_decl: /* make_dim_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table: /* make_table  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_make_table_decl: /* make_table_decl  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension_where: /* array_comprehension_where  */
            { delete ((*yyvaluep).pExpression); }
        break;

    case YYSYMBOL_array_comprehension: /* array_comprehension  */
            { delete ((*yyvaluep).pExpression); }
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined DAS_YYLTYPE_IS_TRIVIAL && DAS_YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = DAS_YYEMPTY; /* Cause a token to be read.  */

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == DAS_YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= DAS_YYEOF)
    {
      yychar = DAS_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == DAS_YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = DAS_YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = DAS_YYEMPTY;
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
  case 15: /* optional_public_or_private_module: %empty  */
                        { (yyval.b) = yyextra->g_Program->policies.default_module_public; }
    break;

  case 16: /* optional_public_or_private_module: "public"  */
                        { (yyval.b) = true; }
    break;

  case 17: /* optional_public_or_private_module: "private"  */
                        { (yyval.b) = false; }
    break;

  case 18: /* module_name: '$'  */
                    { (yyval.s) = new string("$"); }
    break;

  case 19: /* module_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 20: /* module_declaration: "module" module_name optional_shared optional_public_or_private_module  */
                                                                                                      {
        yyextra->g_Program->thisModuleName = *(yyvsp[-2].s);
        yyextra->g_Program->thisModule->isPublic = (yyvsp[0].b);
        yyextra->g_Program->thisModule->isModule = true;
        if ( yyextra->g_Program->thisModule->name.empty() ) {
            yyextra->g_Program->thisModule->name = *(yyvsp[-2].s);
        } else if ( yyextra->g_Program->thisModule->name != *(yyvsp[-2].s) ){
            das_yyerror(scanner,"this module already has a name " + yyextra->g_Program->thisModule->name,tokAt(scanner,(yylsp[-2])),
                CompilationError::module_already_has_a_name);
        }
        if ( !yyextra->g_Program->policies.ignore_shared_modules ) {
            yyextra->g_Program->promoteToBuiltin = (yyvsp[-1].b);
        }
        delete (yyvsp[-2].s);
    }
    break;

  case 21: /* character_sequence: STRING_CHARACTER  */
                                                            { (yyval.s) = new string(); *(yyval.s) += (yyvsp[0].ch); }
    break;

  case 22: /* character_sequence: STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = new string(); *(yyval.s) += "\\\\"; }
    break;

  case 23: /* character_sequence: character_sequence STRING_CHARACTER  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += (yyvsp[0].ch); }
    break;

  case 24: /* character_sequence: character_sequence STRING_CHARACTER_ESC  */
                                                            { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += "\\\\"; }
    break;

  case 25: /* string_constant: "start of the string" character_sequence "end of the string"  */
                                                           { (yyval.s) = (yyvsp[-1].s); }
    break;

  case 26: /* string_builder_body: %empty  */
        {
        (yyval.pExpression) = new ExprStringBuilder();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 27: /* string_builder_body: string_builder_body character_sequence  */
                                                           {
        bool err;
        auto esconst = unescapeString(*(yyvsp[0].s),&err);
        if ( err ) das_yyerror(scanner,"invalid escape sequence",tokAt(scanner,(yylsp[-1])), CompilationError::invalid_escape_sequence);
        auto sc = make_smart<ExprConstString>(tokAt(scanner,(yylsp[0])),esconst);
        delete (yyvsp[0].s);
        static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression))->elements.push_back(sc);
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 28: /* string_builder_body: string_builder_body "{" expr "}"  */
                                                                                {
        auto se = ExpressionPtr((yyvsp[-1].pExpression));
        static_cast<ExprStringBuilder *>((yyvsp[-3].pExpression))->elements.push_back(se);
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 29: /* string_builder: "start of the string" string_builder_body "end of the string"  */
                                                                   {
        auto strb = static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression));
        if ( strb->elements.size()==0 ) {
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),"");
            delete (yyvsp[-1].pExpression);
        } else if ( strb->elements.size()==1 && strb->elements[0]->rtti_isStringConstant() ) {
            auto sconst = static_pointer_cast<ExprConstString>(strb->elements[0]);
            (yyval.pExpression) = new ExprConstString(tokRangeAt(scanner,(yylsp[-2]),(yylsp[0])),sconst->text);
            delete (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        }
    }
    break;

  case 30: /* reader_character_sequence: STRING_CHARACTER  */
                               {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 31: /* reader_character_sequence: reader_character_sequence STRING_CHARACTER  */
                                                                {
        if ( !yyextra->g_ReaderMacro->accept(yyextra->g_Program.get(), yyextra->g_Program->thisModule.get(), yyextra->g_ReaderExpr, (yyvsp[0].ch), tokAt(scanner,(yylsp[0]))) ) {
            das_yyend_reader(scanner);
        }
    }
    break;

  case 32: /* $@1: %empty  */
                                        {
        auto macros = yyextra->g_Program->getReaderMacro(*(yyvsp[0].s));
        if ( macros.size()==0 ) {
            das_yyerror(scanner,"reader macro " + *(yyvsp[0].s) + " not found",tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( macros.size()>1 ) {
            string options;
            for ( auto & x : macros ) {
                options += "\t" + x->module->name + "::" + x->name + "\n";
            }
            das_yyerror(scanner,"too many options for the reader macro " + *(yyvsp[0].s) +  "\n" + options, tokAt(scanner,(yylsp[0])),
                CompilationError::unsupported_read_macro);
        } else if ( yychar != '~' ) {
            das_yyerror(scanner,"expecting ~ after the reader macro", tokAt(scanner,(yylsp[0])),
                CompilationError::syntax_error);
        } else {
            yyextra->g_ReaderMacro = macros.back().get();
            yyextra->g_ReaderExpr = new ExprReader(tokAt(scanner,(yylsp[-1])),yyextra->g_ReaderMacro);
            yyclearin ;
            das_yybegin_reader(scanner);
        }
    }
    break;

  case 33: /* expr_reader: '%' name_in_namespace $@1 reader_character_sequence  */
                                     {
        yyextra->g_ReaderExpr->at = tokRangeAt(scanner,(yylsp[-3]),(yylsp[0]));
        (yyval.pExpression) = yyextra->g_ReaderExpr;
        delete (yyvsp[-2].s);
        yyextra->g_ReaderMacro = nullptr;
        yyextra->g_ReaderExpr = nullptr;
    }
    break;

  case 34: /* options_declaration: "options" annotation_argument_list  */
                                                   {
        if ( yyextra->g_Program->options.size() ) {
            yyextra->g_Program->options.insert ( yyextra->g_Program->options.begin(),
                (yyvsp[0].aaList)->begin(), (yyvsp[0].aaList)->end() );
        } else {
            swap ( yyextra->g_Program->options, *(yyvsp[0].aaList) );
        }
        auto opt = yyextra->g_Program->options.find("indenting", tInt);
        if (opt)
        {
            if (opt->iValue != 0 && opt->iValue != 2 && opt->iValue != 4 && opt->iValue != 8)//this is error
                yyextra->das_tab_size = yyextra->das_def_tab_size;
            else
                yyextra->das_tab_size = opt->iValue ? opt->iValue : yyextra->das_def_tab_size;//0 is default
            yyextra->g_FileAccessStack.back()->tabSize = yyextra->das_tab_size;
        }
        delete (yyvsp[0].aaList);
    }
    break;

  case 36: /* keyword_or_name: "name"  */
                        { (yyval.s) = (yyvsp[0].s); }
    break;

  case 37: /* keyword_or_name: "keyword"  */
                        { (yyval.s) = (yyvsp[0].s); }
    break;

  case 38: /* require_module_name: keyword_or_name  */
                              {
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 39: /* require_module_name: '%' require_module_name  */
                                     {
        *(yyvsp[0].s) = "%" + *(yyvsp[0].s);
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 40: /* require_module_name: require_module_name '.' keyword_or_name  */
                                                           {
        *(yyvsp[-2].s) += ".";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 41: /* require_module_name: require_module_name '/' keyword_or_name  */
                                                           {
        *(yyvsp[-2].s) += "/";
        *(yyvsp[-2].s) += *(yyvsp[0].s);
        delete (yyvsp[0].s);
        (yyval.s) = (yyvsp[-2].s);
    }
    break;

  case 42: /* require_module: require_module_name is_public_module  */
                                                         {
        ast_requireModule(scanner,(yyvsp[-1].s),nullptr,(yyvsp[0].b),tokAt(scanner,(yylsp[-1])));
    }
    break;

  case 43: /* require_module: require_module_name "as" "name" is_public_module  */
                                                                              {
        ast_requireModule(scanner,(yyvsp[-3].s),(yyvsp[-1].s),(yyvsp[0].b),tokAt(scanner,(yylsp[-3])));
    }
    break;

  case 44: /* is_public_module: %empty  */
                    { (yyval.b) = false; }
    break;

  case 45: /* is_public_module: "public"  */
                    { (yyval.b) = true; }
    break;

  case 49: /* expect_error: "integer constant"  */
                   {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[0].i))] ++;
    }
    break;

  case 50: /* expect_error: "integer constant" ':' "integer constant"  */
                                      {
        yyextra->g_Program->expectErrors[CompilationError((yyvsp[-2].i))] += (yyvsp[0].i);
    }
    break;

  case 51: /* expression_label: "label" "integer constant" ':'  */
                                          {
        (yyval.pExpression) = new ExprLabel(tokAt(scanner,(yylsp[-2])),(yyvsp[-1].i));
    }
    break;

  case 52: /* expression_goto: "goto" "label" "integer constant"  */
                                                {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-2])),(yyvsp[0].i));
    }
    break;

  case 53: /* expression_goto: "goto" expr  */
                               {
        (yyval.pExpression) = new ExprGoto(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 54: /* elif_or_static_elif: "elif"  */
                          { (yyval.b) = false; }
    break;

  case 55: /* elif_or_static_elif: "static_elif"  */
                          { (yyval.b) = true; }
    break;

  case 56: /* expression_else: %empty  */
                                                           { (yyval.pExpression) = nullptr; }
    break;

  case 57: /* expression_else: "else" expression_block  */
                                                           { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 58: /* expression_else: elif_or_static_elif expr expression_block expression_else  */
                                                                                          {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 59: /* if_or_static_if: "if"  */
                        { (yyval.b) = false; }
    break;

  case 60: /* if_or_static_if: "static_if"  */
                        { (yyval.b) = true; }
    break;

  case 61: /* expression_else_one_liner: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 62: /* $@2: %empty  */
                      { yyextra->das_need_oxford_comma = true; }
    break;

  case 63: /* expression_else_one_liner: "else" $@2 expression_if_one_liner  */
                                                                                                 {
            (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 64: /* expression_if_one_liner: expr  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 65: /* expression_if_one_liner: expression_return_no_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 66: /* expression_if_one_liner: expression_yield_no_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 67: /* expression_if_one_liner: expression_break  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 68: /* expression_if_one_liner: expression_continue  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 69: /* expression_if_then_else: if_or_static_if expr expression_block expression_else  */
                                                                                      {
        auto eite = new ExprIfThenElse(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        eite->isStatic = (yyvsp[-3].b);
        (yyval.pExpression) = eite;
    }
    break;

  case 70: /* $@3: %empty  */
                                                     { yyextra->das_need_oxford_comma = true; }
    break;

  case 71: /* expression_if_then_else: expression_if_one_liner "if" $@3 expr expression_else_one_liner ';'  */
                                                                                                                                                   {
        (yyval.pExpression) = new ExprIfThenElse(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr(ast_wrapInBlock((yyvsp[-5].pExpression))),(yyvsp[-1].pExpression) ? ExpressionPtr(ast_wrapInBlock((yyvsp[-1].pExpression))) : nullptr);
    }
    break;

  case 72: /* expression_for_loop: "for" variable_name_with_pos_list "in" expr_list ';' expression_block  */
                                                                                                           {
        (yyval.pExpression) = ast_forLoop(scanner,(yyvsp[-4].pNameWithPosList),(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 73: /* expression_unsafe: "unsafe" expression_block  */
                                                 {
        auto pUnsafe = new ExprUnsafe(tokAt(scanner,(yylsp[-1])));
        pUnsafe->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pUnsafe;
    }
    break;

  case 74: /* expression_while_loop: "while" expr expression_block  */
                                                               {
        auto pWhile = new ExprWhile(tokAt(scanner,(yylsp[-2])));
        pWhile->cond = ExpressionPtr((yyvsp[-1].pExpression));
        pWhile->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pWhile;
    }
    break;

  case 75: /* expression_with: "with" expr expression_block  */
                                                         {
        auto pWith = new ExprWith(tokAt(scanner,(yylsp[-2])));
        pWith->with = ExpressionPtr((yyvsp[-1].pExpression));
        pWith->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyval.pExpression) = pWith;
    }
    break;

  case 76: /* $@4: %empty  */
                                        { yyextra->das_need_oxford_comma=true; }
    break;

  case 77: /* expression_with_alias: "assume" "name" '=' $@4 expr  */
                                                                                               {
        (yyval.pExpression) = new ExprAssume(tokAt(scanner,(yylsp[-4])), *(yyvsp[-3].s), (yyvsp[0].pExpression) );
        delete (yyvsp[-3].s);
    }
    break;

  case 78: /* annotation_argument_value: string_constant  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 79: /* annotation_argument_value: "name"  */
                                 { (yyval.aa) = new AnnotationArgument("",*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 80: /* annotation_argument_value: "integer constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",(yyvsp[0].i)); }
    break;

  case 81: /* annotation_argument_value: "floating point constant"  */
                                 { (yyval.aa) = new AnnotationArgument("",float((yyvsp[0].fd))); }
    break;

  case 82: /* annotation_argument_value: "true"  */
                                 { (yyval.aa) = new AnnotationArgument("",true); }
    break;

  case 83: /* annotation_argument_value: "false"  */
                                 { (yyval.aa) = new AnnotationArgument("",false); }
    break;

  case 84: /* annotation_argument_value_list: annotation_argument_value  */
                                       {
        (yyval.aaList) = new AnnotationArgumentList();
        (yyval.aaList)->push_back(*(yyvsp[0].aa));
        delete (yyvsp[0].aa);
    }
    break;

  case 85: /* annotation_argument_value_list: annotation_argument_value_list ',' annotation_argument_value  */
                                                                                {
            (yyval.aaList) = (yyvsp[-2].aaList);
            (yyval.aaList)->push_back(*(yyvsp[0].aa));
            delete (yyvsp[0].aa);
    }
    break;

  case 86: /* annotation_argument_name: "name"  */
                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 87: /* annotation_argument_name: "type"  */
                    { (yyval.s) = new string("type"); }
    break;

  case 88: /* annotation_argument_name: "in"  */
                    { (yyval.s) = new string("in"); }
    break;

  case 89: /* annotation_argument: annotation_argument_name '=' string_constant  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 90: /* annotation_argument: annotation_argument_name '=' "name"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[0].s); delete (yyvsp[-2].s); }
    break;

  case 91: /* annotation_argument: annotation_argument_name '=' "integer constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),(yyvsp[0].i),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 92: /* annotation_argument: annotation_argument_name '=' "floating point constant"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),float((yyvsp[0].fd)),tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 93: /* annotation_argument: annotation_argument_name '=' "true"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),true,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 94: /* annotation_argument: annotation_argument_name '=' "false"  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),false,tokAt(scanner,(yylsp[-2]))); delete (yyvsp[-2].s); }
    break;

  case 95: /* annotation_argument: annotation_argument_name  */
                                                                    { (yyval.aa) = new AnnotationArgument(*(yyvsp[0].s),true,tokAt(scanner,(yylsp[0]))); delete (yyvsp[0].s); }
    break;

  case 96: /* annotation_argument: annotation_argument_name '=' '(' annotation_argument_value_list ')'  */
                                                                                          {
        { (yyval.aa) = new AnnotationArgument(*(yyvsp[-4].s),(yyvsp[-1].aaList),tokAt(scanner,(yylsp[-4]))); delete (yyvsp[-4].s); }
    }
    break;

  case 97: /* annotation_argument_list: annotation_argument  */
                                  {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,new AnnotationArgumentList(),(yyvsp[0].aa));
    }
    break;

  case 98: /* annotation_argument_list: annotation_argument_list ',' annotation_argument  */
                                                                    {
        (yyval.aaList) = ast_annotationArgumentListEntry(scanner,(yyvsp[-2].aaList),(yyvsp[0].aa));
    }
    break;

  case 99: /* annotation_declaration_name: name_in_namespace  */
                                    { (yyval.s) = (yyvsp[0].s); }
    break;

  case 100: /* annotation_declaration_name: "require"  */
                                    { (yyval.s) = new string("require"); }
    break;

  case 101: /* annotation_declaration_name: "private"  */
                                    { (yyval.s) = new string("private"); }
    break;

  case 102: /* annotation_declaration_basic: annotation_declaration_name  */
                                          {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[0]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0]))) ) {
            (yyval.fa)->annotation = ann;
        }
        delete (yyvsp[0].s);
    }
    break;

  case 103: /* annotation_declaration_basic: annotation_declaration_name '(' annotation_argument_list ')'  */
                                                                                 {
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner,(yylsp[-3]));
        if ( auto ann = findAnnotation(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3]))) ) {
            (yyval.fa)->annotation = ann;
        }
        swap ( (yyval.fa)->arguments, *(yyvsp[-1].aaList) );
        delete (yyvsp[-1].aaList);
        delete (yyvsp[-3].s);
    }
    break;

  case 104: /* annotation_declaration: annotation_declaration_basic  */
                                          {
        (yyval.fa) = (yyvsp[0].fa);
    }
    break;

  case 105: /* annotation_declaration: '!' annotation_declaration  */
                                              {
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Not,(yyvsp[0].fa),nullptr);
    }
    break;

  case 106: /* annotation_declaration: annotation_declaration "&&" annotation_declaration  */
                                                                              {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::And,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 107: /* annotation_declaration: annotation_declaration "||" annotation_declaration  */
                                                                            {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Or,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 108: /* annotation_declaration: annotation_declaration "^^" annotation_declaration  */
                                                                              {
        if ( !(yyvsp[-2].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[-2].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[-2])),
                CompilationError::invalid_annotation); }
        if ( !(yyvsp[0].fa)->annotation->rtti_isFunctionAnnotation() || !((FunctionAnnotation *)((yyvsp[0].fa)->annotation.get()))->isSpecialized() ) {
            das_yyerror(scanner,"can only run logical operations on contracts", tokAt(scanner, (yylsp[0])),
                CompilationError::invalid_annotation); }
        (yyval.fa) = new AnnotationDeclaration();
        (yyval.fa)->at = tokAt(scanner, (yylsp[-1]));
        (yyval.fa)->annotation = newLogicAnnotation(LogicAnnotationOp::Xor,(yyvsp[-2].fa),(yyvsp[0].fa));
    }
    break;

  case 109: /* annotation_declaration: '(' annotation_declaration ')'  */
                                            {
        (yyval.fa) = (yyvsp[-1].fa);
    }
    break;

  case 110: /* annotation_list: annotation_declaration  */
                                    {
            (yyval.faList) = new AnnotationList();
            (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 111: /* annotation_list: annotation_list ',' annotation_declaration  */
                                                              {
        (yyval.faList) = (yyvsp[-2].faList);
        (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
    break;

  case 112: /* optional_annotation_list: %empty  */
                                        { (yyval.faList) = nullptr; }
    break;

  case 113: /* optional_annotation_list: '[' annotation_list ']'  */
                                        { (yyval.faList) = (yyvsp[-1].faList); }
    break;

  case 114: /* optional_function_argument_list: %empty  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 115: /* optional_function_argument_list: '(' ')'  */
                                                { (yyval.pVarDeclList) = nullptr; }
    break;

  case 116: /* optional_function_argument_list: '(' function_argument_list ')'  */
                                                { (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList); }
    break;

  case 117: /* optional_function_type: %empty  */
        {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
    }
    break;

  case 118: /* optional_function_type: ':' type_declaration  */
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 119: /* function_name: "name"  */
                          {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyval.s) = (yyvsp[0].s);
    }
    break;

  case 120: /* function_name: "operator" '!'  */
                             { (yyval.s) = new string("!"); }
    break;

  case 121: /* function_name: "operator" '~'  */
                             { (yyval.s) = new string("~"); }
    break;

  case 122: /* function_name: "operator" "+="  */
                             { (yyval.s) = new string("+="); }
    break;

  case 123: /* function_name: "operator" "-="  */
                             { (yyval.s) = new string("-="); }
    break;

  case 124: /* function_name: "operator" "*="  */
                             { (yyval.s) = new string("*="); }
    break;

  case 125: /* function_name: "operator" "/="  */
                             { (yyval.s) = new string("/="); }
    break;

  case 126: /* function_name: "operator" "%="  */
                             { (yyval.s) = new string("%="); }
    break;

  case 127: /* function_name: "operator" "&="  */
                             { (yyval.s) = new string("&="); }
    break;

  case 128: /* function_name: "operator" "|="  */
                             { (yyval.s) = new string("|="); }
    break;

  case 129: /* function_name: "operator" "^="  */
                             { (yyval.s) = new string("^="); }
    break;

  case 130: /* function_name: "operator" "&&="  */
                                { (yyval.s) = new string("&&="); }
    break;

  case 131: /* function_name: "operator" "||="  */
                                { (yyval.s) = new string("||="); }
    break;

  case 132: /* function_name: "operator" "^^="  */
                                { (yyval.s) = new string("^^="); }
    break;

  case 133: /* function_name: "operator" "&&"  */
                             { (yyval.s) = new string("&&"); }
    break;

  case 134: /* function_name: "operator" "||"  */
                             { (yyval.s) = new string("||"); }
    break;

  case 135: /* function_name: "operator" "^^"  */
                             { (yyval.s) = new string("^^"); }
    break;

  case 136: /* function_name: "operator" '+'  */
                             { (yyval.s) = new string("+"); }
    break;

  case 137: /* function_name: "operator" '-'  */
                             { (yyval.s) = new string("-"); }
    break;

  case 138: /* function_name: "operator" '*'  */
                             { (yyval.s) = new string("*"); }
    break;

  case 139: /* function_name: "operator" '/'  */
                             { (yyval.s) = new string("/"); }
    break;

  case 140: /* function_name: "operator" '%'  */
                             { (yyval.s) = new string("%"); }
    break;

  case 141: /* function_name: "operator" '<'  */
                             { (yyval.s) = new string("<"); }
    break;

  case 142: /* function_name: "operator" '>'  */
                             { (yyval.s) = new string(">"); }
    break;

  case 143: /* function_name: "operator" ".."  */
                             { (yyval.s) = new string("interval"); }
    break;

  case 144: /* function_name: "operator" "=="  */
                             { (yyval.s) = new string("=="); }
    break;

  case 145: /* function_name: "operator" "!="  */
                             { (yyval.s) = new string("!="); }
    break;

  case 146: /* function_name: "operator" "<="  */
                             { (yyval.s) = new string("<="); }
    break;

  case 147: /* function_name: "operator" ">="  */
                             { (yyval.s) = new string(">="); }
    break;

  case 148: /* function_name: "operator" '&'  */
                             { (yyval.s) = new string("&"); }
    break;

  case 149: /* function_name: "operator" '|'  */
                             { (yyval.s) = new string("|"); }
    break;

  case 150: /* function_name: "operator" '^'  */
                             { (yyval.s) = new string("^"); }
    break;

  case 151: /* function_name: "++" "operator"  */
                             { (yyval.s) = new string("++"); }
    break;

  case 152: /* function_name: "--" "operator"  */
                             { (yyval.s) = new string("--"); }
    break;

  case 153: /* function_name: "operator" "++"  */
                             { (yyval.s) = new string("+++"); }
    break;

  case 154: /* function_name: "operator" "--"  */
                             { (yyval.s) = new string("---"); }
    break;

  case 155: /* function_name: "operator" "<<"  */
                             { (yyval.s) = new string("<<"); }
    break;

  case 156: /* function_name: "operator" ">>"  */
                             { (yyval.s) = new string(">>"); }
    break;

  case 157: /* function_name: "operator" "<<="  */
                             { (yyval.s) = new string("<<="); }
    break;

  case 158: /* function_name: "operator" ">>="  */
                             { (yyval.s) = new string(">>="); }
    break;

  case 159: /* function_name: "operator" "<<<"  */
                             { (yyval.s) = new string("<<<"); }
    break;

  case 160: /* function_name: "operator" ">>>"  */
                             { (yyval.s) = new string(">>>"); }
    break;

  case 161: /* function_name: "operator" "<<<="  */
                             { (yyval.s) = new string("<<<="); }
    break;

  case 162: /* function_name: "operator" ">>>="  */
                             { (yyval.s) = new string(">>>="); }
    break;

  case 163: /* function_name: "operator" '[' ']'  */
                             { (yyval.s) = new string("[]"); }
    break;

  case 164: /* function_name: "operator" "?[" ']'  */
                                { (yyval.s) = new string("?[]"); }
    break;

  case 165: /* function_name: "operator" '.'  */
                             { (yyval.s) = new string("."); }
    break;

  case 166: /* function_name: "operator" "?."  */
                             { (yyval.s) = new string("?."); }
    break;

  case 167: /* function_name: "operator" '.' "name"  */
                                       { (yyval.s) = new string(".`"+*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 168: /* function_name: "operator" "?." "name"  */
                                       { (yyval.s) = new string("?.`"+*(yyvsp[0].s)); delete (yyvsp[0].s);}
    break;

  case 169: /* function_name: "operator" ":="  */
                                { (yyval.s) = new string("clone"); }
    break;

  case 170: /* function_name: "operator" "delete"  */
                                { (yyval.s) = new string("finalize"); }
    break;

  case 171: /* function_name: "operator" "??"  */
                           { (yyval.s) = new string("??"); }
    break;

  case 172: /* function_name: "operator" "is"  */
                            { (yyval.s) = new string("`is"); }
    break;

  case 173: /* function_name: "operator" "as"  */
                            { (yyval.s) = new string("`as"); }
    break;

  case 174: /* function_name: "operator" "is" "name"  */
                                       { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "`is`" + *(yyvsp[0].s); }
    break;

  case 175: /* function_name: "operator" "as" "name"  */
                                       { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "`as`" + *(yyvsp[0].s); }
    break;

  case 176: /* function_name: "operator" '?' "as"  */
                                { (yyval.s) = new string("?as"); }
    break;

  case 177: /* function_name: "operator" '?' "as" "name"  */
                                           { (yyval.s) = (yyvsp[0].s); *(yyvsp[0].s) = "?as`" + *(yyvsp[0].s); }
    break;

  case 178: /* function_name: "bool"  */
                     { (yyval.s) = new string("bool"); }
    break;

  case 179: /* function_name: "string"  */
                     { (yyval.s) = new string("string"); }
    break;

  case 180: /* function_name: "int"  */
                     { (yyval.s) = new string("int"); }
    break;

  case 181: /* function_name: "int2"  */
                     { (yyval.s) = new string("int2"); }
    break;

  case 182: /* function_name: "int3"  */
                     { (yyval.s) = new string("int3"); }
    break;

  case 183: /* function_name: "int4"  */
                     { (yyval.s) = new string("int4"); }
    break;

  case 184: /* function_name: "uint"  */
                     { (yyval.s) = new string("uint"); }
    break;

  case 185: /* function_name: "uint2"  */
                     { (yyval.s) = new string("uint2"); }
    break;

  case 186: /* function_name: "uint3"  */
                     { (yyval.s) = new string("uint3"); }
    break;

  case 187: /* function_name: "uint4"  */
                     { (yyval.s) = new string("uint4"); }
    break;

  case 188: /* function_name: "float"  */
                     { (yyval.s) = new string("float"); }
    break;

  case 189: /* function_name: "float2"  */
                     { (yyval.s) = new string("float2"); }
    break;

  case 190: /* function_name: "float3"  */
                     { (yyval.s) = new string("float3"); }
    break;

  case 191: /* function_name: "float4"  */
                     { (yyval.s) = new string("float4"); }
    break;

  case 192: /* function_name: "range"  */
                     { (yyval.s) = new string("range"); }
    break;

  case 193: /* function_name: "urange"  */
                     { (yyval.s) = new string("urange"); }
    break;

  case 194: /* function_name: "range64"  */
                     { (yyval.s) = new string("range64"); }
    break;

  case 195: /* function_name: "urange64"  */
                     { (yyval.s) = new string("urange64"); }
    break;

  case 196: /* function_name: "int64"  */
                     { (yyval.s) = new string("int64"); }
    break;

  case 197: /* function_name: "uint64"  */
                     { (yyval.s) = new string("uint64"); }
    break;

  case 198: /* function_name: "double"  */
                     { (yyval.s) = new string("double"); }
    break;

  case 199: /* function_name: "int8"  */
                     { (yyval.s) = new string("int8"); }
    break;

  case 200: /* function_name: "uint8"  */
                     { (yyval.s) = new string("uint8"); }
    break;

  case 201: /* function_name: "int16"  */
                     { (yyval.s) = new string("int16"); }
    break;

  case 202: /* function_name: "uint16"  */
                     { (yyval.s) = new string("uint16"); }
    break;

  case 203: /* global_function_declaration: optional_annotation_list "def" function_declaration  */
                                                                                {
        (yyvsp[0].pFuncDecl)->atDecl = tokRangeAt(scanner,(yylsp[-1]),(yylsp[0]));
        assignDefaultArguments((yyvsp[0].pFuncDecl));
        runFunctionAnnotations(scanner, (yyvsp[0].pFuncDecl), (yyvsp[-2].faList), tokAt(scanner,(yylsp[-2])));
        if ( (yyvsp[0].pFuncDecl)->isGeneric() ) {
            if ( !yyextra->g_Program->addGeneric((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"generic function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        } else {
            if ( !yyextra->g_Program->addFunction((yyvsp[0].pFuncDecl)) ) {
                das_yyerror(scanner,"function is already defined " +
                    (yyvsp[0].pFuncDecl)->getMangledName(),(yyvsp[0].pFuncDecl)->at,
                        CompilationError::function_already_declared);
            }
        }
        (yyvsp[0].pFuncDecl)->delRef();
    }
    break;

  case 204: /* optional_public_or_private_function: %empty  */
                        { (yyval.b) = yyextra->g_thisStructure ? !yyextra->g_thisStructure->privateStructure : yyextra->g_Program->thisModule->isPublic; }
    break;

  case 205: /* optional_public_or_private_function: "private"  */
                        { (yyval.b) = false; }
    break;

  case 206: /* optional_public_or_private_function: "public"  */
                        { (yyval.b) = true; }
    break;

  case 207: /* function_declaration_header: function_name optional_function_argument_list optional_function_type  */
                                                                                                {
        (yyval.pFuncDecl) = ast_functionDeclarationHeader(scanner,(yyvsp[-2].s),(yyvsp[-1].pVarDeclList),(yyvsp[0].pTypeDecl),tokAt(scanner,(yylsp[-2])));
    }
    break;

  case 208: /* $@5: %empty  */
                                                     {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
        }
    }
    break;

  case 209: /* function_declaration: optional_public_or_private_function $@5 function_declaration_header expression_block  */
                                                                {
        (yyvsp[-1].pFuncDecl)->body = ExpressionPtr((yyvsp[0].pExpression));
        (yyvsp[-1].pFuncDecl)->privateFunction = !(yyvsp[-3].b);
        (yyval.pFuncDecl) = (yyvsp[-1].pFuncDecl);
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
        }
    }
    break;

  case 210: /* expression_block: '{' expressions '}'  */
                                                   {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
    }
    break;

  case 211: /* expression_block: '{' expressions '}' "finally" '{' expressions '}'  */
                                                                                          {
        auto pB = (ExprBlock *) (yyvsp[-5].pExpression);
        auto pF = (ExprBlock *) (yyvsp[-1].pExpression);
        swap ( pB->finalList, pF->list );
        (yyval.pExpression) = (yyvsp[-5].pExpression);
        (yyval.pExpression)->at = tokRangeAt(scanner,(yylsp[-6]),(yylsp[0]));
        delete (yyvsp[-1].pExpression);
    }
    break;

  case 212: /* expression_any: ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 213: /* expression_any: expr_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 214: /* expression_any: expr_keyword  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 215: /* expression_any: expr_assign_pipe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 216: /* expression_any: expr_assign ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 217: /* expression_any: expression_delete ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 218: /* expression_any: expression_let  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 219: /* expression_any: expression_while_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 220: /* expression_any: expression_unsafe  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 221: /* expression_any: expression_with  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 222: /* expression_any: expression_with_alias  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 223: /* expression_any: expression_for_loop  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 224: /* expression_any: expression_break ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 225: /* expression_any: expression_continue ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 226: /* expression_any: expression_return  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 227: /* expression_any: expression_yield  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 228: /* expression_any: expression_if_then_else  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 229: /* expression_any: expression_try_catch  */
                                            { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 230: /* expression_any: expression_label ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 231: /* expression_any: expression_goto ';'  */
                                            { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 232: /* expression_any: "pass" ';'  */
                                            { (yyval.pExpression) = nullptr; }
    break;

  case 233: /* expressions: %empty  */
        {
        (yyval.pExpression) = new ExprBlock();
        (yyval.pExpression)->at = LineInfo(yyextra->g_FileAccessStack.back(),
            yylloc.first_column,yylloc.first_line,yylloc.last_column,yylloc.last_line);
    }
    break;

  case 234: /* expressions: expressions expression_any  */
                                                        {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        if ( (yyvsp[0].pExpression) ) {
            static_cast<ExprBlock*>((yyvsp[-1].pExpression))->list.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        }
    }
    break;

  case 235: /* expressions: expressions error  */
                                 {
        delete (yyvsp[-1].pExpression); (yyval.pExpression) = nullptr; YYABORT;
    }
    break;

  case 236: /* expr_keyword: "keyword" expr expression_block  */
                                                           {
        auto pCall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s));
        pCall->arguments.push_back(ExpressionPtr((yyvsp[-1].pExpression)));
        auto resT = new TypeDecl(Type::autoinfer);
        auto blk = ast_makeBlock(scanner,0,nullptr,nullptr,nullptr,resT,(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[0])));
        pCall->arguments.push_back(ExpressionPtr(blk));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pCall;
    }
    break;

  case 237: /* $@6: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 238: /* $@7: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 239: /* expression_keyword: "keyword" '<' $@6 type_declaration_no_options '>' $@7 expr  */
                                                                                                                                               {
        auto pCall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),*(yyvsp[-6].s));
        auto td = new ExprTypeDecl(tokAt(scanner,(yylsp[-3])),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCall->arguments.push_back(ExpressionPtr(td));
        pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        delete (yyvsp[-6].s);
        (yyval.pExpression) = pCall;
    }
    break;

  case 240: /* expr_pipe: expr_assign " <|" expr_block  */
                                                        {
        Expression * pipeCall = (yyvsp[-2].pExpression)->tail();
        if ( pipeCall->rtti_isCallLikeExpr() ) {
            auto pCall = (ExprLooksLikeCall *) pipeCall;
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else if ( pipeCall->rtti_isVar() ) {
            // a += b <| c
            auto pVar = (ExprVar *) pipeCall;
            auto pCall = yyextra->g_Program->makeCall(pVar->at,pVar->name);
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            if ( !(yyvsp[-2].pExpression)->swap_tail(pVar,pCall) ) {
                delete pVar;
                (yyval.pExpression) = pCall;
            } else {
                (yyval.pExpression) = (yyvsp[-2].pExpression);
            }
        } else if ( pipeCall->rtti_isMakeStruct() ) {
            auto pMS = (ExprMakeStruct *) pipeCall;
            if ( pMS->block ) {
                das_yyerror(scanner,"can't pipe into [[ make structure ]]. it already has where closure",
                    tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
                delete (yyvsp[0].pExpression);
            } else {
                pMS->block = (yyvsp[0].pExpression);
            }
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            das_yyerror(scanner,"can only pipe into function call or [[ make structure ]]",
                tokAt(scanner,(yylsp[-1])),CompilationError::cant_pipe);
            delete (yyvsp[0].pExpression);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
    break;

  case 241: /* expr_pipe: "@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 242: /* expr_pipe: "@@ <|" expr_block  */
                               {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 243: /* name_in_namespace: "name"  */
                                               { (yyval.s) = (yyvsp[0].s); }
    break;

  case 244: /* name_in_namespace: "name" "::" "name"  */
                                               {
            auto ita = yyextra->das_module_alias.find(*(yyvsp[-2].s));
            if ( ita == yyextra->das_module_alias.end() ) {
                *(yyvsp[-2].s) += "::";
            } else {
                *(yyvsp[-2].s) = ita->second + "::";
            }
            *(yyvsp[-2].s) += *(yyvsp[0].s);
            delete (yyvsp[0].s);
            (yyval.s) = (yyvsp[-2].s);
        }
    break;

  case 245: /* name_in_namespace: "::" "name"  */
                                               { *(yyvsp[0].s) = "::" + *(yyvsp[0].s); (yyval.s) = (yyvsp[0].s); }
    break;

  case 246: /* expression_delete: "delete" expr  */
                                      {
        (yyval.pExpression) = new ExprDelete(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 247: /* expression_delete: "delete" "explicit" expr  */
                                                   {
        auto delExpr = new ExprDelete(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
        delExpr->native = true;
        (yyval.pExpression) = delExpr;
    }
    break;

  case 248: /* $@8: %empty  */
           { yyextra->das_arrow_depth ++; }
    break;

  case 249: /* $@9: %empty  */
                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 250: /* new_type_declaration: '<' $@8 type_declaration '>' $@9  */
                                                                                                            {
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 251: /* new_type_declaration: structure_type_declaration  */
                                               {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
    }
    break;

  case 252: /* expr_new: "new" new_type_declaration  */
                                                       {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-1])),TypeDeclPtr((yyvsp[0].pTypeDecl)),false);
    }
    break;

  case 253: /* expr_new: "new" new_type_declaration '(' ')'  */
                                                               {
        (yyval.pExpression) = new ExprNew(tokAt(scanner,(yylsp[-3])),TypeDeclPtr((yyvsp[-2].pTypeDecl)),true);
    }
    break;

  case 254: /* expr_new: "new" new_type_declaration '(' expr_list ')'  */
                                                                                    {
        auto pNew = new ExprNew(tokAt(scanner,(yylsp[-4])),TypeDeclPtr((yyvsp[-3].pTypeDecl)),true);
        (yyval.pExpression) = parseFunctionArguments(pNew,(yyvsp[-1].pExpression));
    }
    break;

  case 255: /* expr_new: "new" make_decl  */
                                    {
        (yyval.pExpression) = new ExprAscend(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 256: /* expression_break: "break"  */
                       { (yyval.pExpression) = new ExprBreak(tokAt(scanner,(yylsp[0]))); }
    break;

  case 257: /* expression_continue: "continue"  */
                          { (yyval.pExpression) = new ExprContinue(tokAt(scanner,(yylsp[0]))); }
    break;

  case 258: /* expression_return_no_pipe: "return"  */
                        {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[0])),nullptr);
    }
    break;

  case 259: /* expression_return_no_pipe: "return" expr  */
                                      {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 260: /* expression_return_no_pipe: "return" "<-" expr  */
                                             {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 261: /* expression_return: expression_return_no_pipe ';'  */
                                              {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 262: /* expression_return: "return" expr_pipe  */
                                           {
        (yyval.pExpression) = new ExprReturn(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 263: /* expression_return: "return" "<-" expr_pipe  */
                                                  {
        auto pRet = new ExprReturn(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 264: /* expression_yield_no_pipe: "yield" expr  */
                                     {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 265: /* expression_yield_no_pipe: "yield" "<-" expr  */
                                            {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 266: /* expression_yield: expression_yield_no_pipe ';'  */
                                             {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 267: /* expression_yield: "yield" expr_pipe  */
                                          {
        (yyval.pExpression) = new ExprYield(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 268: /* expression_yield: "yield" "<-" expr_pipe  */
                                                 {
        auto pRet = new ExprYield(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
    break;

  case 269: /* expression_try_catch: "try" expression_block "recover" expression_block  */
                                                                                       {
        (yyval.pExpression) = new ExprTryCatch(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 270: /* kwd_let: "let"  */
                 { (yyval.b) = true; }
    break;

  case 271: /* kwd_let: "var"  */
                 { (yyval.b) = false; }
    break;

  case 272: /* optional_in_scope: "inscope"  */
                    { (yyval.b) = true; }
    break;

  case 273: /* optional_in_scope: %empty  */
                     { (yyval.b) = false; }
    break;

  case 274: /* expression_let: kwd_let optional_in_scope let_variable_declaration  */
                                                                 {
        (yyval.pExpression) = ast_Let(scanner,(yyvsp[-2].b),(yyvsp[-1].b),(yyvsp[0].pVarDecl),tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 275: /* $@10: %empty  */
                          { yyextra->das_arrow_depth ++; }
    break;

  case 276: /* $@11: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 277: /* expr_cast: "cast" '<' $@10 type_declaration_no_options '>' $@11 expr  */
                                                                                                                                                {
        (yyval.pExpression) = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
    }
    break;

  case 278: /* $@12: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 279: /* $@13: %empty  */
                                                                                                   { yyextra->das_arrow_depth --; }
    break;

  case 280: /* expr_cast: "upcast" '<' $@12 type_declaration_no_options '>' $@13 expr  */
                                                                                                                                                  {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->upcast = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 281: /* $@14: %empty  */
                                 { yyextra->das_arrow_depth ++; }
    break;

  case 282: /* $@15: %empty  */
                                                                                                        { yyextra->das_arrow_depth --; }
    break;

  case 283: /* expr_cast: "reinterpret" '<' $@14 type_declaration_no_options '>' $@15 expr  */
                                                                                                                                                       {
        auto pCast = new ExprCast(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[0].pExpression)),TypeDeclPtr((yyvsp[-3].pTypeDecl)));
        pCast->reinterpret = true;
        (yyval.pExpression) = pCast;
    }
    break;

  case 284: /* $@16: %empty  */
                         { yyextra->das_arrow_depth ++; }
    break;

  case 285: /* $@17: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 286: /* expr_type_decl: "type" '<' $@16 type_declaration '>' $@17  */
                                                                                                                      {
        (yyval.pExpression) = new ExprTypeDecl(tokAt(scanner,(yylsp[-5])),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 287: /* expr_type_info: "typeinfo" '(' name_in_namespace expr ')'  */
                                                                         {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ptd->typeexpr);
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-4])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[-1].pExpression)));
            }
            delete (yyvsp[-2].s);
    }
    break;

  case 288: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" '>' expr ')'  */
                                                                                                {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ptd->typeexpr,*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-7])),*(yyvsp[-5].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-3].s));
            }
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 289: /* expr_type_info: "typeinfo" '(' name_in_namespace '<' "name" ';' "name" '>' expr ')'  */
                                                                                                                     {
            if ( (yyvsp[-1].pExpression)->rtti_isTypeDecl() ) {
                auto ptd = (ExprTypeDecl *)(yyvsp[-1].pExpression);
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ptd->typeexpr,*(yyvsp[-5].s),*(yyvsp[-3].s));
                delete (yyvsp[-1].pExpression);
            } else {
                (yyval.pExpression) = new ExprTypeInfo(tokAt(scanner,(yylsp[-9])),*(yyvsp[-7].s),ExpressionPtr((yyvsp[-1].pExpression)),*(yyvsp[-5].s),*(yyvsp[-3].s));
            }
            delete (yyvsp[-7].s);
            delete (yyvsp[-5].s);
            delete (yyvsp[-3].s);
    }
    break;

  case 290: /* expr_list: expr  */
                      {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 291: /* expr_list: expr_list ',' expr  */
                                            {
            (yyval.pExpression) = new ExprSequence(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
    break;

  case 292: /* block_or_simple_block: expression_block  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 293: /* block_or_simple_block: "=>" expr  */
                                        {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-1]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 294: /* block_or_simple_block: "=>" "<-" expr  */
                                               {
            auto retE = make_smart<ExprReturn>(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[0].pExpression)));
            retE->moveSemantics = true;
            auto blkE = new ExprBlock();
            blkE->at = tokAt(scanner,(yylsp[-2]));
            blkE->list.push_back(retE);
            (yyval.pExpression) = blkE;
    }
    break;

  case 295: /* block_or_lambda: '$'  */
                { (yyval.i) = 0;   /* block */  }
    break;

  case 296: /* block_or_lambda: '@'  */
                { (yyval.i) = 1;   /* lambda */ }
    break;

  case 297: /* block_or_lambda: '@' '@'  */
                { (yyval.i) = 2;   /* local function */ }
    break;

  case 298: /* capture_entry: '&' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_reference); delete (yyvsp[0].s); }
    break;

  case 299: /* capture_entry: '=' "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_copy); delete (yyvsp[0].s); }
    break;

  case 300: /* capture_entry: "<-" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_move); delete (yyvsp[0].s); }
    break;

  case 301: /* capture_entry: ":=" "name"  */
                               { (yyval.pCapt) = new CaptureEntry(*(yyvsp[0].s),CaptureMode::capture_by_clone); delete (yyvsp[0].s); }
    break;

  case 302: /* capture_list: capture_entry  */
                         {
        (yyval.pCaptList) = new vector<CaptureEntry>();
        (yyval.pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
    }
    break;

  case 303: /* capture_list: capture_list ',' capture_entry  */
                                               {
        (yyvsp[-2].pCaptList)->push_back(*(yyvsp[0].pCapt));
        delete (yyvsp[0].pCapt);
        (yyval.pCaptList) = (yyvsp[-2].pCaptList);
    }
    break;

  case 304: /* optional_capture_list: %empty  */
        { (yyval.pCaptList) = nullptr; }
    break;

  case 305: /* optional_capture_list: "[[" capture_list ']' ']'  */
                                         { (yyval.pCaptList) = (yyvsp[-2].pCaptList); }
    break;

  case 306: /* expr_block: expression_block  */
                                            {
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        (yyval.pExpression) = new ExprMakeBlock(tokAt(scanner,(yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)));
        closure->returnType = make_smart<TypeDecl>(Type::autoinfer);
    }
    break;

  case 307: /* expr_block: block_or_lambda optional_annotation_list optional_capture_list optional_function_argument_list optional_function_type block_or_simple_block  */
                                                                                            {
        (yyval.pExpression) = ast_makeBlock(scanner,(yyvsp[-5].i),(yyvsp[-4].faList),(yyvsp[-3].pCaptList),(yyvsp[-2].pVarDeclList),(yyvsp[-1].pTypeDecl),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[0])),tokAt(scanner,(yylsp[-4])));
    }
    break;

  case 308: /* expr_numeric_const: "integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt(tokAt(scanner,(yylsp[0])),(int32_t)(yyvsp[0].i)); }
    break;

  case 309: /* expr_numeric_const: "unsigned integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt(tokAt(scanner,(yylsp[0])),(uint32_t)(yyvsp[0].ui)); }
    break;

  case 310: /* expr_numeric_const: "long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstInt64(tokAt(scanner,(yylsp[0])),(int64_t)(yyvsp[0].i64)); }
    break;

  case 311: /* expr_numeric_const: "unsigned long integer constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt64(tokAt(scanner,(yylsp[0])),(uint64_t)(yyvsp[0].ui64)); }
    break;

  case 312: /* expr_numeric_const: "unsigned int8 constant"  */
                                              { (yyval.pExpression) = new ExprConstUInt8(tokAt(scanner,(yylsp[0])),(uint8_t)(yyvsp[0].ui)); }
    break;

  case 313: /* expr_numeric_const: "floating point constant"  */
                                              { (yyval.pExpression) = new ExprConstFloat(tokAt(scanner,(yylsp[0])),(float)(yyvsp[0].fd)); }
    break;

  case 314: /* expr_numeric_const: "double constant"  */
                                              { (yyval.pExpression) = new ExprConstDouble(tokAt(scanner,(yylsp[0])),(double)(yyvsp[0].d)); }
    break;

  case 315: /* expr_assign: expr  */
                                             { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 316: /* expr_assign: expr '=' expr  */
                                             { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 317: /* expr_assign: expr "<-" expr  */
                                             { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 318: /* expr_assign: expr ":=" expr  */
                                             { (yyval.pExpression) = new ExprClone(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 319: /* expr_assign: expr "&=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 320: /* expr_assign: expr "|=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 321: /* expr_assign: expr "^=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 322: /* expr_assign: expr "&&=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 323: /* expr_assign: expr "||=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 324: /* expr_assign: expr "^^=" expr  */
                                                { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 325: /* expr_assign: expr "+=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 326: /* expr_assign: expr "-=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 327: /* expr_assign: expr "*=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 328: /* expr_assign: expr "/=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 329: /* expr_assign: expr "%=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 330: /* expr_assign: expr "<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 331: /* expr_assign: expr ">>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 332: /* expr_assign: expr "<<<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 333: /* expr_assign: expr ">>>=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 334: /* expr_assign_pipe: expr '=' "@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 335: /* expr_assign_pipe: expr '=' "@@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprCopy(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 336: /* expr_assign_pipe: expr "<-" "@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 337: /* expr_assign_pipe: expr "<-" "@@ <|" expr_block  */
                                                          { (yyval.pExpression) = new ExprMove(tokAt(scanner,(yylsp[-2])),ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 338: /* expr_named_call: name_in_namespace '(' '[' make_struct_fields ']' ')'  */
                                                                         {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-5])),*(yyvsp[-5].s));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-5].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 339: /* expr_named_call: name_in_namespace '(' expr_list ',' '[' make_struct_fields ']' ')'  */
                                                                                                  {
        auto nc = new ExprNamedCall(tokAt(scanner,(yylsp[-7])),*(yyvsp[-7].s));
        nc->nonNamedArguments = sequenceToList((yyvsp[-5].pExpression));
        nc->arguments = *(yyvsp[-2].pMakeStruct);
        delete (yyvsp[-2].pMakeStruct);
        delete (yyvsp[-7].s);
        (yyval.pExpression) = nc;
    }
    break;

  case 340: /* expr_method_call: expr "->" "name" '(' ')'  */
                                                         {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-3])), (yyvsp[-4].pExpression), *(yyvsp[-2].s));
        delete (yyvsp[-2].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 341: /* expr_method_call: expr "->" "name" '(' expr_list ')'  */
                                                                              {
        auto pInvoke = makeInvokeMethod(tokAt(scanner,(yylsp[-4])), (yyvsp[-5].pExpression), *(yyvsp[-3].s));
        auto callArgs = sequenceToList((yyvsp[-1].pExpression));
        pInvoke->arguments.insert ( pInvoke->arguments.end(), callArgs.begin(), callArgs.end() );
        delete (yyvsp[-3].s);
        (yyval.pExpression) = pInvoke;
    }
    break;

  case 342: /* func_addr_name: name_in_namespace  */
                                    {
        (yyval.pExpression) = new ExprAddr(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 343: /* func_addr_name: "$i" '(' expr ')'  */
                                          {
        auto expr = new ExprAddr(tokAt(scanner,(yylsp[-3])),"``MACRO``TAG``ADDR``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression), expr, "i");
    }
    break;

  case 344: /* func_addr_expr: '@' '@' func_addr_name  */
                                          {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 345: /* $@18: %empty  */
                    { yyextra->das_arrow_depth ++; }
    break;

  case 346: /* $@19: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 347: /* func_addr_expr: '@' '@' '<' $@18 type_declaration_no_options '>' $@19 func_addr_name  */
                                                                                                                                                       {
        auto expr = (ExprAddr *) ((yyvsp[0].pExpression)->rtti_isAddr() ? (yyvsp[0].pExpression) : (((ExprTag *) (yyvsp[0].pExpression))->value.get()));
        expr->funcType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 348: /* $@20: %empty  */
                    { yyextra->das_arrow_depth ++; }
    break;

  case 349: /* $@21: %empty  */
                                                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 350: /* func_addr_expr: '@' '@' '<' $@20 optional_function_argument_list optional_function_type '>' $@21 func_addr_name  */
                                                                                                                                                                                     {
        auto expr = (ExprAddr *) ((yyvsp[0].pExpression)->rtti_isAddr() ? (yyvsp[0].pExpression) : (((ExprTag *) (yyvsp[0].pExpression))->value.get()));
        expr->funcType = make_smart<TypeDecl>(Type::tFunction);
        expr->funcType->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        if ( (yyvsp[-4].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, expr->funcType.get(), (yyvsp[-4].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-4].pVarDeclList));
        }
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 351: /* expr_field: expr '.' "name"  */
                                              {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 352: /* expr_field: expr '.' '.' "name"  */
                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true);
        delete (yyvsp[0].s);
    }
    break;

  case 353: /* $@22: %empty  */
                               { yyextra->das_supress_errors=true; }
    break;

  case 354: /* $@23: %empty  */
                                                                           { yyextra->das_supress_errors=false; }
    break;

  case 355: /* expr_field: expr '.' $@22 error $@23  */
                                                                                                                  {
        (yyval.pExpression) = new ExprField(tokAt(scanner,(yylsp[-3])), tokAt(scanner,(yylsp[-3])), ExpressionPtr((yyvsp[-4].pExpression)), "");
        yyerrok;
    }
    break;

  case 356: /* expr: "null"  */
                                              { (yyval.pExpression) = new ExprConstPtr(tokAt(scanner,(yylsp[0])),nullptr); }
    break;

  case 357: /* expr: name_in_namespace  */
                                              { (yyval.pExpression) = new ExprVar(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 358: /* expr: expr_numeric_const  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 359: /* expr: expr_reader  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 360: /* expr: string_builder  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 361: /* expr: make_decl  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 362: /* expr: "true"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),true); }
    break;

  case 363: /* expr: "false"  */
                                              { (yyval.pExpression) = new ExprConstBool(tokAt(scanner,(yylsp[0])),false); }
    break;

  case 364: /* expr: expr_field  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 365: /* expr: expr_mtag  */
                                              { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 366: /* expr: '!' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"!",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 367: /* expr: '~' expr  */
                                              { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"~",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 368: /* expr: '+' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"+",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 369: /* expr: '-' expr  */
                                                  { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"-",ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 370: /* expr: expr "<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 371: /* expr: expr ">>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 372: /* expr: expr "<<<" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<<<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 373: /* expr: expr ">>>" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">>>", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 374: /* expr: expr '+' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"+", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 375: /* expr: expr '-' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"-", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 376: /* expr: expr '*' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"*", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 377: /* expr: expr '/' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"/", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 378: /* expr: expr '%' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"%", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 379: /* expr: expr '<' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 380: /* expr: expr '>' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 381: /* expr: expr "==" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"==", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 382: /* expr: expr "!=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"!=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 383: /* expr: expr "<=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 384: /* expr: expr ">=" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),">=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 385: /* expr: expr '&' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 386: /* expr: expr '|' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"|", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 387: /* expr: expr '^' expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 388: /* expr: expr "&&" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"&&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 389: /* expr: expr "||" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"||", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 390: /* expr: expr "^^" expr  */
                                             { (yyval.pExpression) = new ExprOp2(tokAt(scanner,(yylsp[-1])),"^^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 391: /* expr: expr ".." expr  */
                                             {
        auto itv = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-1])),"interval");
        itv->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        itv->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = itv;
    }
    break;

  case 392: /* expr: "++" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"++", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 393: /* expr: "--" expr  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[-1])),"--", ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 394: /* expr: expr "++"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"+++", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 395: /* expr: expr "--"  */
                                                 { (yyval.pExpression) = new ExprOp1(tokAt(scanner,(yylsp[0])),"---", ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 396: /* expr: '(' expr ')'  */
                                                 { (yyval.pExpression) = (yyvsp[-1].pExpression); }
    break;

  case 397: /* expr: expr '[' expr ']'  */
                                                 { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 398: /* expr: expr '.' '[' expr ']'  */
                                                     { (yyval.pExpression) = new ExprAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 399: /* expr: expr "?[" expr ']'  */
                                                 { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 400: /* expr: expr '.' "?[" expr ']'  */
                                                     { (yyval.pExpression) = new ExprSafeAt(tokAt(scanner,(yylsp[-2])), ExpressionPtr((yyvsp[-4].pExpression)), ExpressionPtr((yyvsp[-1].pExpression)), true); }
    break;

  case 401: /* expr: expr "?." "name"  */
                                                 { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
    break;

  case 402: /* expr: expr '.' "?." "name"  */
                                                     { (yyval.pExpression) = new ExprSafeField(tokAt(scanner,(yylsp[-1])), tokAt(scanner,(yylsp[0])), ExpressionPtr((yyvsp[-3].pExpression)), *(yyvsp[0].s), true); delete (yyvsp[0].s); }
    break;

  case 403: /* expr: func_addr_expr  */
                                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 404: /* expr: name_in_namespace '(' ')'  */
                                               {
            (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),*(yyvsp[-2].s));
            delete (yyvsp[-2].s);
        }
    break;

  case 405: /* expr: name_in_namespace '(' expr_list ')'  */
                                                                    {
            (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),*(yyvsp[-3].s)),(yyvsp[-1].pExpression));
            delete (yyvsp[-3].s);
        }
    break;

  case 406: /* expr: basic_type_declaration '(' ')'  */
                                                    {
        (yyval.pExpression) = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-2])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-2].type)));
    }
    break;

  case 407: /* expr: basic_type_declaration '(' expr_list ')'  */
                                                                         {
        (yyval.pExpression) = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),tokAt(scanner,(yylsp[0])),das_to_string((yyvsp[-3].type))),(yyvsp[-1].pExpression));
    }
    break;

  case 408: /* expr: '*' expr  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 409: /* expr: "deref" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprPtr2Ref(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 410: /* expr: "addr" '(' expr ')'  */
                                                   { (yyval.pExpression) = new ExprRef2Ptr(tokAt(scanner,(yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression))); }
    break;

  case 411: /* expr: "generator" '<' type_declaration_no_options '>' optional_capture_list '(' ')'  */
                                                                                                              {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-4].pTypeDecl),(yyvsp[-2].pCaptList),nullptr,tokAt(scanner,(yylsp[-6])));
    }
    break;

  case 412: /* expr: "generator" '<' type_declaration_no_options '>' optional_capture_list '(' expr ')'  */
                                                                                                                            {
        (yyval.pExpression) = ast_makeGenerator(scanner,(yyvsp[-5].pTypeDecl),(yyvsp[-3].pCaptList),(yyvsp[-1].pExpression),tokAt(scanner,(yylsp[-7])));
    }
    break;

  case 413: /* expr: expr "??" expr  */
                                                   { (yyval.pExpression) = new ExprNullCoalescing(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
    break;

  case 414: /* expr: expr '?' expr ':' expr  */
                                                          {
            (yyval.pExpression) = new ExprOp3(tokAt(scanner,(yylsp[-3])),"?",ExpressionPtr((yyvsp[-4].pExpression)),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        }
    break;

  case 415: /* $@24: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 416: /* $@25: %empty  */
                                                                                                                      { yyextra->das_arrow_depth --; }
    break;

  case 417: /* expr: expr "is" "type" '<' $@24 type_declaration_no_options '>' $@25  */
                                                                                                                                                       {
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),TypeDeclPtr((yyvsp[-2].pTypeDecl)));
    }
    break;

  case 418: /* expr: expr "is" basic_type_declaration  */
                                                               {
        auto vdecl = new TypeDecl((yyvsp[0].type));
        vdecl->at = tokAt(scanner,(yylsp[0]));
        (yyval.pExpression) = new ExprIs(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),vdecl);
    }
    break;

  case 419: /* expr: expr "is" "name"  */
                                              {
        (yyval.pExpression) = new ExprIsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 420: /* expr: expr "as" "name"  */
                                              {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 421: /* $@26: %empty  */
                                               { yyextra->das_arrow_depth ++; }
    break;

  case 422: /* $@27: %empty  */
                                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 423: /* expr: expr "as" "type" '<' $@26 type_declaration '>' $@27  */
                                                                                                                                            {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-7].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 424: /* expr: expr "as" basic_type_declaration  */
                                                               {
        (yyval.pExpression) = new ExprAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 425: /* expr: expr '?' "as" "name"  */
                                                  {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),*(yyvsp[0].s));
        delete (yyvsp[0].s);
    }
    break;

  case 426: /* $@28: %empty  */
                                                   { yyextra->das_arrow_depth ++; }
    break;

  case 427: /* $@29: %empty  */
                                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 428: /* expr: expr '?' "as" "type" '<' $@28 type_declaration '>' $@29  */
                                                                                                                                                {
        auto vname = (yyvsp[-2].pTypeDecl)->describe();
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-6])),ExpressionPtr((yyvsp[-8].pExpression)),vname);
        delete (yyvsp[-2].pTypeDecl);
    }
    break;

  case 429: /* expr: expr '?' "as" basic_type_declaration  */
                                                                   {
        (yyval.pExpression) = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-3].pExpression)),das_to_string((yyvsp[0].type)));
    }
    break;

  case 430: /* expr: expr_type_info  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 431: /* expr: expr_type_decl  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 432: /* expr: expr_cast  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 433: /* expr: expr_new  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 434: /* expr: expr_method_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 435: /* expr: expr_named_call  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 436: /* expr: expr_block  */
                                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 437: /* expr: expr "<|" expr  */
                                                { (yyval.pExpression) = ast_lpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 438: /* expr: expr "|>" expr  */
                                                { (yyval.pExpression) = ast_rpipe(scanner,(yyvsp[-2].pExpression),(yyvsp[0].pExpression),tokAt(scanner,(yylsp[-1]))); }
    break;

  case 439: /* expr: name_in_namespace "name"  */
                                                { (yyval.pExpression) = ast_NameName(scanner,(yyvsp[-1].s),(yyvsp[0].s),tokAt(scanner,(yylsp[-1])),tokAt(scanner,(yylsp[0]))); }
    break;

  case 440: /* expr: "unsafe" '(' expr ')'  */
                                         {
        (yyvsp[-1].pExpression)->alwaysSafe = true;
        (yyvsp[-1].pExpression)->userSaidItsSafe = true;
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
    break;

  case 441: /* expr: expression_keyword  */
                                { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 442: /* expr_mtag: "$$" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"e"); }
    break;

  case 443: /* expr_mtag: "$i" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"i"); }
    break;

  case 444: /* expr_mtag: "$v" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"v"); }
    break;

  case 445: /* expr_mtag: "$b" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"b"); }
    break;

  case 446: /* expr_mtag: "$a" '(' expr ')'  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),"a"); }
    break;

  case 447: /* expr_mtag: "..."  */
                                                     { (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[0])),nullptr,"..."); }
    break;

  case 448: /* expr_mtag: "$c" '(' expr ')' '(' ')'  */
                                                            {
            auto ccall = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-5])),tokAt(scanner,(yylsp[0])),"``MACRO``TAG``CALL``");
            (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-5])),(yyvsp[-3].pExpression),ccall,"c");
        }
    break;

  case 449: /* expr_mtag: "$c" '(' expr ')' '(' expr_list ')'  */
                                                                                {
            auto ccall = parseFunctionArguments(yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-6])),tokAt(scanner,(yylsp[0])),"``MACRO``TAG``CALL``"),(yyvsp[-1].pExpression));
            (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-6])),(yyvsp[-4].pExpression),ccall,"c");
        }
    break;

  case 450: /* expr_mtag: expr '.' "$f" '(' expr ')'  */
                                                                {
        auto cfield = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-5].pExpression)), "``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 451: /* expr_mtag: expr "?." "$f" '(' expr ')'  */
                                                                 {
        auto cfield = new ExprSafeField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-5].pExpression)), "``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 452: /* expr_mtag: expr '.' '.' "$f" '(' expr ')'  */
                                                                    {
        auto cfield = new ExprField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-6].pExpression)), "``MACRO``TAG``FIELD``", true);
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 453: /* expr_mtag: expr '.' "?." "$f" '(' expr ')'  */
                                                                     {
        auto cfield = new ExprSafeField(tokAt(scanner,(yylsp[-4])), tokAt(scanner,(yylsp[-1])), ExpressionPtr((yyvsp[-6].pExpression)), "``MACRO``TAG``FIELD``", true);
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 454: /* expr_mtag: expr "as" "$f" '(' expr ')'  */
                                                                   {
        auto cfield = new ExprAsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-5].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 455: /* expr_mtag: expr '?' "as" "$f" '(' expr ')'  */
                                                                       {
        auto cfield = new ExprSafeAsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-6].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 456: /* expr_mtag: expr "is" "$f" '(' expr ')'  */
                                                                   {
        auto cfield = new ExprIsVariant(tokAt(scanner,(yylsp[-4])),ExpressionPtr((yyvsp[-5].pExpression)),"``MACRO``TAG``FIELD``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression),cfield,"f");
    }
    break;

  case 457: /* expr_mtag: '@' '@' "$c" '(' expr ')'  */
                                                         {
        auto ccall = new ExprAddr(tokAt(scanner,(yylsp[-4])),"``MACRO``TAG``ADDR``");
        (yyval.pExpression) = new ExprTag(tokAt(scanner,(yylsp[-3])),(yyvsp[-1].pExpression),ccall,"c");
    }
    break;

  case 458: /* optional_field_annotation: %empty  */
                                                        { (yyval.aaList) = nullptr; }
    break;

  case 459: /* optional_field_annotation: "[[" annotation_argument_list ']' ']'  */
                                                        { (yyval.aaList) = (yyvsp[-2].aaList); }
    break;

  case 460: /* optional_override: %empty  */
                      { (yyval.i) = OVERRIDE_NONE; }
    break;

  case 461: /* optional_override: "override"  */
                      { (yyval.i) = OVERRIDE_OVERRIDE; }
    break;

  case 462: /* optional_override: "sealed"  */
                      { (yyval.i) = OVERRIDE_SEALED; }
    break;

  case 463: /* optional_constant: %empty  */
                        { (yyval.b) = false; }
    break;

  case 464: /* optional_constant: "const"  */
                        { (yyval.b) = true; }
    break;

  case 465: /* optional_public_or_private_member_variable: %empty  */
                        { (yyval.b) = false; }
    break;

  case 466: /* optional_public_or_private_member_variable: "public"  */
                        { (yyval.b) = false; }
    break;

  case 467: /* optional_public_or_private_member_variable: "private"  */
                        { (yyval.b) = true; }
    break;

  case 468: /* structure_variable_declaration: optional_field_annotation optional_override optional_public_or_private_member_variable variable_declaration  */
                                                                                                                                                 {
        (yyvsp[0].pVarDecl)->override = (yyvsp[-2].i) == OVERRIDE_OVERRIDE;
        (yyvsp[0].pVarDecl)->sealed = (yyvsp[-2].i) == OVERRIDE_SEALED;
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-3].aaList);
        (yyvsp[0].pVarDecl)->isPrivate = (yyvsp[-1].b);
        (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
    }
    break;

  case 469: /* struct_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 470: /* $@30: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructureFields(tak);
        }
    }
    break;

  case 471: /* struct_variable_declaration_list: struct_variable_declaration_list $@30 structure_variable_declaration ';'  */
                                               {
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        if ( (yyvsp[-1].pVarDecl) ) (yyvsp[-3].pVarDeclList)->push_back((yyvsp[-1].pVarDecl));
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-3]));
            for ( auto & crd : yyextra->g_CommentReaders ) {
                for ( const auto & nl : *((yyvsp[-1].pVarDecl)->pNameList) ) {
                    crd->afterStructureField(nl.name.c_str(), nl.at);
                }
            }
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructureFields(tak);
        }
    }
    break;

  case 472: /* $@31: %empty  */
                                                                                             {
                yyextra->das_force_oxford_comma=true;
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 473: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable "abstract" $@31 function_declaration_header ';'  */
                                                    {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[-1]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDefAbstract(scanner,(yyvsp[-7].pVarDeclList),(yyvsp[-6].faList),(yyvsp[-4].b),(yyvsp[-1].pFuncDecl));
            }
    break;

  case 474: /* $@32: %empty  */
                                                                                                                               {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeFunction(tak);
                }
            }
    break;

  case 475: /* struct_variable_declaration_list: struct_variable_declaration_list optional_annotation_list "def" optional_public_or_private_member_variable optional_override optional_constant $@32 function_declaration_header expression_block  */
                                                                        {
                if ( !yyextra->g_CommentReaders.empty() ) {
                    auto tak = tokAt(scanner,(yylsp[0]));
                    for ( auto & crd : yyextra->g_CommentReaders ) crd->afterFunction((yyvsp[-1].pFuncDecl),tak);
                }
                (yyval.pVarDeclList) = ast_structVarDef(scanner,(yyvsp[-8].pVarDeclList),(yyvsp[-7].faList),(yyvsp[-5].b),(yyvsp[-4].i),(yyvsp[-3].b),(yyvsp[-1].pFuncDecl),(yyvsp[0].pExpression),tokRangeAt(scanner,(yylsp[-6]),(yylsp[0])),tokAt(scanner,(yylsp[-7])));
            }
    break;

  case 476: /* struct_variable_declaration_list: struct_variable_declaration_list '[' annotation_list ']' ';'  */
                                                                                 {
        das_yyerror(scanner,"structure field or class method annotation expected to remain on the same line with the field or the class",
            tokAt(scanner,(yylsp[-2])), CompilationError::syntax_error);
        delete (yyvsp[-2].faList);
        (yyval.pVarDeclList) = (yyvsp[-4].pVarDeclList);
    }
    break;

  case 477: /* function_argument_declaration: optional_field_annotation variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->constant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        }
    break;

  case 478: /* function_argument_declaration: optional_field_annotation "var" variable_declaration  */
                                                                           {
            (yyval.pVarDecl) = (yyvsp[0].pVarDecl);
            (yyvsp[0].pVarDecl)->pTypeDecl->removeConstant = true;
            (yyvsp[0].pVarDecl)->annotation = (yyvsp[-2].aaList);
        }
    break;

  case 479: /* function_argument_declaration: "$a" '(' expr ')'  */
                                     {
            auto na = new vector<VariableNameAndPosition>();
            na->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1]))});
            auto decl = new VariableDeclaration(na, new TypeDecl(Type::none), (yyvsp[-1].pExpression));
            decl->pTypeDecl->isTag = true;
            (yyval.pVarDecl) = decl;
        }
    break;

  case 480: /* function_argument_list: function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 481: /* function_argument_list: function_argument_list ';' function_argument_declaration  */
                                                                                 { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 482: /* tuple_type: type_declaration  */
                                    {
        (yyval.pVarDecl) = new VariableDeclaration(nullptr,(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 483: /* tuple_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 484: /* tuple_type_list: tuple_type  */
                                                       { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 485: /* tuple_type_list: tuple_type_list ';' tuple_type  */
                                                       { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 486: /* variant_type: "name" ':' type_declaration  */
                                                   {
        auto na = new vector<VariableNameAndPosition>();
        na->push_back(VariableNameAndPosition{*(yyvsp[-2].s),"",tokAt(scanner,(yylsp[-2]))});
        (yyval.pVarDecl) = new VariableDeclaration(na,(yyvsp[0].pTypeDecl),nullptr);
        delete (yyvsp[-2].s);
    }
    break;

  case 487: /* variant_type_list: variant_type  */
                                                         { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 488: /* variant_type_list: variant_type_list ';' variant_type  */
                                                         { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
    break;

  case 489: /* copy_or_move: '='  */
                    { (yyval.b) = false; }
    break;

  case 490: /* copy_or_move: "<-"  */
                    { (yyval.b) = true; }
    break;

  case 491: /* variable_declaration: variable_name_with_pos_list  */
                                          {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[0]));
        autoT->ref = false;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[0].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 492: /* variable_declaration: variable_name_with_pos_list '&'  */
                                              {
        auto autoT = new TypeDecl(Type::autoinfer);
        autoT->at = tokAt(scanner,(yylsp[-1]));
        autoT->ref = true;
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-1].pNameWithPosList),autoT,nullptr);
    }
    break;

  case 493: /* variable_declaration: variable_name_with_pos_list ':' type_declaration  */
                                                                          {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),(yyvsp[0].pTypeDecl),nullptr);
    }
    break;

  case 494: /* variable_declaration: variable_name_with_pos_list ':' type_declaration copy_or_move expr  */
                                                                                                      {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 495: /* variable_declaration: variable_name_with_pos_list copy_or_move expr  */
                                                                       {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 496: /* variable_declaration: variable_name_with_pos_list copy_or_move expr_pipe  */
                                                                            {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-2]));
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-2].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move = (yyvsp[-1].b);
    }
    break;

  case 497: /* copy_or_move_or_clone: '='  */
                    { (yyval.i) = CorM_COPY; }
    break;

  case 498: /* copy_or_move_or_clone: "<-"  */
                    { (yyval.i) = CorM_MOVE; }
    break;

  case 499: /* copy_or_move_or_clone: ":="  */
                    { (yyval.i) = CorM_CLONE; }
    break;

  case 500: /* optional_ref: %empty  */
            { (yyval.b) = false; }
    break;

  case 501: /* optional_ref: '&'  */
            { (yyval.b) = true; }
    break;

  case 502: /* let_variable_name_with_pos_list: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 503: /* let_variable_name_with_pos_list: "$i" '(' expr ')'  */
                                     {
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1])),ExpressionPtr((yyvsp[-1].pExpression))});
        (yyval.pNameWithPosList) = pSL;
    }
    break;

  case 504: /* let_variable_name_with_pos_list: "name" "aka" "name"  */
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 505: /* let_variable_name_with_pos_list: let_variable_name_with_pos_list ',' "name"  */
                                                             {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 506: /* let_variable_name_with_pos_list: let_variable_name_with_pos_list ',' "name" "aka" "name"  */
                                                                                   {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 507: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options ';'  */
                                                                                            {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),(yyvsp[-1].pTypeDecl),nullptr);
    }
    break;

  case 508: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options copy_or_move_or_clone expr ';'  */
                                                                                                                                  {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-5].pNameWithPosList),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 509: /* let_variable_declaration: let_variable_name_with_pos_list ':' type_declaration_no_options copy_or_move_or_clone expr_pipe  */
                                                                                                                                   {
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 510: /* let_variable_declaration: let_variable_name_with_pos_list optional_ref copy_or_move_or_clone expr ';'  */
                                                                                                          {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-4]));
        typeDecl->ref = (yyvsp[-3].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-4].pNameWithPosList),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-2].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-2].i) & CorM_CLONE) !=0;
    }
    break;

  case 511: /* let_variable_declaration: let_variable_name_with_pos_list optional_ref copy_or_move_or_clone expr_pipe  */
                                                                                                           {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        typeDecl->at = tokAt(scanner,(yylsp[-3]));
        typeDecl->ref = (yyvsp[-2].b);
        (yyval.pVarDecl) = new VariableDeclaration((yyvsp[-3].pNameWithPosList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->init_via_move  = ((yyvsp[-1].i) & CorM_MOVE) !=0;
        (yyval.pVarDecl)->init_via_clone = ((yyvsp[-1].i) & CorM_CLONE) !=0;
    }
    break;

  case 512: /* global_variable_declaration_list: %empty  */
        {
        (yyval.pVarDeclList) = new vector<VariableDeclaration*>();
    }
    break;

  case 513: /* $@33: %empty  */
                                               {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 514: /* global_variable_declaration_list: global_variable_declaration_list $@33 optional_field_annotation let_variable_declaration  */
                                                                      {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        (yyval.pVarDeclList) = (yyvsp[-3].pVarDeclList);
        (yyvsp[0].pVarDecl)->annotation = (yyvsp[-1].aaList);
        (yyvsp[-3].pVarDeclList)->push_back((yyvsp[0].pVarDecl));
    }
    break;

  case 515: /* optional_shared: %empty  */
                     { (yyval.b) = false; }
    break;

  case 516: /* optional_shared: "shared"  */
                     { (yyval.b) = true; }
    break;

  case 517: /* optional_public_or_private_variable: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 518: /* optional_public_or_private_variable: "private"  */
                     { (yyval.b) = false; }
    break;

  case 519: /* optional_public_or_private_variable: "public"  */
                     { (yyval.b) = true; }
    break;

  case 520: /* global_let: kwd_let optional_shared optional_public_or_private_variable '{' global_variable_declaration_list '}'  */
                                                                                                                                       {
        ast_globalLetList(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].pVarDeclList));
    }
    break;

  case 521: /* $@34: %empty  */
                                                                                        {
        yyextra->das_force_oxford_comma=true;
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeGlobalVariables(tak);
        }
    }
    break;

  case 522: /* global_let: kwd_let optional_shared optional_public_or_private_variable $@34 optional_field_annotation let_variable_declaration  */
                                                                    {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders )
                for ( auto & nl : *((yyvsp[0].pVarDecl)->pNameList) )
                    crd->afterGlobalVariable(nl.name.c_str(),tak);
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterGlobalVariables(tak);
        }
        ast_globalLet(scanner,(yyvsp[-5].b),(yyvsp[-4].b),(yyvsp[-3].b),(yyvsp[-1].aaList),(yyvsp[0].pVarDecl));
    }
    break;

  case 523: /* enum_list: %empty  */
        {
        (yyval.pEnum) = new Enumeration();
    }
    break;

  case 524: /* enum_list: enum_list "name" ';'  */
                                     {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        if ( !(yyvsp[-2].pEnum)->add(*(yyvsp[-1].s),nullptr,tokAt(scanner,(yylsp[-1]))) ) {
            das_yyerror(scanner,"enumeration already declared " + *(yyvsp[-1].s), tokAt(scanner,(yylsp[-1])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-1].s);
        (yyval.pEnum) = (yyvsp[-2].pEnum);
    }
    break;

  case 525: /* enum_list: enum_list "name" '=' expr ';'  */
                                                     {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        if ( !(yyvsp[-4].pEnum)->add(*(yyvsp[-3].s),ExpressionPtr((yyvsp[-1].pExpression)),tokAt(scanner,(yylsp[-3]))) ) {
            das_yyerror(scanner,"enumeration value already declared " + *(yyvsp[-3].s), tokAt(scanner,(yylsp[-3])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-3].s);
        (yyval.pEnum) = (yyvsp[-4].pEnum);
    }
    break;

  case 526: /* $@35: %empty  */
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeAlias(pubename);
        }
    }
    break;

  case 527: /* single_alias: "name" $@35 '=' type_declaration  */
                                  {
        das_checkName(scanner,*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])));
        (yyvsp[0].pTypeDecl)->alias = *(yyvsp[-3].s);
        if ( !yyextra->g_Program->addAlias(TypeDeclPtr((yyvsp[0].pTypeDecl))) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-3].s),tokAt(scanner,(yylsp[-3])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterAlias((yyvsp[-3].s)->c_str(),pubename);
        }
        delete (yyvsp[-3].s);
    }
    break;

  case 532: /* optional_public_or_private_enum: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 533: /* optional_public_or_private_enum: "private"  */
                     { (yyval.b) = false; }
    break;

  case 534: /* optional_public_or_private_enum: "public"  */
                     { (yyval.b) = true; }
    break;

  case 535: /* enum_name: "name"  */
                   {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeEnumeration(pubename);
        }
        (yyval.pEnum) = ast_addEmptyEnum(scanner, (yyvsp[0].s), tokAt(scanner,(yylsp[0])));
    }
    break;

  case 536: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name '{' enum_list '}'  */
                                                                                                                                  {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-3].pEnum)->name.c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-6].faList),tokAt(scanner,(yylsp[-6])),(yyvsp[-4].b),(yyvsp[-3].pEnum),(yyvsp[-1].pEnum),Type::tInt);
    }
    break;

  case 537: /* enum_declaration: optional_annotation_list "enum" optional_public_or_private_enum enum_name ':' enum_basic_type_declaration '{' enum_list '}'  */
                                                                                                                                                                       {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto pubename = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterEnumeration((yyvsp[-5].pEnum)->name.c_str(),pubename);
        }
        ast_enumDeclaration(scanner,(yyvsp[-8].faList),tokAt(scanner,(yylsp[-8])),(yyvsp[-6].b),(yyvsp[-5].pEnum),(yyvsp[-1].pEnum),(yyvsp[-3].type));
    }
    break;

  case 538: /* optional_structure_parent: %empty  */
                                        { (yyval.s) = nullptr; }
    break;

  case 539: /* optional_structure_parent: ':' name_in_namespace  */
                                        { (yyval.s) = (yyvsp[0].s); }
    break;

  case 540: /* optional_sealed: %empty  */
                        { (yyval.b) = false; }
    break;

  case 541: /* optional_sealed: "sealed"  */
                        { (yyval.b) = true; }
    break;

  case 542: /* structure_name: optional_sealed "name" optional_structure_parent  */
                                                                           {
        (yyval.pStructure) = ast_structureName(scanner,(yyvsp[-2].b),(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])),(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
    }
    break;

  case 543: /* class_or_struct: "class"  */
                    { (yyval.b) = true; }
    break;

  case 544: /* class_or_struct: "struct"  */
                    { (yyval.b) = false; }
    break;

  case 545: /* optional_public_or_private_structure: %empty  */
                     { (yyval.b) = yyextra->g_Program->thisModule->isPublic; }
    break;

  case 546: /* optional_public_or_private_structure: "private"  */
                     { (yyval.b) = false; }
    break;

  case 547: /* optional_public_or_private_structure: "public"  */
                     { (yyval.b) = true; }
    break;

  case 548: /* $@36: %empty  */
                                                                                                        {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-1]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeStructure(tak);
        }
    }
    break;

  case 549: /* $@37: %empty  */
                         { if ( (yyvsp[0].pStructure) ) { (yyvsp[0].pStructure)->isClass = (yyvsp[-3].b); (yyvsp[0].pStructure)->privateStructure = !(yyvsp[-2].b); } }
    break;

  case 550: /* structure_declaration: optional_annotation_list class_or_struct optional_public_or_private_structure $@36 structure_name $@37 '{' struct_variable_declaration_list '}'  */
                                                                                                                                                   {
        ast_structureDeclaration ( scanner, (yyvsp[-8].faList), tokAt(scanner,(yylsp[-7])), (yyvsp[-4].pStructure), tokAt(scanner,(yylsp[-4])), (yyvsp[-1].pVarDeclList) );
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto tak = tokAt(scanner,(yylsp[-7]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterStructure((yyvsp[-4].pStructure),tak);
        }
    }
    break;

  case 551: /* variable_name_with_pos_list: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 552: /* variable_name_with_pos_list: "$i" '(' expr ')'  */
                                     {
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{"``MACRO``TAG``","",tokAt(scanner,(yylsp[-1])),(yyvsp[-1].pExpression)});
        (yyval.pNameWithPosList) = pSL;
    }
    break;

  case 553: /* variable_name_with_pos_list: "name" "aka" "name"  */
                                         {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<VariableNameAndPosition>();
        pSL->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = pSL;
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 554: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name"  */
                                                         {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[0].s),"",tokAt(scanner,(yylsp[0]))});
        (yyval.pNameWithPosList) = (yyvsp[-2].pNameWithPosList);
        delete (yyvsp[0].s);
    }
    break;

  case 555: /* variable_name_with_pos_list: variable_name_with_pos_list ',' "name" "aka" "name"  */
                                                                               {
        das_checkName(scanner,*(yyvsp[-2].s),tokAt(scanner,(yylsp[-2])));
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-4].pNameWithPosList)->push_back(VariableNameAndPosition{*(yyvsp[-2].s),*(yyvsp[0].s),tokAt(scanner,(yylsp[-2]))});
        (yyval.pNameWithPosList) = (yyvsp[-4].pNameWithPosList);
        delete (yyvsp[-2].s);
        delete (yyvsp[0].s);
    }
    break;

  case 556: /* basic_type_declaration: "bool"  */
                        { (yyval.type) = Type::tBool; }
    break;

  case 557: /* basic_type_declaration: "string"  */
                        { (yyval.type) = Type::tString; }
    break;

  case 558: /* basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 559: /* basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 560: /* basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 561: /* basic_type_declaration: "int64"  */
                        { (yyval.type) = Type::tInt64; }
    break;

  case 562: /* basic_type_declaration: "int2"  */
                        { (yyval.type) = Type::tInt2; }
    break;

  case 563: /* basic_type_declaration: "int3"  */
                        { (yyval.type) = Type::tInt3; }
    break;

  case 564: /* basic_type_declaration: "int4"  */
                        { (yyval.type) = Type::tInt4; }
    break;

  case 565: /* basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 566: /* basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 567: /* basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 568: /* basic_type_declaration: "uint64"  */
                        { (yyval.type) = Type::tUInt64; }
    break;

  case 569: /* basic_type_declaration: "uint2"  */
                        { (yyval.type) = Type::tUInt2; }
    break;

  case 570: /* basic_type_declaration: "uint3"  */
                        { (yyval.type) = Type::tUInt3; }
    break;

  case 571: /* basic_type_declaration: "uint4"  */
                        { (yyval.type) = Type::tUInt4; }
    break;

  case 572: /* basic_type_declaration: "float"  */
                        { (yyval.type) = Type::tFloat; }
    break;

  case 573: /* basic_type_declaration: "float2"  */
                        { (yyval.type) = Type::tFloat2; }
    break;

  case 574: /* basic_type_declaration: "float3"  */
                        { (yyval.type) = Type::tFloat3; }
    break;

  case 575: /* basic_type_declaration: "float4"  */
                        { (yyval.type) = Type::tFloat4; }
    break;

  case 576: /* basic_type_declaration: "void"  */
                        { (yyval.type) = Type::tVoid; }
    break;

  case 577: /* basic_type_declaration: "range"  */
                        { (yyval.type) = Type::tRange; }
    break;

  case 578: /* basic_type_declaration: "urange"  */
                        { (yyval.type) = Type::tURange; }
    break;

  case 579: /* basic_type_declaration: "range64"  */
                        { (yyval.type) = Type::tRange64; }
    break;

  case 580: /* basic_type_declaration: "urange64"  */
                        { (yyval.type) = Type::tURange64; }
    break;

  case 581: /* basic_type_declaration: "double"  */
                        { (yyval.type) = Type::tDouble; }
    break;

  case 582: /* basic_type_declaration: "bitfield"  */
                        { (yyval.type) = Type::tBitfield; }
    break;

  case 583: /* enum_basic_type_declaration: "int"  */
                        { (yyval.type) = Type::tInt; }
    break;

  case 584: /* enum_basic_type_declaration: "int8"  */
                        { (yyval.type) = Type::tInt8; }
    break;

  case 585: /* enum_basic_type_declaration: "int16"  */
                        { (yyval.type) = Type::tInt16; }
    break;

  case 586: /* enum_basic_type_declaration: "uint"  */
                        { (yyval.type) = Type::tUInt; }
    break;

  case 587: /* enum_basic_type_declaration: "uint8"  */
                        { (yyval.type) = Type::tUInt8; }
    break;

  case 588: /* enum_basic_type_declaration: "uint16"  */
                        { (yyval.type) = Type::tUInt16; }
    break;

  case 589: /* structure_type_declaration: name_in_namespace  */
                                 {
        (yyval.pTypeDecl) = yyextra->g_Program->makeTypeDeclaration(tokAt(scanner,(yylsp[0])),*(yyvsp[0].s));
        if ( !(yyval.pTypeDecl) ) {
            (yyval.pTypeDecl) = new TypeDecl(Type::tVoid);
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
        }
        delete (yyvsp[0].s);
    }
    break;

  case 590: /* auto_type_declaration: "auto"  */
                       {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 591: /* auto_type_declaration: "auto" '(' "name" ')'  */
                                            {
        das_checkName(scanner,*(yyvsp[-1].s),tokAt(scanner,(yylsp[-1])));
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-1].s);
        delete (yyvsp[-1].s);
    }
    break;

  case 592: /* auto_type_declaration: "$t" '(' expr ')'  */
                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::alias);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-3]));
        (yyval.pTypeDecl)->alias = "``MACRO``TAG``";
        (yyval.pTypeDecl)->isTag = true;
        (yyval.pTypeDecl)->firstType = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner, (yylsp[-1]));
        (yyval.pTypeDecl)->firstType->dimExpr.push_back((yyvsp[-1].pExpression));
    }
    break;

  case 593: /* bitfield_bits: "name"  */
                    {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        auto pSL = new vector<string>();
        pSL->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = pSL;
        delete (yyvsp[0].s);
    }
    break;

  case 594: /* bitfield_bits: bitfield_bits ';' "name"  */
                                           {
        das_checkName(scanner,*(yyvsp[0].s),tokAt(scanner,(yylsp[0])));
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        delete (yyvsp[0].s);
    }
    break;

  case 595: /* $@38: %empty  */
                                     { yyextra->das_arrow_depth ++; }
    break;

  case 596: /* $@39: %empty  */
                                                                                            { yyextra->das_arrow_depth --; }
    break;

  case 597: /* bitfield_type_declaration: "bitfield" '<' $@38 bitfield_bits '>' $@39  */
                                                                                                                             {
            (yyval.pTypeDecl) = new TypeDecl(Type::tBitfield);
            (yyval.pTypeDecl)->argNames = *(yyvsp[-2].pNameList);
            if ( (yyval.pTypeDecl)->argNames.size()>32 ) {
                das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-5])),
                    CompilationError::invalid_type);
            }
            (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
            delete (yyvsp[-2].pNameList);
    }
    break;

  case 598: /* table_type_pair: type_declaration  */
                                      {
        (yyval.aTypePair).firstType = (yyvsp[0].pTypeDecl);
        (yyval.aTypePair).secondType = new TypeDecl(Type::tVoid);
    }
    break;

  case 599: /* table_type_pair: type_declaration ';' type_declaration  */
                                                                          {
        (yyval.aTypePair).firstType = (yyvsp[-2].pTypeDecl);
        (yyval.aTypePair).secondType = (yyvsp[0].pTypeDecl);
    }
    break;

  case 600: /* type_declaration_no_options: basic_type_declaration  */
                                                            { (yyval.pTypeDecl) = new TypeDecl((yyvsp[0].type)); (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0])); }
    break;

  case 601: /* type_declaration_no_options: auto_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 602: /* type_declaration_no_options: bitfield_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 603: /* type_declaration_no_options: structure_type_declaration  */
                                                            { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
    break;

  case 604: /* type_declaration_no_options: type_declaration_no_options '[' expr ']'  */
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
    break;

  case 605: /* type_declaration_no_options: type_declaration_no_options '[' ']'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->dim.push_back(TypeDecl::dimAuto);
        (yyvsp[-2].pTypeDecl)->dimExpr.push_back(nullptr);
        (yyvsp[-2].pTypeDecl)->removeDim = false;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 606: /* type_declaration_no_options: type_declaration_no_options '-' '[' ']'  */
                                                          {
        (yyvsp[-3].pTypeDecl)->removeDim = true;
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
    break;

  case 607: /* type_declaration_no_options: type_declaration_no_options "explicit"  */
                                                           {
        (yyvsp[-1].pTypeDecl)->isExplicit = true;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 608: /* type_declaration_no_options: type_declaration_no_options "const"  */
                                                        {
        (yyvsp[-1].pTypeDecl)->constant = true;
        (yyvsp[-1].pTypeDecl)->removeConstant = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 609: /* type_declaration_no_options: type_declaration_no_options '-' "const"  */
                                                            {
        (yyvsp[-2].pTypeDecl)->constant = false;
        (yyvsp[-2].pTypeDecl)->removeConstant = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 610: /* type_declaration_no_options: type_declaration_no_options '&'  */
                                                  {
        (yyvsp[-1].pTypeDecl)->ref = true;
        (yyvsp[-1].pTypeDecl)->removeRef = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
    break;

  case 611: /* type_declaration_no_options: type_declaration_no_options '-' '&'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->ref = false;
        (yyvsp[-2].pTypeDecl)->removeRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 612: /* type_declaration_no_options: type_declaration_no_options '#'  */
                                                  {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->temporary = true;
    }
    break;

  case 613: /* type_declaration_no_options: type_declaration_no_options "implicit"  */
                                                           {
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
        (yyval.pTypeDecl)->implicit = true;
    }
    break;

  case 614: /* type_declaration_no_options: type_declaration_no_options '-' '#'  */
                                                      {
        (yyvsp[-2].pTypeDecl)->temporary = false;
        (yyvsp[-2].pTypeDecl)->removeTemporary = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 615: /* type_declaration_no_options: type_declaration_no_options "==" "const"  */
                                                               {
        (yyvsp[-2].pTypeDecl)->explicitConst = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 616: /* type_declaration_no_options: type_declaration_no_options "==" '&'  */
                                                         {
        (yyvsp[-2].pTypeDecl)->explicitRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
    break;

  case 617: /* type_declaration_no_options: type_declaration_no_options '?'  */
                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 618: /* $@40: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 619: /* $@41: %empty  */
                                                                                               { yyextra->das_arrow_depth --; }
    break;

  case 620: /* type_declaration_no_options: "smart_ptr" '<' $@40 type_declaration '>' $@41  */
                                                                                                                                {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->smartPtr = true;
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 621: /* type_declaration_no_options: type_declaration_no_options "??"  */
                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType = make_smart<TypeDecl>(Type::tPointer);
        (yyval.pTypeDecl)->firstType->at = tokAt(scanner,(yylsp[-1]));
        (yyval.pTypeDecl)->firstType->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
    break;

  case 622: /* $@42: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 623: /* $@43: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 624: /* type_declaration_no_options: "array" '<' $@42 type_declaration '>' $@43  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tArray);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 625: /* $@44: %empty  */
                           { yyextra->das_arrow_depth ++; }
    break;

  case 626: /* $@45: %empty  */
                                                                                     { yyextra->das_arrow_depth --; }
    break;

  case 627: /* type_declaration_no_options: "table" '<' $@44 table_type_pair '>' $@45  */
                                                                                                                      {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTable);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].aTypePair).firstType);
        (yyval.pTypeDecl)->secondType = TypeDeclPtr((yyvsp[-2].aTypePair).secondType);
    }
    break;

  case 628: /* $@46: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 629: /* $@47: %empty  */
                                                                                                 { yyextra->das_arrow_depth --; }
    break;

  case 630: /* type_declaration_no_options: "iterator" '<' $@46 type_declaration '>' $@47  */
                                                                                                                                  {
        (yyval.pTypeDecl) = new TypeDecl(Type::tIterator);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 631: /* type_declaration_no_options: "block"  */
                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 632: /* $@48: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 633: /* $@49: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 634: /* type_declaration_no_options: "block" '<' $@48 type_declaration '>' $@49  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 635: /* $@50: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 636: /* $@51: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 637: /* type_declaration_no_options: "block" '<' $@50 optional_function_argument_list optional_function_type '>' $@51  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 638: /* type_declaration_no_options: "function"  */
                           {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 639: /* $@52: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 640: /* $@53: %empty  */
                                                                                                { yyextra->das_arrow_depth --; }
    break;

  case 641: /* type_declaration_no_options: "function" '<' $@52 type_declaration '>' $@53  */
                                                                                                                                 {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 642: /* $@54: %empty  */
                               { yyextra->das_arrow_depth ++; }
    break;

  case 643: /* $@55: %empty  */
                                                                                                                                         { yyextra->das_arrow_depth --; }
    break;

  case 644: /* type_declaration_no_options: "function" '<' $@54 optional_function_argument_list optional_function_type '>' $@55  */
                                                                                                                                                                          {
        (yyval.pTypeDecl) = new TypeDecl(Type::tFunction);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 645: /* type_declaration_no_options: "lambda"  */
                         {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[0]));
    }
    break;

  case 646: /* $@56: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 647: /* $@57: %empty  */
                                                                                              { yyextra->das_arrow_depth --; }
    break;

  case 648: /* type_declaration_no_options: "lambda" '<' $@56 type_declaration '>' $@57  */
                                                                                                                               {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
    }
    break;

  case 649: /* $@58: %empty  */
                             { yyextra->das_arrow_depth ++; }
    break;

  case 650: /* $@59: %empty  */
                                                                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 651: /* type_declaration_no_options: "lambda" '<' $@58 optional_function_argument_list optional_function_type '>' $@59  */
                                                                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tLambda);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-2].pTypeDecl));
        if ( (yyvsp[-3].pVarDeclList) ) {
            varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-3].pVarDeclList));
            deleteVariableDeclarationList((yyvsp[-3].pVarDeclList));
        }
    }
    break;

  case 652: /* $@60: %empty  */
                            { yyextra->das_arrow_depth ++; }
    break;

  case 653: /* $@61: %empty  */
                                                                                       { yyextra->das_arrow_depth --; }
    break;

  case 654: /* type_declaration_no_options: "tuple" '<' $@60 tuple_type_list '>' $@61  */
                                                                                                                        {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTuple);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 655: /* $@62: %empty  */
                              { yyextra->das_arrow_depth ++; }
    break;

  case 656: /* $@63: %empty  */
                                                                                           { yyextra->das_arrow_depth --; }
    break;

  case 657: /* type_declaration_no_options: "variant" '<' $@62 variant_type_list '>' $@63  */
                                                                                                                            {
        (yyval.pTypeDecl) = new TypeDecl(Type::tVariant);
        (yyval.pTypeDecl)->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, (yyval.pTypeDecl), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
    }
    break;

  case 658: /* type_declaration: type_declaration_no_options  */
                                        {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
    }
    break;

  case 659: /* type_declaration: type_declaration '|' type_declaration_no_options  */
                                                                     {
        if ( (yyvsp[-2].pTypeDecl)->baseType==Type::option ) {
            (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[0].pTypeDecl));
        } else {
            (yyval.pTypeDecl) = new TypeDecl(Type::option);
            (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[-2].pTypeDecl));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[0].pTypeDecl));
        }
    }
    break;

  case 660: /* type_declaration: type_declaration '|' '#'  */
                                             {
        if ( (yyvsp[-2].pTypeDecl)->baseType==Type::option ) {
            (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
            (yyval.pTypeDecl)->argTypes.push_back(make_smart<TypeDecl>(*(yyvsp[-2].pTypeDecl)->argTypes.back()));
            (yyvsp[-2].pTypeDecl)->argTypes.back()->temporary ^= true;
        } else {
            (yyval.pTypeDecl) = new TypeDecl(Type::option);
            (yyval.pTypeDecl)->at = tokRangeAt(scanner,(yylsp[-2]),(yylsp[0]));
            (yyval.pTypeDecl)->argTypes.push_back((yyvsp[-2].pTypeDecl));
            (yyval.pTypeDecl)->argTypes.push_back(make_smart<TypeDecl>(*(yyvsp[-2].pTypeDecl)));
            (yyval.pTypeDecl)->argTypes.back()->temporary ^= true;
        }
    }
    break;

  case 661: /* $@64: %empty  */
                     { yyextra->das_need_oxford_comma=false; }
    break;

  case 662: /* $@65: %empty  */
                                                                           {
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[0]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->beforeVariant(atvname);
        }
    }
    break;

  case 663: /* variant_alias_declaration: "variant" $@64 "name" $@65 '{' variant_type_list ';' '}'  */
                                          {
        auto vtype = make_smart<TypeDecl>(Type::tVariant);
        vtype->alias = *(yyvsp[-5].s);
        vtype->at = tokAt(scanner,(yylsp[-5]));
        varDeclToTypeDecl(scanner, vtype.get(), (yyvsp[-2].pVarDeclList), true);
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        if ( !yyextra->g_Program->addAlias(vtype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-5].s),tokAt(scanner,(yylsp[-5])),
                CompilationError::type_alias_already_declared);
        }
        if ( !yyextra->g_CommentReaders.empty() ) {
            auto atvname = tokAt(scanner,(yylsp[-5]));
            for ( auto & crd : yyextra->g_CommentReaders ) crd->afterVariant((yyvsp[-5].s)->c_str(),atvname);
        }
        delete (yyvsp[-5].s);
    }
    break;

  case 664: /* $@66: %empty  */
                      { yyextra->das_need_oxford_comma=false; }
    break;

  case 665: /* bitfield_alias_declaration: "bitfield" $@66 "name" '{' bitfield_bits ';' '}'  */
                                                                                                            {
        auto btype = make_smart<TypeDecl>(Type::tBitfield);
        btype->alias = *(yyvsp[-4].s);
        btype->at = tokAt(scanner,(yylsp[-4]));
        btype->argNames = *(yyvsp[-2].pNameList);
        if ( btype->argNames.size()>32 ) {
            das_yyerror(scanner,"only 32 different bits are allowed in a bitfield",tokAt(scanner,(yylsp[-4])),
                CompilationError::invalid_type);
        }
        if ( !yyextra->g_Program->addAlias(btype) ) {
            das_yyerror(scanner,"type alias is already defined "+*(yyvsp[-4].s),tokAt(scanner,(yylsp[-4])),
                CompilationError::type_alias_already_declared);
        }
        delete (yyvsp[-4].s);
        delete (yyvsp[-2].pNameList);
    }
    break;

  case 666: /* make_decl: make_struct_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 667: /* make_decl: make_dim_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 668: /* make_decl: make_table_decl  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 669: /* make_decl: array_comprehension  */
                                 { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 670: /* make_struct_fields: "name" copy_or_move expr  */
                                               {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 671: /* make_struct_fields: "name" ":=" expr  */
                                      {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
    break;

  case 672: /* make_struct_fields: make_struct_fields ',' "name" copy_or_move expr  */
                                                                           {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),(yyvsp[-1].b),false);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 673: /* make_struct_fields: make_struct_fields ',' "name" ":=" expr  */
                                                                  {
        auto mfd = make_smart<MakeFieldDecl>(tokAt(scanner,(yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)),false,true);
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
    break;

  case 674: /* make_struct_dim: make_struct_fields  */
                                {
        auto msd = new ExprMakeStruct();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
    break;

  case 675: /* make_struct_dim: make_struct_dim ';' make_struct_fields  */
                                                         {
        ((ExprMakeStruct *) (yyvsp[-2].pExpression))->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 676: /* optional_block: %empty  */
        { (yyval.pExpression) = nullptr; }
    break;

  case 677: /* optional_block: "where" expr_block  */
                                  { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 678: /* make_struct_decl: "[[" type_declaration_no_options make_struct_dim optional_block ']' ']'  */
                                                                                                        {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-5]));
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 679: /* make_struct_decl: "[[" type_declaration_no_options optional_block ']' ']'  */
                                                                                   {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        msd->block = (yyvsp[-2].pExpression);
        msd->at = tokAt(scanner,(yylsp[-4]));
        (yyval.pExpression) = msd;
    }
    break;

  case 680: /* make_struct_decl: "[[" type_declaration_no_options '(' ')' optional_block ']' ']'  */
                                                                                           {
        auto msd = new ExprMakeStruct();
        msd->makeType = TypeDeclPtr((yyvsp[-5].pTypeDecl));
        msd->useInitializer = true;
        msd->block = (yyvsp[-2].pExpression);
        msd->at = tokAt(scanner,(yylsp[-6]));
        (yyval.pExpression) = msd;
    }
    break;

  case 681: /* make_struct_decl: "[[" type_declaration_no_options '(' ')' make_struct_dim optional_block ']' ']'  */
                                                                                                                {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-7]));
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
    break;

  case 682: /* make_struct_decl: "[{" type_declaration_no_options make_struct_dim optional_block '}' ']'  */
                                                                                                        {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-4].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-5]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-5])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-3].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 683: /* make_struct_decl: "[{" type_declaration_no_options '(' ')' make_struct_dim optional_block '}' ']'  */
                                                                                                                {
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->makeType = TypeDeclPtr((yyvsp[-6].pTypeDecl));
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->useInitializer = true;
        ((ExprMakeStruct *)(yyvsp[-3].pExpression))->block = (yyvsp[-2].pExpression);
        (yyvsp[-3].pExpression)->at = tokAt(scanner,(yylsp[-7]));
        auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-7])),"to_array_move");
        tam->arguments.push_back(ExpressionPtr((yyvsp[-3].pExpression)));
        (yyval.pExpression) = tam;
    }
    break;

  case 684: /* make_tuple: expr  */
                  {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 685: /* make_tuple: expr "=>" expr  */
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 686: /* make_tuple: make_tuple ',' expr  */
                                      {
        ExprMakeTuple * mt;
        if ( (yyvsp[-2].pExpression)->rtti_isMakeTuple() ) {
            mt = static_cast<ExprMakeTuple *>((yyvsp[-2].pExpression));
        } else {
            mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-2])));
            mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        }
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 687: /* make_map_tuple: expr "=>" expr  */
                                         {
        ExprMakeTuple * mt = new ExprMakeTuple(tokAt(scanner,(yylsp[-1])));
        mt->values.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        mt->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mt;
    }
    break;

  case 688: /* make_map_tuple: expr  */
                 {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
    break;

  case 689: /* make_dim: make_tuple  */
                        {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 690: /* make_dim: make_dim ';' make_tuple  */
                                          {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 691: /* make_dim_decl: "[[" type_declaration_no_options make_dim ']' ']'  */
                                                                             {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
       (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 692: /* make_dim_decl: "[{" type_declaration_no_options make_dim '}' ']'  */
                                                                             {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-4]));
       auto tam = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-4])),"to_array_move");
       tam->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
       (yyval.pExpression) = tam;
    }
    break;

  case 693: /* make_table: make_map_tuple  */
                            {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
    break;

  case 694: /* make_table: make_table ';' make_map_tuple  */
                                                {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
    break;

  case 695: /* make_table_decl: "{{" make_table '}' '}'  */
                                              {
        auto mkt = make_smart<TypeDecl>(Type::autoinfer);
        mkt->dim.push_back(TypeDecl::dimAuto);
        ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = mkt;
        (yyvsp[-2].pExpression)->at = tokAt(scanner,(yylsp[-3]));
        auto ttm = yyextra->g_Program->makeCall(tokAt(scanner,(yylsp[-3])),"to_table_move");
        ttm->arguments.push_back(ExpressionPtr((yyvsp[-2].pExpression)));
        (yyval.pExpression) = ttm;
    }
    break;

  case 696: /* array_comprehension_where: %empty  */
                                    { (yyval.pExpression) = nullptr; }
    break;

  case 697: /* array_comprehension_where: ';' "where" expr  */
                                    { (yyval.pExpression) = (yyvsp[0].pExpression); }
    break;

  case 698: /* array_comprehension: "[[" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where ']' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),true);
    }
    break;

  case 699: /* array_comprehension: "[{" "for" variable_name_with_pos_list "in" expr_list ';' expr array_comprehension_where '}' ']'  */
                                                                                                                                                            {
        (yyval.pExpression) = ast_arrayComprehension(scanner,tokAt(scanner,(yylsp[-8])),(yyvsp[-7].pNameWithPosList),(yyvsp[-5].pExpression),(yyvsp[-3].pExpression),(yyvsp[-2].pExpression),tokRangeAt(scanner,(yylsp[-3]),(yylsp[0])),false);
    }
    break;



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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == DAS_YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= DAS_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == DAS_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner);
          yychar = DAS_YYEMPTY;
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != DAS_YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}



void das_yyfatalerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error, CompilationError cerr ) {
    yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
        lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),cerr);
}

void das_yyerror ( DAS_YYLTYPE * lloc, yyscan_t scanner, const string & error ) {
    if ( !yyextra->das_supress_errors ) {
        yyextra->g_Program->error(error,"","",LineInfo(yyextra->g_FileAccessStack.back(),
            lloc->first_column,lloc->first_line,lloc->last_column,lloc->last_line),
                CompilationError::syntax_error);
    }
}

LineInfo tokAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        li.last_column,li.last_line);
}

LineInfo tokRangeAt ( yyscan_t scanner, const struct DAS_YYLTYPE & li, const struct DAS_YYLTYPE & lie ) {
    return LineInfo(yyextra->g_FileAccessStack.back(),
        li.first_column,li.first_line,
        lie.last_column,lie.last_line);
}


