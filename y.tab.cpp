/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include<string.h>
#include "symbolTable.hpp"
#include <fstream>

#define Trace(t)        printf(t)
// int yylex();
void yyerror(char *);

extern int yylex();
symbolTable s_table;
int currentStack=0;
int stackNumber=0;


vector<funcVar> functionVariable;
stack<int> scopeStack;



struct tokenInfo
{
    char tokenID[256];
    dataType dType;

    int intValue;
    double doubleValue;
    bool boolValue;
    char stringValue[256];
};

ofstream javaASS;

#line 100 "y.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.hpp".  */
#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    REAL = 258,
    INT = 259,
    STRING = 260,
    BOOL = 261,
    TRUE = 262,
    FALSE = 263,
    INT_NUMBER = 264,
    REAL_NUMBER = 265,
    STR = 266,
    ID = 267,
    ARRAY = 268,
    BEG = 269,
    CHAR = 270,
    DECREASING = 271,
    DEFAULT = 272,
    DO = 273,
    ELSE = 274,
    END = 275,
    EXIT = 276,
    FOR = 277,
    FUNCTION = 278,
    GET = 279,
    IF = 280,
    LOOP = 281,
    OF = 282,
    PUT = 283,
    PROCEDURE = 284,
    RESULT = 285,
    RETURN = 286,
    SKIP = 287,
    THEN = 288,
    VAR = 289,
    WHEN = 290,
    CONST = 291,
    ASSIGN = 292,
    MOD = 293,
    LESS_EQUAL = 294,
    MORE_EQUAL = 295,
    NOT_EQUAL = 296,
    AND = 297,
    OR = 298,
    NOT = 299,
    NEGATIVE = 300
  };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define BOOL 261
#define TRUE 262
#define FALSE 263
#define INT_NUMBER 264
#define REAL_NUMBER 265
#define STR 266
#define ID 267
#define ARRAY 268
#define BEG 269
#define CHAR 270
#define DECREASING 271
#define DEFAULT 272
#define DO 273
#define ELSE 274
#define END 275
#define EXIT 276
#define FOR 277
#define FUNCTION 278
#define GET 279
#define IF 280
#define LOOP 281
#define OF 282
#define PUT 283
#define PROCEDURE 284
#define RESULT 285
#define RETURN 286
#define SKIP 287
#define THEN 288
#define VAR 289
#define WHEN 290
#define CONST 291
#define ASSIGN 292
#define MOD 293
#define LESS_EQUAL 294
#define MORE_EQUAL 295
#define NOT_EQUAL 296
#define AND 297
#define OR 298
#define NOT 299
#define NEGATIVE 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "parser.y" /* yacc.c:355  */
 
    tokenInfo info;

#line 234 "y.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "y.tab.cpp" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   805

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      55,    56,    50,    48,    57,    49,    54,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,     2,
      45,    46,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    69,    69,    72,    73,    76,    77,    80,    81,    82,
      83,    84,    87,    95,   102,   106,   112,   121,   122,   125,
     132,   133,   134,   135,   139,   138,   150,   149,   176,   185,
     196,   205,   214,   218,   217,   229,   228,   252,   253,   256,
     257,   258,   259,   262,   263,   264,   269,   270,   275,   274,
     295,   318,   319,   320,   321,   322,   323,   324,   332,   340,
     341,   347,   353,   358,   364,   370,   371,   372,   376,   390,
     406,   407,   408,   409,   410,   412,   413,   419,   425,   431,
     437,   443,   449,   453,   459,   466,   482,   505,   513,   520,
     524,   523,   545,   544,   565,   564,   585,   584,   612,   611
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "BOOL", "TRUE",
  "FALSE", "INT_NUMBER", "REAL_NUMBER", "STR", "ID", "ARRAY", "BEG",
  "CHAR", "DECREASING", "DEFAULT", "DO", "ELSE", "END", "EXIT", "FOR",
  "FUNCTION", "GET", "IF", "LOOP", "OF", "PUT", "PROCEDURE", "RESULT",
  "RETURN", "SKIP", "THEN", "VAR", "WHEN", "CONST", "ASSIGN", "MOD",
  "LESS_EQUAL", "MORE_EQUAL", "NOT_EQUAL", "AND", "OR", "NOT", "'<'",
  "'='", "'>'", "'+'", "'-'", "'*'", "'/'", "NEGATIVE", "':'", "'.'",
  "'('", "')'", "','", "'['", "']'", "$accept", "program", "declarations",
  "statments", "declaration", "constant", "variable", "Types", "array",
  "Type", "function", "$@1", "$@2", "functionVarA", "functionVarB",
  "procedure", "$@3", "$@4", "contents", "content", "statment", "block",
  "$@5", "simple", "expressions", "const_exp", "bool_expression",
  "function_invocation", "functionInputA", "functionInputB", "conditional",
  "$@6", "$@7", "loop", "$@8", "$@9", "$@10", YY_NULLPTR
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
     295,   296,   297,   298,   299,    60,    61,    62,    43,    45,
      42,    47,   300,    58,    46,    40,    41,    44,    91,    93
};
# endif

