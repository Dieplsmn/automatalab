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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison/bisfin1.y"

    #include "logic/logic.h"
    #include <FlexLexer.h>
    #include "ast/ast.h"
    using namespace robotlogic;
    using namespace ast;

    #define FILENAME "input/map.txt"

    extern FILE* yyin;
    extern int yylex();

    void yyerror(const char*);
    void reset_variables();

    int sx, sy;
    std::vector<std::vector<cell>> map; // = get_map(FILENAME, sx, sy);
    Robot robo; //(sx, sy, 2, map);
    VarContainer vars;
    std::string type;
    std::string name, lname;
    Ast tree;
    bool accumulate;
    std::string funcname;
    std::map<std::string, Ast> funcs;
    int line = 0;

#line 99 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VALUE = 258,                   /* VALUE  */
    VALINT = 259,                  /* VALINT  */
    VALBOOL = 260,                 /* VALBOOL  */
    VALCELL = 261,                 /* VALCELL  */
    VARIABLENAME = 262,            /* VARIABLENAME  */
    TYPENAME = 263,                /* TYPENAME  */
    UNEXP = 264,                   /* UNEXP  */
    DIMIND = 265,                  /* DIMIND  */
    ENDL = 266,                    /* ENDL  */
    ASOPERATOR = 267,              /* ASOPERATOR  */
    COMMAND = 268,                 /* COMMAND  */
    DIR = 269,                     /* DIR  */
    PRINT = 270,                   /* PRINT  */
    IF = 271,                      /* IF  */
    DO = 272,                      /* DO  */
    FROM = 273,                    /* FROM  */
    TO = 274,                      /* TO  */
    STEP = 275,                    /* STEP  */
    FUNCKW = 276,                  /* FUNCKW  */
    FUNCEND = 277,                 /* FUNCEND  */
    OUTPUT = 278,                  /* OUTPUT  */
    COMMENT = 279,                 /* COMMENT  */
    ESCAPE = 280,                  /* ESCAPE  */
    ALL = 281,                     /* ALL  */
    SOME = 282,                    /* SOME  */
    IN = 283,                      /* IN  */
    LESS = 284                     /* LESS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define VALUE 258
#define VALINT 259
#define VALBOOL 260
#define VALCELL 261
#define VARIABLENAME 262
#define TYPENAME 263
#define UNEXP 264
#define DIMIND 265
#define ENDL 266
#define ASOPERATOR 267
#define COMMAND 268
#define DIR 269
#define PRINT 270
#define IF 271
#define DO 272
#define FROM 273
#define TO 274
#define STEP 275
#define FUNCKW 276
#define FUNCEND 277
#define OUTPUT 278
#define COMMENT 279
#define ESCAPE 280
#define ALL 281
#define SOME 282
#define IN 283
#define LESS 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "bison/bisfin1.y"

  int i;
  char* s;
  unsigned long p;

#line 216 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VALUE = 3,                      /* VALUE  */
  YYSYMBOL_VALINT = 4,                     /* VALINT  */
  YYSYMBOL_VALBOOL = 5,                    /* VALBOOL  */
  YYSYMBOL_VALCELL = 6,                    /* VALCELL  */
  YYSYMBOL_VARIABLENAME = 7,               /* VARIABLENAME  */
  YYSYMBOL_TYPENAME = 8,                   /* TYPENAME  */
  YYSYMBOL_UNEXP = 9,                      /* UNEXP  */
  YYSYMBOL_DIMIND = 10,                    /* DIMIND  */
  YYSYMBOL_ENDL = 11,                      /* ENDL  */
  YYSYMBOL_ASOPERATOR = 12,                /* ASOPERATOR  */
  YYSYMBOL_COMMAND = 13,                   /* COMMAND  */
  YYSYMBOL_DIR = 14,                       /* DIR  */
  YYSYMBOL_PRINT = 15,                     /* PRINT  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_DO = 17,                        /* DO  */
  YYSYMBOL_FROM = 18,                      /* FROM  */
  YYSYMBOL_TO = 19,                        /* TO  */
  YYSYMBOL_STEP = 20,                      /* STEP  */
  YYSYMBOL_FUNCKW = 21,                    /* FUNCKW  */
  YYSYMBOL_FUNCEND = 22,                   /* FUNCEND  */
  YYSYMBOL_OUTPUT = 23,                    /* OUTPUT  */
  YYSYMBOL_COMMENT = 24,                   /* COMMENT  */
  YYSYMBOL_ESCAPE = 25,                    /* ESCAPE  */
  YYSYMBOL_ALL = 26,                       /* ALL  */
  YYSYMBOL_SOME = 27,                      /* SOME  */
  YYSYMBOL_IN = 28,                        /* IN  */
  YYSYMBOL_LESS = 29,                      /* LESS  */
  YYSYMBOL_30_ = 30,                       /* '.'  */
  YYSYMBOL_31_ = 31,                       /* ','  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ']'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* '}'  */
  YYSYMBOL_36_ = 36,                       /* '-'  */
  YYSYMBOL_37_ = 37,                       /* '!'  */
  YYSYMBOL_38_ = 38,                       /* '*'  */
  YYSYMBOL_39_ = 39,                       /* '/'  */
  YYSYMBOL_40_ = 40,                       /* '&'  */
  YYSYMBOL_41_ = 41,                       /* '+'  */
  YYSYMBOL_42_ = 42,                       /* '|'  */
  YYSYMBOL_43_ = 43,                       /* '='  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_dimind = 46,                    /* dimind  */
  YYSYMBOL_initVar = 47,                   /* initVar  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_49_2 = 49,                      /* $@2  */
  YYSYMBOL_assignment = 50,                /* assignment  */
  YYSYMBOL_lvalue = 51,                    /* lvalue  */
  YYSYMBOL_rvalue = 52,                    /* rvalue  */
  YYSYMBOL_exprhp = 53,                    /* exprhp  */
  YYSYMBOL_exprmp = 54,                    /* exprmp  */
  YYSYMBOL_expr = 55,                      /* expr  */
  YYSYMBOL_command = 56,                   /* command  */
  YYSYMBOL_function = 57,                  /* function  */
  YYSYMBOL_end = 58,                       /* end  */
  YYSYMBOL_do = 59,                        /* do  */
  YYSYMBOL_if = 60,                        /* if  */
  YYSYMBOL_for = 61,                       /* for  */
  YYSYMBOL_output = 62                     /* output  */
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
typedef yytype_int8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   135

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  99

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,     2,    40,     2,
       2,     2,    38,    41,    31,    36,    30,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,    42,    35,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    61,    62,    63,    72,    79,    80,    81,
      85,    86,    87,    88,    89,    92,    97,   104,   105,   104,
     115,   124,   139,   152,   157,   160,   166,   167,   168,   169,
     174,   181,   182,   188,   194,   202,   203,   209,   216,   222,
     228,   234,   242,   279,   286,   294,   307,   319,   328,   343
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "VALUE", "VALINT",
  "VALBOOL", "VALCELL", "VARIABLENAME", "TYPENAME", "UNEXP", "DIMIND",
  "ENDL", "ASOPERATOR", "COMMAND", "DIR", "PRINT", "IF", "DO", "FROM",
  "TO", "STEP", "FUNCKW", "FUNCEND", "OUTPUT", "COMMENT", "ESCAPE", "ALL",
  "SOME", "IN", "LESS", "'.'", "','", "'['", "']'", "'{'", "'}'", "'-'",
  "'!'", "'*'", "'/'", "'&'", "'+'", "'|'", "'='", "$accept", "program",
  "dimind", "initVar", "$@1", "$@2", "assignment", "lvalue", "rvalue",
  "exprhp", "exprmp", "expr", "command", "function", "end", "do", "if",
  "for", "output", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-18)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -18,     4,   -18,   -18,    -9,   -18,   -18,   -12,   -18,    29,
      -2,    29,     2,   -18,    11,    -5,   -18,    29,    13,    29,
      29,    24,    26,    31,   -18,   -18,     7,    28,   -18,    44,
      48,    49,    50,    51,    57,    60,    29,    65,   -18,    45,
     -18,    56,   -18,    67,   -18,   -18,   -18,    47,    43,   -18,
     -18,   -18,   -18,    29,    29,    29,    29,   -18,    73,    29,
      29,    29,    29,    29,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,     0,    87,   -18,   -18,    29,   -18,   -18,    87,   -18,
     -18,   -18,   -18,     7,     7,     7,     7,     7,    29,   -18,
      59,    84,    87,    29,    29,    20,    56,   -18,   -18
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      14,     0,     1,    23,     0,    17,     2,     0,    43,     0,
       0,     0,     0,    45,     0,     0,    25,     0,     0,     0,
       0,     0,     0,    24,    26,    31,    35,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      24,     0,    46,     0,    44,    49,    13,     0,     0,    29,
      30,     3,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      21,     0,    15,    18,    47,     0,     6,    27,    20,    32,
      33,    34,    39,    40,    37,    36,    38,    41,     0,    22,
       0,     0,    16,     0,     0,     0,     0,    19,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -18,   -18,   -11,   -18,   -18,   -18,   -18,    80,   -18,    -6,
      72,    -1,   -18,   -18,   -18,   -17,   -18,   -18,   -18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    71,    21,    37,    90,    22,    40,    24,    25,
      26,    72,    28,    29,    30,    31,    32,    33,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      27,    48,    38,    35,     2,    42,    46,     3,    41,    44,
      43,     4,     5,    49,    50,     6,    47,     7,    45,     8,
       9,    10,    11,    36,    74,    12,    13,    14,    15,    16,
      10,    88,     3,    89,    17,    51,    39,    52,    18,    57,
      19,    20,     7,    53,     8,    54,    55,    56,    79,    80,
      81,    88,    78,    97,    16,    64,    58,    59,    76,    65,
      66,    67,    68,    18,    60,    19,    20,    70,    69,    61,
      62,    63,    73,    10,    91,    58,    59,    36,    77,    98,
      82,    23,    95,    60,    58,    59,    75,    92,    61,    62,
      63,    93,    60,    96,     0,    58,    59,    61,    62,    63,
       0,     0,     0,    60,    94,     0,     0,     0,    61,    62,
      63,     0,    58,    59,     0,    58,    59,     0,     0,     0,
      60,     0,     0,    60,     0,    61,    62,    63,    61,    62,
      63,    83,    84,    85,    86,    87
};