#define YYPACT_NINF -106

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-106)))

#define YYTABLE_NINF -93

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -106,    21,    67,  -106,    11,    13,    20,    52,   655,  -106,
    -106,  -106,  -106,  -106,  -106,   -16,    10,   -18,   -15,  -106,
    -106,  -106,  -106,  -106,   -27,  -106,    56,     8,    60,    60,
    -106,    60,    60,  -106,  -106,    60,    60,    60,  -106,  -106,
    -106,   726,  -106,  -106,  -106,  -106,  -106,     4,     5,   173,
     114,    60,   152,    60,    33,    91,   606,    60,    47,    98,
     -40,   726,   726,    79,  -106,   726,   726,   754,  -106,   673,
      57,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    68,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,   173,    85,   726,    86,   726,  -106,
     726,  -106,    66,  -106,  -106,  -106,   106,  -106,   650,    60,
      75,   111,   165,  -106,  -106,  -106,    25,    25,    25,   754,
     740,    25,    25,    25,    43,    43,  -106,  -106,   134,   102,
      23,  -106,    27,    80,   173,    60,    42,  -106,  -106,   692,
      60,  -106,  -106,   107,  -106,   173,  -106,   129,  -106,  -106,
    -106,    90,   132,   214,  -106,    94,  -106,   726,  -106,    60,
      95,   709,   263,   312,  -106,   108,   112,  -106,   102,   113,
     155,  -106,   173,   726,    60,   110,   606,   135,   116,   175,
     361,  -106,   148,  -106,   410,   151,   726,    60,   172,  -106,
     173,   182,  -106,   173,  -106,   186,   152,  -106,   726,   177,
     176,  -106,   459,   146,  -106,  -106,   508,  -106,  -106,   152,
     192,   153,   183,   557,  -106,  -106,   173,  -106,   184,   181,
    -106,   152,  -106
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     6,     1,     0,     0,     0,     0,     2,     3,
       7,     8,     9,    10,    11,     0,     0,     0,     0,    73,
      74,    70,    71,    72,    69,    48,    55,     0,     0,     0,
      94,     0,     0,    54,    57,     0,     0,     0,     5,    43,
      44,    45,    66,    65,    67,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    52,     0,    65,    38,    51,    53,    82,    58,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,    32,    15,
      22,    21,    23,    20,     0,    14,    13,     0,    50,    85,
      87,    89,     0,    40,    39,    41,     0,    42,    56,     0,
       0,    90,     0,    59,    75,    62,    77,    79,    81,    83,
      84,    76,    78,    80,    63,    64,    60,    61,     0,     0,
       0,    38,     0,     0,     0,     0,     0,    68,    49,     0,
       0,    38,    38,     0,    37,     0,    28,     0,    24,    18,
      17,     0,     0,     0,    35,     0,    16,    12,    86,     0,
       0,     0,     0,     0,    95,     0,     0,    38,     0,     0,
       0,    38,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    34,     0,     0,    96,     0,     0,    93,
       0,     0,    38,     0,    30,     0,     0,    38,    98,     0,
       0,    25,     0,     0,    36,    19,     0,    38,    91,     0,
       0,     0,     0,     0,    29,    27,     0,    97,     0,     0,
      99,     0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,  -106,  -106,  -106,  -106,   208,   209,    44,     1,   -50,
    -106,  -106,  -106,   167,   125,  -106,  -106,  -106,  -105,   -47,
     210,  -106,  -106,  -106,   -24,   -48,   -23,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,     9,   103,   104,   148,   105,   150,
      13,   167,   192,    86,   130,    14,   131,   171,   112,   144,
     107,    39,    56,    40,    41,    42,    43,    44,   101,   136,
      45,   141,   142,    46,    64,   197,   207
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,    89,    97,    12,    61,    62,    63,    65,    66,   106,
      53,    67,    68,    69,    70,    54,    84,    84,    55,    49,
      58,     3,    51,    15,    59,    16,   153,    96,    54,    98,
     100,    55,    17,    62,   108,    50,   162,   163,    52,    47,
      19,    20,    21,    22,    23,    60,   133,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
      85,    87,   180,    71,    18,    48,   184,    19,    20,    21,
      22,    23,    60,    80,    81,    82,    83,    35,   146,   151,
     152,    71,    36,   154,   152,   139,   156,   202,    37,    99,
       4,    57,   206,    82,    83,   102,     5,   165,   158,   159,
     109,     6,   213,     7,    35,    90,    91,    92,    93,    36,
     110,   157,   111,   114,   128,    37,   161,    90,    91,    92,
      93,   129,   134,   135,   185,   137,   138,    94,   140,   188,
     149,   -92,   194,   164,   155,   173,   147,    90,    91,    92,
      93,   166,   200,   168,   169,   203,   205,   145,   172,   174,
     186,    90,    91,    92,    93,    90,    91,    92,    93,   214,
     189,   193,   178,   198,   187,   179,   182,   183,   219,   149,
     190,   222,    19,    20,    21,    22,    23,    24,   196,    25,
      19,    20,    21,    22,    23,   143,    26,    27,    94,    28,
      29,    30,   199,    31,   201,    32,    33,    34,   204,     6,
     211,     7,   208,   209,   215,   217,   220,   216,   221,    35,
      10,    11,   181,   132,    36,    88,     0,     0,    38,     0,
      37,    19,    20,    21,    22,    23,    24,     0,    25,     0,
       0,     0,     0,     0,   170,    26,    27,     0,    28,    29,
      30,     0,    31,     0,    32,    33,    34,     0,     6,     0,
       7,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,    37,
      19,    20,    21,    22,    23,    24,     0,    25,     0,     0,
       0,     0,   176,     0,    26,    27,     0,    28,    29,    30,
       0,    31,     0,    32,    33,    34,     0,     6,     0,     7,
       0,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,    37,    19,
      20,    21,    22,    23,    24,     0,    25,     0,     0,     0,
       0,     0,   177,    26,    27,     0,    28,    29,    30,     0,
      31,     0,    32,    33,    34,     0,     6,     0,     7,     0,
       0,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,    37,    19,    20,
      21,    22,    23,    24,     0,    25,     0,     0,     0,     0,
       0,   191,    26,    27,     0,    28,    29,    30,     0,    31,
       0,    32,    33,    34,     0,     6,     0,     7,     0,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,    37,    19,    20,    21,
      22,    23,    24,     0,    25,     0,     0,     0,     0,     0,
     195,    26,    27,     0,    28,    29,    30,     0,    31,     0,
      32,    33,    34,     0,     6,     0,     7,     0,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,    37,    19,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,   210,
      26,    27,     0,    28,    29,    30,     0,    31,     0,    32,
      33,    34,     0,     6,     0,     7,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,    37,    19,    20,    21,    22,    23,
      24,     0,    25,     0,     0,     0,     0,     0,   212,    26,
      27,     0,    28,    29,    30,     0,    31,     0,    32,    33,
      34,     0,     6,     0,     7,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,    37,    19,    20,    21,    22,    23,    24,
       0,    25,     0,     0,     0,     0,     0,   218,    26,    27,
       0,    28,    29,    30,     0,    31,     0,    32,    33,    34,
       0,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,    37,    19,    20,    21,    22,    23,    24,     0,
      25,     0,     0,     0,     0,     0,     0,    26,    27,     0,
      28,    29,    30,     0,    31,     0,    32,    33,    34,     0,
       6,     0,     7,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,    37,    19,    20,    21,    22,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,    26,    27,     0,    28,
      29,    30,     0,    31,     0,    32,    33,    34,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,    35,
     -65,   -65,     0,     0,    36,     0,     0,     0,     0,     0,
      37,    71,    72,    73,    74,    75,    76,     0,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,   113,
      71,    72,    73,    74,    75,    76,     0,    77,    78,    79,
      80,    81,    82,    83,     0,     0,   160,    71,    72,    73,
      74,    75,    76,     0,    77,    78,    79,    80,    81,    82,
      83,     0,     0,   175,    71,    72,    73,    74,    75,    76,
       0,    77,    78,    79,    80,    81,    82,    83,    71,    72,
      73,    74,    75,     0,     0,    77,    78,    79,    80,    81,
      82,    83,    71,    72,    73,    74,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83
};

static const yytype_int16 yycheck[] =
{
      50,    49,    52,     2,    28,    29,    29,    31,    32,    56,
      37,    35,    36,    37,    37,    55,    12,    12,    58,    37,
      12,     0,    37,    12,    16,    12,   131,    51,    55,    53,
      54,    58,    12,    57,    57,    53,   141,   142,    53,    55,
       7,     8,     9,    10,    11,    12,    94,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      56,    56,   167,    38,    12,    55,   171,     7,     8,     9,
      10,    11,    12,    48,    49,    50,    51,    44,   128,    56,
      57,    38,    49,    56,    57,   109,   134,   192,    55,    56,
      23,    35,   197,    50,    51,     4,    29,   145,    56,    57,
      53,    34,   207,    36,    44,     3,     4,     5,     6,    49,
      12,   135,    33,    56,    53,    55,   140,     3,     4,     5,
       6,    53,    37,    37,   172,    59,    20,    13,    53,   176,
     129,    20,   182,    26,    54,   159,    34,     3,     4,     5,
       6,    12,   190,    53,    12,   193,   196,    13,    54,    54,
     174,     3,     4,     5,     6,     3,     4,     5,     6,   209,
      25,    13,    54,   187,    54,    53,    53,    12,   216,   168,
      54,   221,     7,     8,     9,    10,    11,    12,    27,    14,
       7,     8,     9,    10,    11,    20,    21,    22,    13,    24,
      25,    26,    20,    28,    12,    30,    31,    32,    12,    34,
      54,    36,    25,    27,    12,    22,    22,    54,    27,    44,
       2,     2,   168,    88,    49,    48,    -1,    -1,     8,    -1,
      55,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      26,    -1,    28,    -1,    30,    31,    32,    -1,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    -1,    24,    25,    26,
      -1,    28,    -1,    30,    31,    32,    -1,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,     7,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    24,    25,    26,    -1,
      28,    -1,    30,    31,    32,    -1,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    26,    -1,    28,
      -1,    30,    31,    32,    -1,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    24,    25,    26,    -1,    28,    -1,
      30,    31,    32,    -1,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,     7,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    26,    -1,    28,    -1,    30,
      31,    32,    -1,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,     7,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    24,    25,    26,    -1,    28,    -1,    30,    31,
      32,    -1,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    26,    -1,    28,    -1,    30,    31,    32,
      -1,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    55,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    -1,    28,    -1,    30,    31,    32,    -1,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,
      25,    26,    -1,    28,    -1,    30,    31,    32,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    44,
      50,    51,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    38,    39,    40,    41,    42,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    56,
      38,    39,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    54,    38,    39,    40,
      41,    42,    43,    -1,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    54,    38,    39,    40,    41,    42,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    38,    39,
      40,    41,    42,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    38,    39,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    62,     0,    23,    29,    34,    36,    63,    64,
      65,    66,    68,    70,    75,    12,    12,    12,    12,     7,
       8,     9,    10,    11,    12,    14,    21,    22,    24,    25,
      26,    28,    30,    31,    32,    44,    49,    55,    80,    81,
      83,    84,    85,    86,    87,    90,    93,    55,    55,    37,
      53,    37,    53,    37,    55,    58,    82,    35,    12,    16,
      12,    84,    84,    86,    94,    84,    84,    84,    84,    84,
      86,    38,    39,    40,    41,    42,    43,    45,    46,    47,
      48,    49,    50,    51,    12,    56,    73,    56,    73,    85,
       3,     4,     5,     6,    13,    69,    84,    69,    84,    56,
      84,    88,     4,    65,    66,    68,    79,    80,    86,    53,
      12,    33,    78,    56,    56,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    53,    53,
      74,    76,    74,    85,    37,    37,    89,    59,    20,    84,
      53,    91,    92,    20,    79,    13,    69,    34,    67,    68,
      69,    56,    57,    78,    56,    54,    85,    84,    56,    57,
      54,    84,    78,    78,    26,    85,    12,    71,    53,    12,
      20,    77,    54,    84,    54,    54,    19,    20,    54,    53,
      78,    67,    53,    12,    78,    85,    84,    54,    79,    25,
      54,    20,    72,    13,    69,    20,    27,    95,    84,    20,
      85,    12,    78,    85,    12,    69,    78,    96,    25,    27,
      20,    54,    20,    78,    69,    12,    54,    22,    20,    85,
      22,    27,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    64,    65,    65,    66,    66,    66,    67,    67,    68,
      69,    69,    69,    69,    71,    70,    72,    70,    73,    73,
      74,    74,    74,    76,    75,    77,    75,    78,    78,    79,
      79,    79,    79,    80,    80,    80,    80,    80,    82,    81,
      83,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    89,    89,
      91,    90,    92,    90,    94,    93,    95,    93,    96,    93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     0,     1,     1,     1,
       1,     1,     6,     4,     4,     4,     6,     1,     1,    10,
       1,     1,     1,     1,     0,    10,     0,    12,     3,     9,
       5,    11,     0,     0,     8,     0,    10,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       3,     2,     2,     2,     1,     1,     3,     1,     2,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     5,     1,     3,     0,
       0,     9,     0,     7,     0,     5,     0,    11,     0,    12
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
            /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
| yyreduce -- Do a reduction.  |
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
        case 12:
#line 88 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info).info.dType!=(yyvsp[0].info).info.dType)
                        yyerror("ERROR: const assign type error");
                    else
                        s_table.insert((yyvsp[-4].info),tokenID,intToType((yyvsp[-2].info).dType),is_constant,currentStack);
                }