static const yytype_int8 yycheck[] =
{
       1,    18,    14,    12,     0,     7,    11,     3,     9,     7,
      11,     7,     8,    19,    20,    11,    17,    13,     7,    15,
      16,    17,    18,    32,    41,    21,    22,    23,    24,    25,
      17,    31,     3,    33,    30,    11,     7,    11,    34,    11,
      36,    37,    13,    12,    15,    38,    39,    40,    54,    55,
      56,    31,    53,    33,    25,    11,    28,    29,    11,    11,
      11,    11,    11,    34,    36,    36,    37,     7,    11,    41,
      42,    43,     7,    17,    75,    28,    29,    32,    35,    96,
       7,     1,    93,    36,    28,    29,    19,    88,    41,    42,
      43,    32,    36,    94,    -1,    28,    29,    41,    42,    43,
      -1,    -1,    -1,    36,    20,    -1,    -1,    -1,    41,    42,
      43,    -1,    28,    29,    -1,    28,    29,    -1,    -1,    -1,
      36,    -1,    -1,    36,    -1,    41,    42,    43,    41,    42,
      43,    59,    60,    61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    45,     0,     3,     7,     8,    11,    13,    15,    16,
      17,    18,    21,    22,    23,    24,    25,    30,    34,    36,
      37,    47,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    12,    32,    48,    14,     7,
      51,    55,     7,    55,     7,     7,    11,    55,    59,    53,
      53,    11,    11,    12,    38,    39,    40,    11,    28,    29,
      36,    41,    42,    43,    11,    11,    11,    11,    11,    11,
       7,    46,    55,     7,    59,    19,    11,    35,    55,    53,
      53,    53,     7,    54,    54,    54,    54,    54,    31,    33,
      49,    55,    55,    32,    20,    46,    55,    33,    59
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    46,    46,    48,    49,    47,
      50,    50,    51,    52,    52,    52,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    58,    59,    60,    61,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     3,     3,     4,     3,     3,     3,
       3,     3,     3,     3,     0,     1,     3,     0,     0,     7,
       3,     3,     4,     1,     1,     1,     1,     3,     1,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     2,     1,     2,     1,     2,     3,     7,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: program ENDL  */
#line 60 "bison/bisfin1.y"
                     {line++;}
#line 1320 "y.tab.c"
    break;

  case 3: /* program: program initVar ENDL  */
#line 61 "bison/bisfin1.y"
                               { line++; if(!accumulate) {tree.execute(); tree.clear();} }
#line 1326 "y.tab.c"
    break;

  case 4: /* program: program assignment ENDL  */
#line 62 "bison/bisfin1.y"
                                  { line++; if(!accumulate) {tree.execute(); tree.clear();} }
#line 1332 "y.tab.c"
    break;

  case 5: /* program: program expr ENDL  */
#line 63 "bison/bisfin1.y"
                            { line++;
                tree.insert(reinterpret_cast<Node*>((yyvsp[-1].p)));
                if(!accumulate){
                    tree.execute();
                    if(!(reinterpret_cast<Node*>((yyvsp[-1].p)))->arg.empty()) 
                        std::cout << "value: " <<  ((reinterpret_cast<Node*>((yyvsp[-1].p)))->arg) << std::endl; 
                    tree.clear();
                }
        }
#line 1346 "y.tab.c"
    break;

  case 6: /* program: program '.' expr ENDL  */
#line 72 "bison/bisfin1.y"
                                { line++;
                tree.insert(reinterpret_cast<Node*>((yyvsp[-1].p)));
                if(!accumulate){
                    tree.execute();
                    tree.clear();
                }
        }
#line 1358 "y.tab.c"
    break;

  case 7: /* program: program function ENDL  */
#line 79 "bison/bisfin1.y"
                                { line++; }
#line 1364 "y.tab.c"
    break;

  case 8: /* program: program end ENDL  */
#line 80 "bison/bisfin1.y"
                           { line++; }
#line 1370 "y.tab.c"
    break;

  case 9: /* program: program do ENDL  */
#line 81 "bison/bisfin1.y"
                          { line++;
            tree.insert(reinterpret_cast<Node*>((yyvsp[-1].p)));
            if(!accumulate) { tree.execute(); tree.clear();}
        }
#line 1379 "y.tab.c"
    break;

  case 10: /* program: program if ENDL  */
#line 85 "bison/bisfin1.y"
                          { line++; if(!accumulate) {tree.execute(); tree.clear();} }
#line 1385 "y.tab.c"
    break;

  case 11: /* program: program for ENDL  */
#line 86 "bison/bisfin1.y"
                           { line++; if(!accumulate) {tree.execute(); tree.clear();} }
#line 1391 "y.tab.c"
    break;

  case 12: /* program: program output ENDL  */
#line 87 "bison/bisfin1.y"
                              { line++; if(!accumulate) {tree.execute(); tree.clear();} }
#line 1397 "y.tab.c"
    break;

  case 13: /* program: program COMMENT ENDL  */
#line 88 "bison/bisfin1.y"
                               { line++; }
#line 1403 "y.tab.c"
    break;

  case 14: /* program: %empty  */
#line 89 "bison/bisfin1.y"
          {}
#line 1409 "y.tab.c"
    break;

  case 15: /* dimind: expr  */
#line 92 "bison/bisfin1.y"
         {
        Node *n = new Node(vars, robo, Node::INDEX);
        n->add_ch(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
        }
#line 1419 "y.tab.c"
    break;

  case 16: /* dimind: dimind ',' expr  */
#line 97 "bison/bisfin1.y"
                      {
        Node *n = reinterpret_cast<Node*>((yyvsp[-2].p));
        n->add_ch(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
        }
#line 1429 "y.tab.c"
    break;

  case 17: /* $@1: %empty  */
#line 104 "bison/bisfin1.y"
                 {type = std::string((yyvsp[0].s));}
#line 1435 "y.tab.c"
    break;

  case 18: /* $@2: %empty  */
#line 105 "bison/bisfin1.y"
                     {lname = std::string((yyvsp[0].s));}
#line 1441 "y.tab.c"
    break;

  case 19: /* initVar: TYPENAME $@1 VARIABLENAME $@2 '[' dimind ']'  */
#line 106 "bison/bisfin1.y"
                       {
            Node* typen = new Node(vars, robo, Node::ARG, type);
            Node* namen = new Node(vars, robo, Node::ARG, lname);
            Node* indn = reinterpret_cast<Node*>((yyvsp[-1].p));
            Node* n = new Node(vars, robo, Node::INITVAR, "", {namen, typen, indn});
            tree.insert(n);
        }
#line 1453 "y.tab.c"
    break;

  case 20: /* assignment: lvalue ASOPERATOR expr  */
#line 115 "bison/bisfin1.y"
                               {
            std::string arg;
            arg.push_back(*((yyvsp[-1].s)));
            Node* varn = reinterpret_cast<Node*>((yyvsp[-2].p));
            varn->arg = "l";
            Node* valn = reinterpret_cast<Node*>((yyvsp[0].p));
            Node* n = new Node(vars, robo, Node::ASGNEL, arg, {varn, valn});
            tree.insert(n);
        }
#line 1467 "y.tab.c"
    break;

  case 21: /* assignment: VARIABLENAME ASOPERATOR VARIABLENAME  */
#line 124 "bison/bisfin1.y"
                                               {
            std::string varname;
            for(auto it : std::string((yyvsp[-2].s))){
                if(it == '+' || it == '-') yyerror("Invalid operator for variable - variable assignment");
                if(it == ' ' || it == '<')
                    break;
                varname.push_back(it);
            }
            Node *var1 = new Node(vars, robo, Node::ARG, varname);
            Node *var2 = new Node(vars, robo, Node::ARG, (yyvsp[0].s));
            Node* n = new Node(vars, robo, Node::ASGNVAR, "", {var1, var2});
            tree.insert(n);
        }
#line 1485 "y.tab.c"
    break;

  case 22: /* lvalue: VARIABLENAME '[' dimind ']'  */
#line 139 "bison/bisfin1.y"
                                {
        name = std::string((yyvsp[-3].s));
        size_t found = name.find('[');
        if (found != std::string::npos) {
            name = name.substr(0, found);
        }
        Node *n = new Node(vars, robo, Node::RVAR);
        n->add_ch(new Node(vars, robo, Node::ARG, name));
        n->add_ch(reinterpret_cast<Node*>((yyvsp[-1].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1501 "y.tab.c"
    break;

  case 23: /* rvalue: VALUE  */
#line 152 "bison/bisfin1.y"
            {
        Node *n = new Node(vars, robo, Node::ARG);
        n->arg = Conv::itos((yyval.i));
        (yyval.p) = reinterpret_cast<unsigned long>(n);   
    }
#line 1511 "y.tab.c"
    break;

  case 24: /* rvalue: lvalue  */
#line 157 "bison/bisfin1.y"
             {
        (yyval.p) = (yyvsp[0].p);  
        }
#line 1519 "y.tab.c"
    break;

  case 25: /* rvalue: ESCAPE  */
#line 160 "bison/bisfin1.y"
             {
        Node *n = new Node(vars, robo, Node::ESC);
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1528 "y.tab.c"
    break;

  case 26: /* exprhp: rvalue  */
#line 166 "bison/bisfin1.y"
           { (yyval.p) = (yyvsp[0].p); }
#line 1534 "y.tab.c"
    break;

  case 27: /* exprhp: '{' do '}'  */
#line 167 "bison/bisfin1.y"
                 { (yyval.p) = (yyvsp[-1].p); }
#line 1540 "y.tab.c"
    break;

  case 28: /* exprhp: command  */
#line 168 "bison/bisfin1.y"
              { (yyval.p) = (yyvsp[0].p); }
#line 1546 "y.tab.c"
    break;

  case 29: /* exprhp: '-' exprhp  */
#line 169 "bison/bisfin1.y"
                 { 
        Node *n = new Node(vars, robo, Node::EXPR, "-");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1556 "y.tab.c"
    break;

  case 30: /* exprhp: '!' exprhp  */
#line 174 "bison/bisfin1.y"
                 { 
        Node *n = new Node(vars, robo, Node::EXPR, "!");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1566 "y.tab.c"
    break;

  case 31: /* exprmp: exprhp  */
#line 181 "bison/bisfin1.y"
           {(yyval.p) = (yyvsp[0].p);}
#line 1572 "y.tab.c"
    break;

  case 32: /* exprmp: exprmp '*' exprhp  */
#line 182 "bison/bisfin1.y"
                        { 
        Node *n = new Node(vars, robo, Node::EXPR, "*");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1583 "y.tab.c"
    break;

  case 33: /* exprmp: exprmp '/' exprhp  */
#line 188 "bison/bisfin1.y"
                        { 
        Node *n = new Node(vars, robo, Node::EXPR, "/");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1594 "y.tab.c"
    break;

  case 34: /* exprmp: exprmp '&' exprhp  */
#line 194 "bison/bisfin1.y"
                        { 
        Node *n = new Node(vars, robo, Node::EXPR, "&");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1605 "y.tab.c"
    break;

  case 35: /* expr: exprmp  */
#line 202 "bison/bisfin1.y"
           {(yyval.p) = (yyvsp[0].p);}
#line 1611 "y.tab.c"
    break;

  case 36: /* expr: expr '+' exprmp  */
#line 203 "bison/bisfin1.y"
                      { 
        Node *n = new Node(vars, robo, Node::EXPR, "+");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1622 "y.tab.c"
    break;

  case 37: /* expr: expr '-' exprmp  */
#line 209 "bison/bisfin1.y"
                      { 
        Node *n = new Node(vars, robo, Node::EXPR, "+");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(new Node(vars, robo, Node::EXPR, "-"));
        n->ch[1]->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1634 "y.tab.c"
    break;

  case 38: /* expr: expr '|' exprmp  */
#line 216 "bison/bisfin1.y"
                      { 
        Node *n = new Node(vars, robo, Node::EXPR, "|");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1645 "y.tab.c"
    break;

  case 39: /* expr: expr IN VARIABLENAME  */
#line 222 "bison/bisfin1.y"
                           {        
        Node *n = new Node(vars, robo, Node::EXPR, "I");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(new Node(vars, robo, Node::ARG, (yyvsp[0].s)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1656 "y.tab.c"
    break;

  case 40: /* expr: expr LESS exprmp  */
#line 228 "bison/bisfin1.y"
                       { 
        Node *n = new Node(vars, robo, Node::EXPR, "L");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1667 "y.tab.c"
    break;

  case 41: /* expr: expr '=' exprmp  */
#line 234 "bison/bisfin1.y"
                      { 
        Node *n = new Node(vars, robo, Node::EXPR, "=");
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[-2].p)));
        n->ch.push_back(reinterpret_cast<Node*>((yyvsp[0].p)));
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1678 "y.tab.c"
    break;

  case 42: /* command: COMMAND DIR  */
#line 242 "bison/bisfin1.y"
                {
        dir direct;
        Node *n = nullptr;
        switch((yyvsp[0].i)){
            case 1:
                direct = LEFT;
                break;
            case 2:
                direct = RIGHT;
                break;
            case 3:
                direct = UP;
                break;
            case 4:
                direct = DOWN;
                break;
            default:
                break;
        }
        switch((yyvsp[-1].i)){
            case 0:
                n = new Node(vars, robo, Node::GO, Conv::dirtos(direct));
                break;
            case 1:
                n = new Node(vars, robo, Node::PICK, Conv::dirtos(direct));
                break;
            case 2:
                n = new Node(vars, robo, Node::LOOK, Conv::dirtos(direct));
                break;
            case 3:
                n = new Node(vars, robo, Node::DROP, Conv::dirtos(direct));
                break;
            default:
                break;
        }
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1720 "y.tab.c"
    break;

  case 43: /* command: PRINT  */
#line 279 "bison/bisfin1.y"
            {
        Node* n = new Node(vars, robo, Node::PRNT, "");
        (yyval.p) = reinterpret_cast<unsigned long>(n);
    }
#line 1729 "y.tab.c"
    break;

  case 44: /* function: FUNCKW VARIABLENAME  */
#line 286 "bison/bisfin1.y"
                        { 
        accumulate = true;
        funcname = (yyvsp[0].s);
        tree.insert(new Node(vars, robo, Node::CONCAT, ""));
        }
#line 1739 "y.tab.c"
    break;

  case 45: /* end: FUNCEND  */
#line 294 "bison/bisfin1.y"
            {
        accumulate = false;
        Ast exectree;
        if(funcname == "main") {
            exectree = tree;
            exectree.execute();
            exectree.clear();
        }
        funcs.insert(std::make_pair(funcname, std::move(tree)));
    }
#line 1754 "y.tab.c"
    break;

  case 46: /* do: DO VARIABLENAME  */
#line 307 "bison/bisfin1.y"
                    {
        auto f = funcs.find((yyvsp[0].s));
        if(f == funcs.end()){
            std::string msg = std::string("Function \"") + std::string((yyvsp[0].s)) + std::string("\" is not found");
            yyerror(msg.c_str());
        } 
        Ast exectree = f->second;
        (yyval.p) = reinterpret_cast<unsigned long>(exectree.decapitate());
    }
#line 1768 "y.tab.c"
    break;

  case 47: /* if: IF expr do  */
#line 319 "bison/bisfin1.y"
               {
        Node *n = new Node(vars, robo, Node::COND);
        n->add_ch(reinterpret_cast<Node*>((yyvsp[-1].p)));
        n->add_ch(reinterpret_cast<Node*>((yyvsp[0].p)));
        tree.insert(n);
    }
#line 1779 "y.tab.c"
    break;

  case 48: /* for: FROM expr TO expr STEP expr do  */
#line 328 "bison/bisfin1.y"
                                   {
        Node* start = reinterpret_cast<Node*>((yyvsp[-5].p));
        Node* end = reinterpret_cast<Node*>((yyvsp[-3].p));
        Node* step = reinterpret_cast<Node*>((yyvsp[-1].p));
        Node* f = reinterpret_cast<Node*>((yyvsp[0].p));
        Node* p = new Node(vars, robo, Node::LOOP);
        p->add_ch(start);
        p->add_ch(end);
        p->add_ch(step);
        p->add_ch(f);
        tree.insert(p); 
    }
#line 1796 "y.tab.c"
    break;

  case 49: /* output: OUTPUT VARIABLENAME  */
#line 343 "bison/bisfin1.y"
                        {
        vars[(yyvsp[0].s)]->print();
    }
#line 1804 "y.tab.c"
    break;


#line 1808 "y.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 348 "bison/bisfin1.y"

void yyerror(const char* msg){
    std::cerr << msg;
    std::cerr << " at line: " << line--;
    std::cerr << std::endl;
}
void reset_variables(){
    std::vector<std::vector<cell>> map = get_map(FILENAME, sx, sy);
    robo = Robot(sx, sy, 2, map);
    vars.clear();
    type, funcname, name, lname = std::string();
    tree = Ast();
    accumulate = false;
    funcs = std::map<std::string, Ast>();
    line = 0;
}