#line 1602 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 96 "parser.y" /* yacc.c:1646  */
    {
                    
                    s_table.insert((yyvsp[-2].info),intToType((yyvsp[0].info)),is_constant,currentStack);
                }
#line 1611 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "parser.y" /* yacc.c:1646  */
    {
                    s_table.insert((yyvsp[-2].info),intToType((yyvsp[0].info)),is_normal,currentStack);
                }
#line 1619 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 107 "parser.y" /* yacc.c:1646  */
    {
                    // if($4!=$6)
                    //     yyerror("ERROR: const assign type error");
                    s_table.insert((yyvsp[-2].info),intToType((yyvsp[0].info)),is_normal,currentStack);
                }
#line 1629 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR: const assign type error");
                    s_table.insert((yyvsp[-4].info),intToType((yyvsp[-2].info)),is_normal,currentStack);
                }
#line 1639 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 121 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 1645 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 122 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 1651 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 126 "parser.y" /* yacc.c:1646  */
    {
                    s_table.insert((yyvsp[-8].info),intToType((yyvsp[0].info)),is_arr,currentStack);
                    (yyval.info) = (yyvsp[0].info);
                }
#line 1660 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 132 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 1666 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 1672 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 1678 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 1684 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 139 "parser.y" /* yacc.c:1646  */
    {
                    s_table.insert((yyvsp[-4].info),intToType((yyvsp[0].info)),is_func,0);
                    s_table.table[(yyvsp[-4].info)].fData.varNumber=0;
                    currentStack=++stackNumber;    
                }
#line 1694 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 146 "parser.y" /* yacc.c:1646  */
    {
                    currentStack=0;
                }
#line 1702 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 150 "parser.y" /* yacc.c:1646  */
    {
                    // s_table.insert($2,intToType($9),is_func,0);
                    // {currentStack=++stackNumber;}
                    s_table.insert((yyvsp[-6].info),intToType((yyvsp[0].info)),is_func,0);
                    currentStack=++stackNumber;
                    for(auto &fVar:functionVariable)
                    {
                        s_table.table[(yyvsp[-6].info)].fData.functionVar.push_back(fVar.funcVarType);
                        //insert variable in functionData

                        s_table.insert(fVar.varID,fVar.funcVarType,fVar.isArray? is_arr:is_normal,currentStack);
                        //insert variable to symbolTable
                    }
                    s_table.table[(yyvsp[-6].info)].fData.varNumber=functionVariable.size();

                }
#line 1723 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 168 "parser.y" /* yacc.c:1646  */
    {
                    currentStack=0;
                    functionVariable.clear();
                }
#line 1732 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 177 "parser.y" /* yacc.c:1646  */
    {
                    // s_table.insert($1,intToType($3),is_normal,currentStack);
                    funcVar temp;
                    temp.varID=(yyvsp[-2].info);
                    temp.funcVarType=intToType((yyvsp[0].info));
                    temp.isArray=0;
                    functionVariable.push_back(temp);
                }
#line 1745 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 186 "parser.y" /* yacc.c:1646  */
    {
                    // s_table.insert($1,intToType($9),is_arr,currentStack);
                    funcVar temp;
                    temp.varID=(yyvsp[-8].info);
                    temp.funcVarType=intToType((yyvsp[0].info));
                    temp.isArray=1;
                    functionVariable.push_back(temp);
                }
#line 1758 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 197 "parser.y" /* yacc.c:1646  */
    {
                    // s_table.insert($3,intToType($5),is_normal,currentStack);
                    funcVar temp;
                    temp.varID=(yyvsp[-2].info);
                    temp.funcVarType=intToType((yyvsp[0].info));
                    temp.isArray=0;
                    functionVariable.push_back(temp);
                }
#line 1771 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 206 "parser.y" /* yacc.c:1646  */
    {
                    // s_table.insert($3,intToType($11),is_arr,currentStack);
                    funcVar temp;
                    temp.varID=(yyvsp[-8].info);
                    temp.funcVarType=intToType((yyvsp[0].info));
                    temp.isArray=1;
                    functionVariable.push_back(temp);
                }
#line 1784 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 218 "parser.y" /* yacc.c:1646  */
    {
                    s_table.insert((yyvsp[-2].info),type_null,is_func,0);
                    currentStack=++stackNumber;

                }
#line 1794 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 225 "parser.y" /* yacc.c:1646  */
    {
                    currentStack=0;
                }
#line 1802 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 229 "parser.y" /* yacc.c:1646  */
    {
                    // s_table.insert($2,intToType($9),is_func,0);
                    // {currentStack=++stackNumber;}
                    s_table.insert((yyvsp[-4].info),type_null,is_func,0);
                    currentStack=++stackNumber;
                    for(auto &fVar:functionVariable)
                    {
                        s_table.table[(yyvsp[-4].info)].fData.functionVar.push_back(fVar.funcVarType);
                        //insert variable to function Data

                        s_table.insert(fVar.varID,fVar.funcVarType,fVar.isArray? is_arr:is_normal,currentStack);
                        //insert variable to symbolTable
                    }
                    s_table.table[(yyvsp[-4].info)].fData.varNumber=functionVariable.size();
                }
#line 1822 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 246 "parser.y" /* yacc.c:1646  */
    {
                    currentStack=0;
                    functionVariable.clear();
                }
#line 1831 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 275 "parser.y" /* yacc.c:1646  */
    {
                    scopeStack.push(currentStack);
                    currentStack=++stackNumber;
                    s_table.insertStack(scopeStack.top(),currentStack);
                }
#line 1841 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 282 "parser.y" /* yacc.c:1646  */
    {
                    if(scopeStack.empty())
                    {
                        currentStack=0;
                    }
                    else
                    {
                        currentStack=scopeStack.top();
                        scopeStack.pop();
                    }
                }
#line 1857 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 296 "parser.y" /* yacc.c:1646  */
    {
                    if(s_table.lookup((yyvsp[-2].info))==0)
                    //symbol is not declare
                    {
                        printf("ERROR: %s not declare\n",(yyvsp[-2].info));
                    }
                    else if(s_table.table[(yyvsp[-2].info)].masterType==is_constant)
                    //symbol is constant
                    {
                        printf("ERROR %s is constant unable to assign\n",(yyvsp[-2].info));
                    }
                    else if(s_table.table[(yyvsp[-2].info)].type!=(yyvsp[0].info))
                    //type error
                    {
                        printf("ERROR: %s assign type error\n",(yyvsp[-2].info));
                    }
                    else if(s_table.canAccess((yyvsp[-2].info),currentStack)==0)
                    {
                        printf("ERROR: %s is unable to access\n",(yyvsp[-2].info));
                    }   

                }
#line 1884 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 325 "parser.y" /* yacc.c:1646  */
    {

                }
#line 1892 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 333 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[0].info)!=type_int && (yyvsp[0].info)!=type_real)
                    {
                        printf("ERROR: %d unable to calculate negetive\n",(yyvsp[0].info));
                    }
                    (yyval.info)=(yyvsp[0].info);
                }
#line 1904 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 340 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[-1].info);}
#line 1910 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 342 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR: expression '*' type error");
                    (yyval.info)=(yyvsp[-2].info);
                }
#line 1920 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 348 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR: expression '/' type error");
                    (yyval.info)=(yyvsp[-2].info);
                }
#line 1930 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 353 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR: expression '%' type error");
                    (yyval.info)=(yyvsp[-2].info);
                }
#line 1940 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 359 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR: expression '+' type error");
                    (yyval.info)=(yyvsp[-2].info);
                }
#line 1950 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 365 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR: expression '-' type error");
                    (yyval.info)=(yyvsp[-2].info);
                }
#line 1960 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 370 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 1966 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 371 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 1972 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 373 "parser.y" /* yacc.c:1646  */
    {
                    functionVariable.clear();
                }
#line 1980 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 377 "parser.y" /* yacc.c:1646  */
    {
                    if(s_table.lookup((yyvsp[-3].info))==0)
                    {
                        printf("ERROR: ID %s not found\n",(yyvsp[-3].info));
                    }
                    else if(s_table.canAccess((yyvsp[-3].info),currentStack)==0)
                    {
                        printf("ERROR: %s is unable to reach\n",(yyvsp[-3].info));
                        (yyval.info)=s_table.table[(yyvsp[-3].info)].type;
                    }
                    else
                        (yyval.info)=s_table.table[(yyvsp[-3].info)].type;
                }
#line 1998 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 391 "parser.y" /* yacc.c:1646  */
    {
                    if(s_table.lookup((yyvsp[0].info))==0)
                    {
                        printf("ERROR: ID %s not found\n",(yyvsp[0].info));
                    }
                    else if(s_table.canAccess((yyvsp[0].info),currentStack)==0)
                    {

                        printf("ERROR: %s stack: %d is unable to reach\n",(yyvsp[0].info),currentStack);
                        (yyval.info)=s_table.table[(yyvsp[0].info)].type;
                    }
                    else
                        (yyval.info)=s_table.table[(yyvsp[0].info)].type;
                }
#line 2017 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 406 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 2023 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 407 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 2029 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 408 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 2035 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 409 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 2041 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 410 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[0].info);}
#line 2047 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 412 "parser.y" /* yacc.c:1646  */
    {(yyval.info)=(yyvsp[-1].info);}
#line 2053 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 414 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR:bool_expression '<' type error");
                    (yyval.info)=type_bool;
                    }
#line 2063 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 420 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR:bool_expression '<=' type error");
                    (yyval.info)=type_bool;
                    }
#line 2073 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 426 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR:bool_expression '=' type error");
                    (yyval.info)=type_bool;
                    }
#line 2083 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 432 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR:bool_expression '>=' type error");
                    (yyval.info)=type_bool;
                    }
#line 2093 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 438 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR:bool_expression '>' type error");
                    (yyval.info)=type_bool;
                    }
#line 2103 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 444 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR:bool_expression '!=' type error");
                    (yyval.info)=type_bool;
                    }
#line 2113 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 450 "parser.y" /* yacc.c:1646  */
    {
                        (yyval.info)=type_bool;
                    }
#line 2121 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 454 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR:bool_expression 'AND' type error");
                    (yyval.info)=type_bool;
                    }
#line 2131 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 460 "parser.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].info)!=(yyvsp[0].info))
                        yyerror("ERROR:bool_expression 'OR' type error");
                    (yyval.info)=type_bool;
                    }
#line 2141 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 467 "parser.y" /* yacc.c:1646  */
    {
                            if(s_table.lookup((yyvsp[-2].info))==0)
                            {
                                yyerror("ERROR: function not declare");
                            }
                            else if(s_table.table[(yyvsp[-2].info)].masterType!=is_func)
                            {
                                printf("ERROR: %s is not function\n",(yyvsp[-2].info));
                                (yyval.info)=s_table.table[(yyvsp[-2].info)].type;
                            }
                            else
                            {
                                (yyval.info)=s_table.table[(yyvsp[-2].info)].type;
                            }
                        }
#line 2161 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 483 "parser.y" /* yacc.c:1646  */
    {
                            if(s_table.lookup((yyvsp[-4].info))==0)
                            {
                                printf("ERROR: function %s not declare\n",(yyvsp[-4].info));
                            }
                            else if(s_table.table[(yyvsp[-4].info)].masterType!=is_func)
                            {
                                printf("ERROR: %s is not function\n",(yyvsp[-4].info));
                                (yyval.info)=s_table.table[(yyvsp[-4].info)].type;

                            }
                            else if(s_table.funcVarCorrect((yyvsp[-4].info),functionVariable)==0)
                            {
                                printf("ERROR: function %s input error\n",(yyvsp[-4].info));
                                (yyval.info)=s_table.table[(yyvsp[-4].info)].type;
                            }
                            else
                            {
                                (yyval.info)=s_table.table[(yyvsp[-4].info)].type;
                            }
                        }
#line 2187 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 506 "parser.y" /* yacc.c:1646  */
    {
                        funcVar temp;
                        temp.funcVarType=intToType((yyvsp[0].info));
                        temp.isArray=0;
                        functionVariable.push_back(temp);
                    }
#line 2198 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 514 "parser.y" /* yacc.c:1646  */
    {
                        funcVar temp;
                        temp.funcVarType=intToType((yyvsp[0].info));
                        temp.isArray=0;
                        functionVariable.push_back(temp);
                    }
#line 2209 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 524 "parser.y" /* yacc.c:1646  */
    {
                    scopeStack.push(currentStack);
                    currentStack=++stackNumber;
                    s_table.insertStack(scopeStack.top(),currentStack);
                }
#line 2219 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 533 "parser.y" /* yacc.c:1646  */
    {
                    if(scopeStack.empty())
                    {
                        currentStack=0;
                    }
                    else
                    {
                        currentStack=scopeStack.top();
                        scopeStack.pop();
                    }
                }
#line 2235 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 545 "parser.y" /* yacc.c:1646  */
    {
                    scopeStack.push(currentStack);
                    currentStack=++stackNumber;
                    s_table.insertStack(scopeStack.top(),currentStack);
                }
#line 2245 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 552 "parser.y" /* yacc.c:1646  */
    {
                    if(scopeStack.empty())
                    {
                        currentStack=0;
                    }
                    else
                    {
                        currentStack=scopeStack.top();
                        scopeStack.pop();
                    }
                }
#line 2261 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 565 "parser.y" /* yacc.c:1646  */
    {
                    scopeStack.push(currentStack);
                    currentStack=++stackNumber;
                    s_table.insertStack(scopeStack.top(),currentStack);

                }
#line 2272 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 573 "parser.y" /* yacc.c:1646  */
    {
                    if(scopeStack.empty())
                    {
                        currentStack=0;
                    }
                    else
                    {
                        currentStack=scopeStack.top();
                        scopeStack.pop();
                    }
                }
#line 2288 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 585 "parser.y" /* yacc.c:1646  */
    {
                    if(s_table.lookup((yyvsp[-5].info))==0)
                    {
                        printf("ERROR: for loop $s not found\n",(yyvsp[-5].info));
                    }
                    if((yyvsp[-3].info)!=(yyvsp[0].info))
                    {
                        printf("ERROR: for loop range error\n");
                    }
                    scopeStack.push(currentStack);
                    currentStack=++stackNumber;
                    s_table.insertStack(scopeStack.top(),currentStack);
                }
#line 2306 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 600 "parser.y" /* yacc.c:1646  */
    {
                    if(scopeStack.empty())
                    {
                        currentStack=0;
                    }
                    else
                    {
                        currentStack=scopeStack.top();
                        scopeStack.pop();
                    }
                }
#line 2322 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 612 "parser.y" /* yacc.c:1646  */
    {
                    if(s_table.lookup((yyvsp[-5].info))==0)
                    {
                        printf("ERROR: for loop $s not found\n",(yyvsp[-5].info));
                    }
                    if((yyvsp[-3].info)!=(yyvsp[0].info))
                    {
                        printf("ERROR: for loop range error\n");
                    }
                    scopeStack.push(currentStack);
                    currentStack=++stackNumber;
                    s_table.insertStack(scopeStack.top(),currentStack);
                }
#line 2340 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 627 "parser.y" /* yacc.c:1646  */
    {
                    if(scopeStack.empty())
                    {
                        currentStack=0;
                    }
                    else
                    {
                        currentStack=scopeStack.top();
                        scopeStack.pop();
                    }
                }
#line 2356 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 2360 "y.tab.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

yyreturn:
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
                  yystos[*yyssp], yyvsp);
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
#line 639 "parser.y" /* yacc.c:1906  */


void yyerror(char *msg)
{
    fprintf(stderr, "%s\n", msg);
}

#include "lex.yy.cpp"


int main(int argc,char **argv)
{
    /* open the source program file */
    if (argc != 2) {
        printf ("Usage: sc filename\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");         /* open input file */
    string fileName=argv[1];
    fileName.replace(fileName.size()-3,3,"");
    javaASS.open(fileName+".jasm");
    javaASS<<"class "<<fileName<<"{\nmethod public static void main(java.lang.String[])\nmax_stack 15\n max_locals 15\n{"<<endl;

    /* perform parsing */
    if (yyparse() == 1)                 /* parsing */
        yyerror("Parsing error !");     /* syntax error */
    s_table.dump();
    javaASS<<"return\n}\n}"<<endl;
    javaASS.close();
}
