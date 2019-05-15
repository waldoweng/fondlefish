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
#line 1 "pmysql.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

extern int yylex (void);

void yyerror(char *s, ...);
void emit(char *s, ...);

#line 77 "pmysql.tab.c" /* yacc.c:339  */

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
   by #include "pmysql.tab.h".  */
#ifndef YY_YY_PMYSQL_TAB_H_INCLUDED
# define YY_YY_PMYSQL_TAB_H_INCLUDED
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
    YYSTART = 258,
    NAME = 259,
    STRING = 260,
    INTNUM = 261,
    BOOL = 262,
    APPROXNUM = 263,
    USERVAR = 264,
    ASSIGN = 265,
    OR = 266,
    ANDOP = 267,
    IN = 268,
    IS = 269,
    LIKE = 270,
    REGEXP = 271,
    NOT = 272,
    BETWEEN = 273,
    COMPARISON = 274,
    SHIFT = 275,
    MOD = 276,
    UMINUS = 277,
    ADD = 278,
    ALL = 279,
    ALTER = 280,
    ANALYZE = 281,
    AND = 282,
    ANY = 283,
    AS = 284,
    ASC = 285,
    AUTO_INCREMENT = 286,
    BEFORE = 287,
    BIGINT = 288,
    BINARY = 289,
    BIT = 290,
    BLOB = 291,
    BOTH = 292,
    BY = 293,
    CALL = 294,
    CASCADE = 295,
    CASE = 296,
    CHANGE = 297,
    CHAR = 298,
    CHECK = 299,
    COLLATE = 300,
    COLUMN = 301,
    COMMENT = 302,
    CONDITION = 303,
    CONSTRAINT = 304,
    CONTINUE = 305,
    CONVERT = 306,
    CREATE = 307,
    CROSS = 308,
    CURRENT_DATE = 309,
    CURRENT_TIME = 310,
    CURRENT_TIMESTAMP = 311,
    CURRENT_USER = 312,
    CURSOR = 313,
    DATABASE = 314,
    DATABASES = 315,
    DATE = 316,
    DATETIME = 317,
    DAY_HOUR = 318,
    DAY_MICROSECOND = 319,
    DAY_MINUTE = 320,
    DAY_SECOND = 321,
    DECIMAL = 322,
    DECLARE = 323,
    DEFAULT = 324,
    DELAYED = 325,
    DELETE = 326,
    DESC = 327,
    DESCRIBE = 328,
    DETERMINISTIC = 329,
    DISTINCT = 330,
    DISTINCTROW = 331,
    DIV = 332,
    DOUBLE = 333,
    DROP = 334,
    DUAL = 335,
    EACH = 336,
    ELSE = 337,
    ELSEIF = 338,
    END = 339,
    ENUM = 340,
    ESCAPE = 341,
    EXISTS = 342,
    EXIT = 343,
    EXPLAIN = 344,
    FETCH = 345,
    FLOAT = 346,
    FOR = 347,
    FORCE = 348,
    FOREIGN = 349,
    FROM = 350,
    FULLTEXT = 351,
    GRANT = 352,
    GROUP = 353,
    HAVING = 354,
    HIGH_PRIORITY = 355,
    HOUR_MICROSECOND = 356,
    HOUR_MINUTE = 357,
    HOUR_SECOND = 358,
    IF = 359,
    IGNORE = 360,
    INFILE = 361,
    INNER = 362,
    INOUT = 363,
    INSENSITIVE = 364,
    INSERT = 365,
    INTEGER = 366,
    INTERVAL = 367,
    INTO = 368,
    ITERATE = 369,
    JOIN = 370,
    KEY = 371,
    KEYS = 372,
    KILL = 373,
    LEADING = 374,
    LEAVE = 375,
    LEFT = 376,
    LIMIT = 377,
    LINES = 378,
    LOAD = 379,
    LOCALTIME = 380,
    LOCALTIMESTAMP = 381,
    LOCK = 382,
    LONG = 383,
    LONGBLOB = 384,
    LONGTEXT = 385,
    LOOP = 386,
    LOW_PRIORITY = 387,
    MATCH = 388,
    MEDIUMBLOB = 389,
    MEDIUMINT = 390,
    MEDIUMTEXT = 391,
    MINUTE_MICROSECOND = 392,
    MINUTE_SECOND = 393,
    MODIFIES = 394,
    NATURAL = 395,
    NO_WRITE_TO_BINLOG = 396,
    NULLX = 397,
    NUMBER = 398,
    ON = 399,
    ONDUPLICATE = 400,
    OPTIMIZE = 401,
    OPTION = 402,
    OPTIONALLY = 403,
    ORDER = 404,
    OUT = 405,
    OUTER = 406,
    OUTFILE = 407,
    PRECISION = 408,
    PRIMARY = 409,
    PROCEDURE = 410,
    PURGE = 411,
    QUICK = 412,
    READ = 413,
    READS = 414,
    REAL = 415,
    REFERENCES = 416,
    RELEASE = 417,
    RENAME = 418,
    REPEAT = 419,
    REPLACE = 420,
    REQUIRE = 421,
    RESTRICT = 422,
    RETURN = 423,
    REVOKE = 424,
    RIGHT = 425,
    ROLLUP = 426,
    SCHEMA = 427,
    SCHEMAS = 428,
    SECOND_MICROSECOND = 429,
    SELECT = 430,
    SENSITIVE = 431,
    SEPARATOR = 432,
    SET = 433,
    SHOW = 434,
    SAMLLINT = 435,
    SOME = 436,
    SONAME = 437,
    SPATIAL = 438,
    SPECIFIC = 439,
    SQL = 440,
    SQLEXCEPTION = 441,
    SQLSTATE = 442,
    SQLWARNING = 443,
    SQL_BIG_RESULT = 444,
    SQL_CALC_FOUND_ROWS = 445,
    SQL_SMALL_RESULT = 446,
    SSL = 447,
    STARTING = 448,
    STRAIGHT_JOIN = 449,
    TABLE = 450,
    TEMPORARY = 451,
    TERMINATED = 452,
    TEXT = 453,
    THEN = 454,
    TIME = 455,
    TIMESTAMP = 456,
    TINYINT = 457,
    TINYBLOB = 458,
    TINYTEXT = 459,
    TO = 460,
    TRAILING = 461,
    TRIGGER = 462,
    UNDO = 463,
    UNION = 464,
    UNIQUE = 465,
    UNLOCK = 466,
    UNSIGNED = 467,
    UPDATE = 468,
    USAGE = 469,
    USE = 470,
    USING = 471,
    UTC_DATE = 472,
    UTC_TIME = 473,
    UTC_TIMESTAMP = 474,
    VALUES = 475,
    VARBINARY = 476,
    VARCHAR = 477,
    VARYING = 478,
    WHEN = 479,
    WHERE = 480,
    WHILE = 481,
    WITH = 482,
    WRITE = 483,
    XOR = 484,
    YEAR = 485,
    YEAR_MONTH = 486,
    ZEROFILL = 487,
    FSUBSTRING = 488,
    FTRIM = 489,
    FDATE_ADD = 490,
    FDATE_SUB = 491,
    FCOUNT = 492
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "pmysql.y" /* yacc.c:355  */

    int intval;
    double floatval;
    char *strval;
    int subtok;

#line 362 "pmysql.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PMYSQL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 379 "pmysql.tab.c" /* yacc.c:358  */

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1700

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  254
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  296
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  601

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   494

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
     251,   252,    26,    24,   253,    25,   248,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   247,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
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
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   249,   250
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   290,   290,   291,   295,   296,   297,   298,   299,   300,
     301,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   323,   324,
     325,   326,   329,   330,   331,   332,   334,   337,   340,   341,
     344,   345,   348,   349,   350,   351,   352,   356,   360,   361,
     364,   365,   366,   368,   369,   372,   373,   374,   377,   378,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   392,
     393,   394,   395,   398,   399,   402,   403,   406,   407,   410,
     411,   412,   415,   419,   422,   423,   428,   429,   432,   433,
     436,   437,   440,   441,   442,   445,   446,   449,   450,   453,
     454,   457,   457,   458,   461,   462,   465,   466,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   481,   482,   483,
     486,   489,   490,   491,   494,   495,   498,   499,   502,   503,
     504,   505,   508,   509,   512,   513,   514,   515,   516,   519,
     520,   521,   524,   525,   528,   529,   532,   533,   534,   537,
     538,   541,   542,   545,   546,   547,   550,   551,   554,   555,
     558,   562,   565,   568,   569,   570,   571,   574,   577,   578,
     581,   582,   585,   589,   592,   596,   597,   600,   601,   602,
     603,   604,   607,   608,   611,   612,   615,   616,   619,   620,
     621,   622,   625,   629,   631,   633,   635,   640,   644,   647,
     651,   655,   660,   663,   667,   668,   669,   672,   674,   676,
     678,   682,   685,   686,   689,   690,   694,   697,   701,   705,
     709,   713,   717,   721,   722,   725,   726,   729,   730,   731,
     734,   735,   738,   739,   740,   741,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   753,   754,   755,   759,   760,
     763,   764,   765,   768,   769,   770,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   804,   805,   808,   811,   812,
     813,   816,   819,   822,   822,   825,   827
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "YYSTART", "NAME", "STRING", "INTNUM",
  "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "OR", "ANDOP", "IN", "IS",
  "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON", "'|'", "'&'",
  "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "END", "ENUM", "ESCAPE", "EXISTS",
  "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN", "FROM",
  "FULLTEXT", "GRANT", "GROUP", "HAVING", "HIGH_PRIORITY",
  "HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND", "IF", "IGNORE",
  "INFILE", "INNER", "INOUT", "INSENSITIVE", "INSERT", "INTEGER",
  "INTERVAL", "INTO", "ITERATE", "JOIN", "KEY", "KEYS", "KILL", "LEADING",
  "LEAVE", "LEFT", "LIMIT", "LINES", "LOAD", "LOCALTIME", "LOCALTIMESTAMP",
  "LOCK", "LONG", "LONGBLOB", "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH",
  "MEDIUMBLOB", "MEDIUMINT", "MEDIUMTEXT", "MINUTE_MICROSECOND",
  "MINUTE_SECOND", "MODIFIES", "NATURAL", "NO_WRITE_TO_BINLOG", "NULLX",
  "NUMBER", "ON", "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY",
  "ORDER", "OUT", "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE",
  "PURGE", "QUICK", "READ", "READS", "REAL", "REFERENCES", "RELEASE",
  "RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE",
  "RIGHT", "ROLLUP", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND", "SELECT",
  "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SAMLLINT", "SOME", "SONAME",
  "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TERMINATED", "TEXT",
  "THEN", "TIME", "TIMESTAMP", "TINYINT", "TINYBLOB", "TINYTEXT", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "XOR", "YEAR", "YEAR_MONTH",
  "ZEROFILL", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT",
  "';'", "'.'", "\"/\"", "\"%\"", "'('", "')'", "','", "$accept",
  "stmt_list", "expr", "val_list", "opt_val_list", "trim_ltb",
  "interval_exp", "case_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition", "column_atts",
  "opt_length", "opt_binary", "opt_uz", "opt_csc", "data_type",
  "enum_list", "create_select_statement", "opt_ignore_replace", "set_stmt",
  "set_list", "set_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    33,   273,
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,    59,    46,   493,
     494,    40,    41,    44
};
# endif

#define YYPACT_NINF -348

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-348)))

#define YYTABLE_NINF -219

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-219)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     630,    27,  -348,  -348,  -348,  -348,    34,     0,    88,  -197,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,   -32,   -32,
    -348,   -72,    40,   678,   678,   195,    66,   -92,  -348,    51,
       1,  -348,   -50,  -348,    74,   170,   207,   -32,   -43,   235,
    -348,  -348,  -348,   -77,  -348,  -348,  -348,  -348,  -348,   240,
     252,    42,  -348,  -348,  -348,  -348,   251,   760,   760,   760,
    -348,  -348,   760,   321,  -348,  -348,  -348,  -348,  -348,    52,
    -348,  -348,  -348,  -348,  -348,    56,    60,    64,    70,    86,
      49,   -76,  -348,   760,   760,    34,     2,     4,    -2,    -1,
    -136,  1273,  -348,  -348,   311,  -348,  -348,  -348,  -348,   347,
     328,  -348,   135,   -96,     1,   354,  -120,  -110,   359,   760,
     760,    -9,    -9,    32,    32,   760,  1034,   -51,   181,   760,
     259,   760,   760,   327,  -348,   760,   760,   116,    24,   760,
     760,   273,   760,   130,   760,   760,   760,   760,   760,   760,
     760,   760,   375,   760,   760,   760,  -348,     1,   760,  1413,
    1413,  -348,   378,   -84,   137,    65,   392,     1,  -348,  -348,
    -348,   -73,  -348,     1,   277,   237,  -348,   408,   -15,  -348,
     760,   260,     1,  -151,   -43,   430,   453,  -138,   430,  -104,
    -348,   495,  -348,   208,  1413,  1098,   -44,   760,  -348,   760,
     210,   456,   231,  -348,  -348,  -348,   247,   760,   522,   563,
     274,   901,  1235,  1207,   590,  -348,    28,  -348,  1445,  1445,
     289,   760,   760,  1143,   306,   307,   308,   181,   193,   381,
     464,   400,    -7,    -7,    63,    63,    32,  -348,  1413,  1413,
    1413,  -151,  -348,    44,   436,   437,  -348,  -348,  -348,   -13,
    -150,  1273,   237,   237,   444,   438,     1,  -348,   466,  -348,
    -348,  -348,   602,    21,  -348,   311,  1413,   562,   479,  -151,
    -348,  -348,   591,  -102,  -348,    95,   361,   462,  -102,   361,
     462,   760,  -348,   760,   760,  -348,  1169,  1274,  -348,   760,
    -348,  -348,  1296,   496,   496,  -348,  -348,   366,   368,  -348,
    -348,   590,  1445,  1445,   760,   181,   181,   181,   370,   525,
     -84,   528,   528,   760,   631,   637,   260,  -348,  -348,     1,
     760,   -98,     1,   -85,  1461,   509,   391,   518,   104,  -348,
     181,   760,   760,  -348,  -348,   596,   520,   643,  -348,  -348,
     644,   619,  -100,  -348,  -348,  -100,  -348,  -348,  1413,  1338,
    -348,   760,   856,   760,   760,   399,   404,  -348,  -348,   406,
     413,   426,   414,   415,   416,  -348,   605,   564,  -348,   546,
     420,   422,  1413,   657,   -11,   479,  -348,  1413,   760,   427,
    -348,  -348,   -98,    21,  -348,   429,   429,   429,  -348,   429,
    -348,  -348,   429,   429,   439,   429,   429,  -348,   645,  -348,
     429,   645,   429,   442,   429,   645,  -348,  -348,   429,  -348,
     645,   445,   447,  -348,  -348,   448,   453,   449,   -22,    21,
    -348,   996,   450,   705,  -348,  1413,   467,   675,  -348,  -348,
    1413,   109,   457,  -348,  -348,  -348,  1413,   760,  -348,   452,
     969,  -348,  -348,  -348,  -348,  -348,  -348,  -348,   760,   760,
     260,  -348,   697,   697,   760,   760,   703,  -348,  1413,   453,
    -348,   147,   706,  -348,  -348,  -348,  -348,  -348,  -348,   718,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,   718,  -348,  -348,
    -348,  -348,   726,   730,   217,   453,   156,   453,  -348,  -348,
    -348,  -348,  -348,   760,   760,   430,   733,  -348,   841,   619,
    1413,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,    -6,  1413,   479,  -348,   163,   169,  1413,  1413,   691,
     175,    36,   192,   -63,   144,   -63,   -63,  -348,   201,   -63,
     -63,   144,   -63,   144,   -63,   213,   -63,   144,   -63,   144,
     491,   494,   601,  -348,   742,   523,  -348,  -348,   628,   -80,
     239,  -348,   243,   996,  1413,   501,  -348,  1413,  -348,  1413,
     270,   575,  -348,   634,  -348,   755,  -348,   760,  -348,  -348,
    -348,   756,  -348,  -348,   574,   758,  -348,   765,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,   453,
    -348,  -348,  -348,  -348,  -348,   453,  -348,  -348,  1413,   521,
     774,  -348,   144,  -348,   144,   144,   297,   527,  -348,  -348,
    -348
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   223,   166,   177,   177,   108,     0,   177,     0,     0,
      83,   161,   173,   198,   202,   211,   216,   291,   214,   214,
     224,     0,     0,   183,   183,     0,     0,   292,   293,     0,
       0,     1,     0,     2,     0,     0,     0,   214,   170,     0,
     165,   163,   164,     0,   179,   180,   181,   182,   178,     0,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     119,   109,     0,     0,    80,    81,    79,   110,   111,     0,
     112,   115,   116,   114,   113,     0,     0,     0,     0,     0,
     123,    84,   117,     0,     0,     0,   181,   178,   123,     0,
       0,   124,   126,   127,   133,     3,   215,   212,   213,     0,
       0,   168,    86,     0,     0,     0,   184,   184,     0,    40,
       0,    25,    26,    17,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,   296,
     295,   294,     0,   155,     0,     0,     0,     0,   141,   140,
     144,   148,   145,     0,     0,   142,   132,     0,   288,   171,
       0,    99,     0,    86,   170,     0,     0,     0,     0,     0,
       5,    38,    41,     0,    36,     0,     0,     0,    71,     0,
       0,    38,     0,    57,    55,    56,     0,     0,     0,     0,
       0,     0,    19,    18,     0,    34,     0,    32,    75,    77,
       0,     0,     0,     0,     0,     0,     0,     0,    27,    21,
      22,    24,    11,    12,    13,    16,    23,   121,    20,    14,
      15,    86,   118,   123,     0,     0,   128,   160,   131,     0,
      86,   125,   142,   142,     0,   135,     0,   143,     0,   130,
     289,   290,     0,   230,   220,   133,    87,     0,   101,    86,
     167,   169,     0,   175,   106,     0,     0,   175,   175,     0,
     175,     0,    47,     0,     0,    69,     0,     0,    46,     0,
      50,    53,     0,     0,     0,    48,    49,     0,     0,    35,
      33,     0,    76,    78,     0,     0,     0,     0,     0,    88,
     155,   157,   157,     0,     0,     0,    99,   146,   147,     0,
       0,   149,     0,   288,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   162,   172,     0,     0,     0,   192,   185,
       0,     0,   175,   197,   200,   175,   201,    39,    73,     0,
      72,     0,     0,     0,     0,     0,     0,    42,    44,     0,
       0,    37,     0,     0,     0,    28,     0,    97,   129,     0,
       0,     0,   207,     0,     0,   101,   138,   136,     0,     0,
     134,   150,     0,   230,   222,   245,   245,   245,   276,   245,
     266,   269,   245,   245,     0,   245,   245,   278,   248,   277,
     245,   248,   245,     0,   245,   248,   267,   268,   245,   275,
     248,     0,     0,   270,   232,     0,     0,     0,   288,   230,
     287,    92,   100,   102,   194,   193,     0,     0,   107,   189,
     188,     0,     0,   174,   199,    70,    74,     0,    51,     0,
       0,    58,    59,    43,    45,    31,    29,    30,     0,     0,
      99,   156,     0,     0,     0,     0,     0,   203,   151,     0,
     137,     0,     0,   250,   273,   256,   253,   250,   250,     0,
     250,   250,   249,   253,   250,   253,   250,     0,   250,   253,
     250,   253,     0,     0,   231,     0,     0,     0,   219,   226,
      93,    94,    90,     0,     0,     0,     0,   186,     0,     0,
      52,    54,    60,    61,    62,    63,    66,    67,    68,    65,
      64,    95,    98,   101,   158,     0,     0,   208,   209,     0,
       0,   288,     0,   261,   271,   265,   263,   285,     0,   264,
     260,   282,   259,   281,   262,     0,   258,   280,   257,   279,
       0,     0,     0,   239,     0,     0,   243,   234,     0,     0,
       0,   228,     0,    92,   103,   176,   196,   195,   191,   190,
       0,     0,    89,   104,   154,     0,   153,     0,   152,   221,
     246,     0,   251,   252,     0,     0,   253,     0,   253,   274,
     253,   233,   244,   235,   236,   238,   237,   242,   241,     0,
     229,   227,    91,   187,    96,     0,    85,   159,   210,     0,
       0,   255,   283,   286,   284,   272,     0,   105,   247,   254,
     240
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -348,  -348,   -25,    23,  -348,  -348,   497,   672,   781,  1276,
     119,  -348,   352,   248,  -348,  -348,  -250,  -347,  -348,    78,
    -348,  -348,   646,   -64,   409,   636,  -124,   540,  -348,  -348,
      98,  -348,  -348,  -348,   433,   499,   500,   363,  -348,  -348,
    -348,   768,   635,  -348,   165,   267,   784,   708,   549,   331,
    -177,  -348,  -348,  -348,  -348,  -348,   172,  -348,  -348,   454,
     412,  -348,   993,  -267,   432,   216,  -348,   355,  -287,  -348,
    -348,  -348,   741
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,   181,   182,   183,   197,   345,   117,     9,    10,
     171,   357,   412,   482,   552,   440,   258,   323,   586,   265,
      25,    81,    82,   146,    90,    91,    92,   167,    93,   164,
     248,   165,   244,   370,   371,   236,   360,   505,    94,    11,
      22,    43,   101,    12,   328,    23,    49,   177,   332,   421,
     263,    13,    14,    30,   240,    15,    35,    16,    21,   318,
     319,   474,   453,   463,   513,   514,   404,   518,   254,   255,
      17,    27,    28
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   268,   124,    88,  -204,    88,  -206,   303,  -205,   445,
     132,   133,   134,   135,   136,   137,   138,   139,   447,   139,
     140,   141,   140,   141,   153,   314,   374,   104,   147,   250,
     234,   205,   111,   112,   113,   289,   142,   114,   116,   245,
     187,   206,   188,    26,    38,   578,     5,   274,   124,   275,
      33,   156,   326,   124,   326,   368,   365,   242,   149,   150,
     125,   126,   127,   128,   129,   130,   131,   175,   132,   133,
     134,   135,   136,   137,   138,   139,    83,   178,   140,   141,
       5,    34,   142,   170,   170,   184,    84,   142,    31,   251,
     185,   266,   250,   141,   191,    18,   198,   199,   201,   250,
     202,   203,   157,   305,   208,   209,   243,   213,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   157,   228,   229,
     230,   478,   311,    80,   465,   269,   315,   369,   469,   172,
      44,   176,    37,   471,    51,    52,    53,    54,    55,    56,
     235,   176,   192,   196,    39,   256,   316,    57,    58,     1,
     250,   327,   251,   422,    40,    59,   553,   105,   562,   251,
      45,    85,   276,   214,   277,    86,   373,   215,     2,   300,
      96,   579,   282,    62,    97,   207,   105,   148,   563,   290,
      63,    41,   189,     5,   317,   366,   292,   293,   372,   189,
     503,    36,    87,    64,    65,    66,   564,    95,   565,    51,
      52,    53,    54,    55,    56,   100,    42,     3,    19,    99,
     251,    98,    57,    58,   134,   135,   136,   137,   138,   139,
      59,    60,   140,   141,   559,  -217,    69,   287,    61,   143,
     551,   143,    20,   252,   532,   304,   253,   446,    62,   102,
     144,   145,   144,   145,   106,    63,   152,   483,   338,   339,
      89,  -204,    89,  -206,   342,  -205,   107,   533,    64,    65,
      66,   110,     4,    51,    52,    53,    54,    55,    56,   351,
     143,    24,     5,   534,    29,     6,    57,    58,   362,    67,
      68,   144,   145,  -218,    59,   367,   210,   143,   211,   212,
     108,    69,   260,   109,   337,   535,   411,   413,   144,   145,
     415,   143,    62,   118,    70,   193,   420,   119,   545,    63,
       7,   120,   144,   145,   349,   121,   426,   238,   157,   430,
     216,   122,    64,    65,    66,    51,    52,    53,    54,    55,
      56,    51,    52,    53,    54,    55,    56,   123,    57,    58,
     307,   308,   536,   448,    57,    58,    59,   329,   330,   166,
     299,   168,    59,   200,   169,    69,   408,   409,   174,   306,
    -170,   487,   488,   180,    62,     5,   429,   204,   537,   170,
      62,    63,    75,    76,    77,    78,    79,    63,   324,   227,
     538,   217,   233,   100,    64,    65,    66,   194,  -170,   237,
      64,    65,    66,    71,    72,    73,   239,   247,    74,   511,
     409,   246,   490,   135,   136,   137,   138,   139,   541,   330,
     140,   141,   249,   411,   502,   554,   555,    69,   257,   507,
     508,   556,   555,    69,   137,   138,   139,   558,   330,   140,
     141,   143,   333,   334,   262,   336,   539,    75,    76,    77,
      78,    79,   144,   145,   560,   561,   133,   134,   135,   136,
     137,   138,   139,   566,   567,   140,   141,   264,   543,   544,
     272,   547,   278,   549,   420,   568,   567,   125,   126,   127,
     128,   129,   130,   131,   195,   132,   133,   134,   135,   136,
     137,   138,   139,   280,   476,   140,   141,   136,   137,   138,
     139,   580,   330,   140,   141,   581,   330,   423,   155,   281,
     424,    75,    76,    77,    78,    79,   125,   126,   127,   128,
     129,   130,   131,   173,   132,   133,   134,   135,   136,   137,
     138,   139,   583,   488,   140,   141,   285,   510,   573,   574,
     575,   576,   588,   125,   126,   127,   128,   129,   130,   131,
     291,   132,   133,   134,   135,   136,   137,   138,   139,   600,
     330,   140,   141,   540,   115,   542,   231,   295,   296,   297,
     279,   301,   302,    75,    76,    77,    78,    79,   309,    75,
      76,    77,    78,    79,   125,   126,   127,   128,   129,   130,
     131,   259,   132,   133,   134,   135,   136,   137,   138,   139,
     312,   310,   140,   141,    51,    52,    53,    54,    55,    56,
      51,    52,    53,    54,    55,    56,   313,    57,    58,   321,
     322,   325,   331,    57,    58,    59,   326,   344,   347,   143,
     348,    59,   355,    51,    52,    53,    54,    55,    56,   359,
     144,   145,   356,    62,   405,   363,    57,    58,   143,    62,
      63,   364,   406,   407,    59,   416,    63,   417,   418,   144,
     145,   431,   438,    64,    65,    66,   432,   596,   433,    64,
      65,    66,    62,   597,   143,   434,   435,   436,   437,    63,
     441,   442,   439,   443,   414,   144,   145,   444,   449,   521,
     452,   523,    64,    65,    66,   527,    69,   529,   462,   485,
     459,     1,    69,   467,   143,   486,   472,   419,   473,   475,
     477,   504,   143,   483,   491,   144,   145,   509,   489,   271,
       2,   557,   512,   144,   145,    69,   125,   126,   127,   128,
     129,   130,   131,   517,   132,   133,   134,   135,   136,   137,
     138,   139,   530,   143,   140,   141,   531,    51,    52,    53,
      54,    55,    56,   569,   144,   145,   570,   572,   271,     3,
      57,    58,   571,   577,   327,   584,   585,    44,    59,   587,
     143,   590,   589,   591,    51,    52,    53,    54,    55,    56,
     593,   144,   145,   598,     5,   283,    62,    57,    58,   599,
     330,   346,   592,    63,   594,    59,   595,    45,   186,    32,
     501,   582,    46,   241,   232,   320,    64,    65,    66,   358,
      47,   143,   361,    62,     4,   450,   506,   103,    50,   261,
      63,   546,   144,   145,     5,   179,   284,     6,   335,    48,
     550,   479,   525,    64,    65,    66,   151,   451,     0,    69,
       0,     0,    75,    76,    77,    78,    79,     0,    75,    76,
      77,    78,    79,     0,     0,    51,    52,    53,    54,    55,
      56,     0,     7,     0,     0,     0,    69,     0,    57,    58,
       0,    75,    76,    77,    78,    79,    59,   125,   126,   127,
     128,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,     0,    62,   140,   141,     0,     0,   515,
     516,    63,   519,   520,     0,     0,   522,     0,   524,     0,
     526,     0,   528,     0,    64,    65,    66,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   548,
     132,   133,   134,   135,   136,   137,   138,   139,     0,     0,
     140,   141,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,   145,     0,   427,   484,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
     125,   126,   127,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,   139,     0,     0,   140,   141,
       0,     0,    75,    76,    77,    78,    79,   125,   126,   127,
     128,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,   140,   141,     0,     0,     0,
       0,     0,     0,     0,     0,   480,     0,     0,     0,     0,
       0,   492,   493,   494,   495,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,     0,     0,   140,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   481,     0,   496,
     497,   498,     0,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   145,     0,   428,   125,
     126,   127,   128,   129,   130,   131,     0,   132,   133,   134,
     135,   136,   137,   138,   139,     0,     0,   140,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   145,     0,   286,   125,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,   136,   137,   138,   139,
       0,     0,   140,   141,     0,     0,     0,     0,     0,   294,
     125,   126,   127,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,   139,     0,     0,   140,   141,
       0,     0,     0,     0,     0,     0,     0,   143,   499,   500,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
     127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   143,     0,   140,   141,     0,     0,
       0,     0,     0,     0,     0,   144,   145,   126,   127,   128,
     129,   130,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   340,     0,   140,   141,     0,   115,     0,     0,
       0,     0,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   125,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,     0,     0,   140,   141,     0,   273,   125,   126,   127,
     128,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     0,   140,   141,     0,     0,     0,
       0,     0,     0,     0,     0,   158,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   144,   145,   125,
     126,   127,   128,   129,   130,   131,     0,   132,   133,   134,
     135,   136,   137,   138,   139,   154,     0,   140,   141,   454,
     455,     0,   456,     0,     0,   457,   458,     0,   460,   461,
       0,   143,     0,   464,     0,   466,     0,   468,     0,   159,
       0,   470,   144,   145,   190,     0,     0,  -139,     0,     0,
     343,     0,     0,   160,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,   145,
       0,     0,   161,     0,   125,   126,   127,   128,   129,   130,
     131,   425,   132,   133,   134,   135,   136,   137,   138,   139,
       0,     0,   140,   141,     0,   143,     0,     0,     0,     0,
       0,     0,   162,   267,     0,   270,   144,   145,  -219,  -219,
    -219,  -219,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,     0,   143,   140,   141,   163,     0,     0,     0,
     288,     0,   341,     0,   144,   145,     0,     0,     0,     0,
       0,     0,     0,   298,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   375,   376,   377,   378,     0,     0,     0,
       0,     0,   143,   379,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,     0,     0,     0,     0,     0,
       0,   380,   381,     0,   143,     0,     0,   382,     0,     0,
       0,     0,     0,     0,     0,   144,   145,     0,   383,     0,
       0,     0,     0,     0,     0,   384,     0,     0,     0,     0,
       0,   385,     0,     0,     0,     0,     0,   350,     0,     0,
       0,   352,   353,   354,     0,     0,   143,     0,     0,     0,
       0,   386,     0,     0,     0,     0,     0,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   410,     0,     0,   387,
     388,     0,     0,     0,   389,   390,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   393,     0,
     394,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   145,     0,     0,     0,     0,   395,     0,
     396,   397,   398,   399,   400,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,   401,   402,     0,   144,   145,     0,     0,     0,     0,
     403
};

static const yytype_int16 yycheck[] =
{
      25,   178,     4,     4,     4,     4,     4,    20,     4,    20,
      19,    20,    21,    22,    23,    24,    25,    26,   365,    26,
      29,    30,    29,    30,    88,     4,   313,   104,   104,   114,
     114,     7,    57,    58,    59,     7,    38,    62,    63,   163,
      91,    17,    93,     9,     4,   125,   184,    91,     4,    93,
     247,   187,   154,     4,   154,   153,   306,   130,    83,    84,
      11,    12,    13,    14,    15,    16,    17,   187,    19,    20,
      21,    22,    23,    24,    25,    26,    10,   187,    29,    30,
     184,   113,    38,   234,   234,   110,    20,    38,     0,   174,
     115,   229,   114,    30,   119,    68,   121,   122,   123,   114,
     125,   126,   253,   253,   129,   130,   179,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   253,   143,   144,
     145,   408,   246,   148,   391,   229,   105,   225,   395,   225,
      79,   251,   204,   400,     4,     5,     6,     7,     8,     9,
     224,   251,   119,   120,   104,   170,   125,    17,    18,    61,
     114,   253,   174,   253,   114,    25,   503,   253,   221,   174,
     109,   253,   187,    33,   189,   114,   251,    37,    80,   233,
      96,   251,   197,    43,     4,   151,   253,   253,   241,   151,
      50,   141,   233,   184,   163,   309,   211,   212,   312,   233,
     440,    19,   141,    63,    64,    65,    52,   247,    54,     4,
       5,     6,     7,     8,     9,   248,   166,   119,   181,    37,
     174,     4,    17,    18,    21,    22,    23,    24,    25,    26,
      25,    26,    29,    30,   511,   247,    96,   204,    33,   238,
     236,   238,   205,   248,    17,   248,   251,   248,    43,     4,
     249,   250,   249,   250,     4,    50,   248,   253,   273,   274,
     251,   251,   251,   251,   279,   251,     4,    40,    63,    64,
      65,    10,   174,     4,     5,     6,     7,     8,     9,   294,
     238,     4,   184,    56,     7,   187,    17,    18,   303,    84,
      85,   249,   250,   247,    25,   310,    13,   238,    15,    16,
     248,    96,   173,   251,   271,    78,   321,   322,   249,   250,
     325,   238,    43,   251,   109,    46,   331,   251,   485,    50,
     222,   251,   249,   250,   291,   251,   341,   252,   253,   344,
     190,   251,    63,    64,    65,     4,     5,     6,     7,     8,
       9,     4,     5,     6,     7,     8,     9,   251,    17,    18,
     242,   243,   125,   368,    17,    18,    25,   252,   253,    38,
     231,     4,    25,    26,    26,    96,   252,   253,     4,   240,
     225,   252,   253,     4,    43,   184,   343,   251,   151,   234,
      43,    50,   242,   243,   244,   245,   246,    50,   259,     4,
     163,   251,     4,   248,    63,    64,    65,   128,   253,   252,
      63,    64,    65,   198,   199,   200,     4,   160,   203,   252,
     253,   124,   427,    22,    23,    24,    25,    26,   252,   253,
      29,    30,     4,   438,   439,   252,   253,    96,   158,   444,
     445,   252,   253,    96,    24,    25,    26,   252,   253,    29,
      30,   238,   267,   268,     4,   270,   219,   242,   243,   244,
     245,   246,   249,   250,   252,   253,    20,    21,    22,    23,
      24,    25,    26,   252,   253,    29,    30,     4,   483,   484,
     252,   486,   252,   488,   489,   252,   253,    11,    12,    13,
      14,    15,    16,    17,   215,    19,    20,    21,    22,    23,
      24,    25,    26,   252,   406,    29,    30,    23,    24,    25,
      26,   252,   253,    29,    30,   252,   253,   332,    89,   252,
     335,   242,   243,   244,   245,   246,    11,    12,    13,    14,
      15,    16,    17,   104,    19,    20,    21,    22,    23,    24,
      25,    26,   252,   253,    29,    30,   252,   449,     5,     6,
       7,     8,   557,    11,    12,    13,    14,    15,    16,    17,
     251,    19,    20,    21,    22,    23,    24,    25,    26,   252,
     253,    29,    30,   475,   233,   477,   147,   251,   251,   251,
     104,   125,   125,   242,   243,   244,   245,   246,   124,   242,
     243,   244,   245,   246,    11,    12,    13,    14,    15,    16,
      17,   172,    19,    20,    21,    22,    23,    24,    25,    26,
     124,   153,    29,    30,     4,     5,     6,     7,     8,     9,
       4,     5,     6,     7,     8,     9,     4,    17,    18,    47,
     131,    20,   251,    17,    18,    25,   154,   121,   252,   238,
     252,    25,   252,     4,     5,     6,     7,     8,     9,   101,
     249,   250,   107,    43,   125,     4,    17,    18,   238,    43,
      50,     4,   251,   125,    25,   125,    50,     4,     4,   249,
     250,   252,    47,    63,    64,    65,   252,   579,   252,    63,
      64,    65,    43,   585,   238,   252,   252,   252,   252,    50,
     124,   251,   108,   251,    78,   249,   250,    20,   251,   463,
     251,   465,    63,    64,    65,   469,    96,   471,    43,   222,
     251,    61,    96,   251,   238,    20,   251,    78,   251,   251,
     251,     4,   238,   253,   252,   249,   250,     4,   251,   253,
      80,    20,     6,   249,   250,    96,    11,    12,    13,    14,
      15,    16,    17,     5,    19,    20,    21,    22,    23,    24,
      25,    26,     6,   238,    29,    30,     6,     4,     5,     6,
       7,     8,     9,   252,   249,   250,   252,     5,   253,   119,
      17,    18,   151,   125,   253,   180,   122,    79,    25,     4,
     238,   187,     6,     5,     4,     5,     6,     7,     8,     9,
       5,   249,   250,   252,   184,   253,    43,    17,    18,     5,
     253,   284,   566,    50,   568,    25,   570,   109,   116,     8,
     438,   543,   114,   157,   148,   255,    63,    64,    65,   300,
     122,   238,   302,    43,   174,   372,   443,    39,    24,   174,
      50,    78,   249,   250,   184,   107,   253,   187,   269,   141,
     489,   409,   467,    63,    64,    65,    85,   373,    -1,    96,
      -1,    -1,   242,   243,   244,   245,   246,    -1,   242,   243,
     244,   245,   246,    -1,    -1,     4,     5,     6,     7,     8,
       9,    -1,   222,    -1,    -1,    -1,    96,    -1,    17,    18,
      -1,   242,   243,   244,   245,   246,    25,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    43,    29,    30,    -1,    -1,   457,
     458,    50,   460,   461,    -1,    -1,   464,    -1,   466,    -1,
     468,    -1,   470,    -1,    63,    64,    65,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    78,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,   250,    -1,   101,   253,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,   243,   244,   245,   246,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    29,    30,
      -1,    -1,   242,   243,   244,   245,   246,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,   110,
     111,   112,    -1,   242,   243,   244,   245,   246,    -1,    -1,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,   250,    -1,   252,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,   250,    -1,   252,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    36,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,   250,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,   238,    -1,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,   250,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    93,    -1,    29,    30,    -1,   233,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,   250,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,   208,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,   250,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    89,    -1,    29,    30,   376,
     377,    -1,   379,    -1,    -1,   382,   383,    -1,   385,   386,
      -1,   238,    -1,   390,    -1,   392,    -1,   394,    -1,   116,
      -1,   398,   249,   250,   118,    -1,    -1,   124,    -1,    -1,
     104,    -1,    -1,   130,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,   250,
      -1,    -1,   149,    -1,    11,    12,    13,    14,    15,    16,
      17,    93,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    29,    30,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,   179,   177,    -1,   179,   249,   250,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,   238,    29,    30,   203,    -1,    -1,    -1,
     204,    -1,   208,    -1,   249,   250,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,   238,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,   250,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,   238,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   249,   250,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,
      -1,   295,   296,   297,    -1,    -1,   238,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,   249,   250,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,   138,
     139,    -1,    -1,    -1,   143,   144,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
     189,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   249,   250,    -1,    -1,    -1,    -1,   207,    -1,
     209,   210,   211,   212,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   230,   231,    -1,   249,   250,    -1,    -1,    -1,    -1,
     239
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    61,    80,   119,   174,   184,   187,   222,   255,   262,
     263,   293,   297,   305,   306,   309,   311,   324,    68,   181,
     205,   312,   294,   299,   299,   274,     9,   325,   326,   299,
     307,     0,   262,   247,   113,   310,   310,   204,     4,   104,
     114,   141,   166,   295,    79,   109,   114,   122,   141,   300,
     300,     4,     5,     6,     7,     8,     9,    17,    18,    25,
      26,    33,    43,    50,    63,    64,    65,    84,    85,    96,
     109,   198,   199,   200,   203,   242,   243,   244,   245,   246,
     256,   275,   276,    10,    20,   253,   114,   141,     4,   251,
     278,   279,   280,   282,   292,   247,    96,     4,     4,   310,
     248,   296,     4,   295,   104,   253,     4,     4,   248,   251,
      10,   256,   256,   256,   256,   233,   256,   261,   251,   251,
     251,   251,   251,   251,     4,    11,    12,    13,    14,    15,
      16,    17,    19,    20,    21,    22,    23,    24,    25,    26,
      29,    30,    38,   238,   249,   250,   277,   104,   253,   256,
     256,   326,   248,   277,   263,   278,   187,   253,    62,   116,
     130,   149,   179,   203,   283,   285,    38,   281,     4,    26,
     234,   264,   225,   278,     4,   187,   251,   301,   187,   301,
       4,   256,   257,   258,   256,   256,   261,    91,    93,   233,
     263,   256,   257,    46,   128,   215,   257,   259,   256,   256,
      26,   256,   256,   256,   251,     7,    17,   151,   256,   256,
      13,    15,    16,   256,    33,    37,   190,   251,   256,   256,
     256,   256,   256,   256,   256,   256,   256,     4,   256,   256,
     256,   278,   276,     4,   114,   224,   289,   252,   252,     4,
     308,   279,   130,   179,   286,   280,   124,   160,   284,     4,
     114,   174,   248,   251,   322,   323,   256,   158,   270,   278,
     264,   296,     4,   304,     4,   273,   229,   263,   304,   229,
     263,   253,   252,   208,    91,    93,   256,   256,   252,   104,
     252,   252,   256,   253,   253,   252,   252,   257,   263,     7,
     151,   251,   256,   256,    36,   251,   251,   251,   263,   264,
     277,   125,   125,    20,   248,   253,   264,   284,   284,   124,
     153,   280,   124,     4,     4,   105,   125,   163,   313,   314,
     281,    47,   131,   271,   264,    20,   154,   253,   298,   252,
     253,   251,   302,   298,   298,   302,   298,   257,   256,   256,
      93,   208,   256,   104,   121,   260,   260,   252,   252,   257,
     263,   256,   263,   263,   263,   252,   107,   265,   289,   101,
     290,   290,   256,     4,     4,   270,   280,   256,   153,   225,
     287,   288,   280,   251,   322,    42,    43,    44,    45,    52,
      70,    71,    76,    87,    94,   100,   120,   138,   139,   143,
     144,   145,   169,   187,   189,   207,   209,   210,   211,   212,
     213,   230,   231,   239,   320,   125,   251,   125,   252,   253,
     263,   256,   266,   256,    78,   256,   125,     4,     4,    78,
     256,   303,   253,   298,   298,    93,   256,   101,   252,   257,
     256,   252,   252,   252,   252,   252,   252,   252,    47,   108,
     269,   124,   251,   251,    20,    20,   248,   271,   256,   251,
     288,   313,   251,   316,   316,   316,   316,   316,   316,   251,
     316,   316,    43,   317,   316,   317,   316,   251,   316,   317,
     316,   317,   251,   251,   315,   251,   273,   251,   322,   314,
      39,    81,   267,   253,   253,   222,    20,   252,   253,   251,
     256,   252,    72,    73,    74,    75,   110,   111,   112,   239,
     240,   266,   256,   270,     4,   291,   291,   256,   256,     4,
     273,   252,     6,   318,   319,   318,   318,     5,   321,   318,
     318,   319,   318,   319,   318,   321,   318,   319,   318,   319,
       6,     6,    17,    40,    56,    78,   125,   151,   163,   219,
     273,   252,   273,   256,   256,   304,    78,   256,    78,   256,
     303,   236,   268,   271,   252,   253,   252,    20,   252,   322,
     252,   253,   221,   241,    52,    54,   252,   253,   252,   252,
     252,   151,     5,     5,     6,     7,     8,   125,   125,   251,
     252,   252,   267,   252,   180,   122,   272,     4,   256,     6,
     187,     5,   319,     5,   319,   319,   273,   273,   252,     5,
     252
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   254,   255,   255,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   257,   257,
     258,   258,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   259,   259,   259,   256,   256,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   256,
     256,   256,   256,   261,   261,   256,   256,   256,   256,   256,
     256,   256,   256,   262,   263,   263,   264,   264,   265,   265,
     266,   266,   267,   267,   267,   268,   268,   269,   269,   270,
     270,   271,   271,   271,   272,   272,   273,   273,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   275,   275,   275,
     276,   277,   277,   277,   278,   278,   279,   279,   280,   280,
     280,   280,   281,   281,   282,   282,   282,   282,   282,   283,
     283,   283,   284,   284,   285,   285,   286,   286,   286,   287,
     287,   288,   288,   289,   289,   289,   290,   290,   291,   291,
     292,   262,   293,   294,   294,   294,   294,   293,   295,   295,
     296,   296,   293,   262,   297,   298,   298,   299,   299,   299,
     299,   299,   300,   300,   301,   301,   302,   302,   303,   303,
     303,   303,   297,   304,   304,   304,   304,   297,   262,   305,
     305,   305,   262,   306,   307,   307,   307,   308,   308,   308,
     308,   262,   309,   309,   310,   310,   262,   311,   311,   311,
     311,   311,   311,   312,   312,   313,   313,   314,   314,   314,
     314,   314,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   316,   316,   316,   317,   317,
     318,   318,   318,   319,   319,   319,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   321,   321,   322,   323,   323,
     323,   262,   324,   325,   325,   326,   326
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     5,     6,
       6,     6,     3,     4,     3,     4,     3,     5,     1,     3,
       0,     1,     5,     6,     5,     6,     4,     4,     4,     4,
       4,     6,     7,     4,     7,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     2,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     0,     2,     0,     1,     3,
       3,     1,     7,     2,     2,     2,     0,     6,     2,     4,
       0,     2,     7,     1,     8,     0,     4,     0,     2,     2,
       2,     2,     1,     0,     0,     3,     3,     5,     1,     1,
       3,     3,     7,     3,     3,     5,     5,     7,     1,     8,
       7,     7,     1,     8,     0,     2,     2,     3,     5,     5,
       7,     1,     4,     4,     0,     2,     1,     8,    10,     9,
       6,    11,     8,     0,     1,     1,     3,     5,     4,     5,
       0,     3,     0,     3,     2,     3,     3,     3,     3,     2,
       5,     3,     3,     2,     3,     0,     3,     5,     0,     1,
       0,     2,     2,     0,     4,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     5,     2,     4,     1,     1,     1,     1,     3,
       3,     3,     3,     5,     5,     1,     3,     3,     0,     1,
       1,     1,     2,     1,     3,     3,     3
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
        case 4:
#line 295 "pmysql.y" /* yacc.c:1646  */
    { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2169 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 296 "pmysql.y" /* yacc.c:1646  */
    { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2175 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 297 "pmysql.y" /* yacc.c:1646  */
    { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2181 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 298 "pmysql.y" /* yacc.c:1646  */
    { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2187 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 299 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 2193 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 300 "pmysql.y" /* yacc.c:1646  */
    { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 2199 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 301 "pmysql.y" /* yacc.c:1646  */
    { emit("BOOL %d", (yyvsp[0].intval)); }
#line 2205 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 304 "pmysql.y" /* yacc.c:1646  */
    { emit("ADD"); }
#line 2211 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 305 "pmysql.y" /* yacc.c:1646  */
    { emit("MINUS"); }
#line 2217 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 306 "pmysql.y" /* yacc.c:1646  */
    { emit("MUL"); }
#line 2223 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 307 "pmysql.y" /* yacc.c:1646  */
    { emit("DIV"); }
#line 2229 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 308 "pmysql.y" /* yacc.c:1646  */
    { emit("MOD"); }
#line 2235 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 309 "pmysql.y" /* yacc.c:1646  */
    { emit("MOD"); }
#line 2241 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 310 "pmysql.y" /* yacc.c:1646  */
    { emit("NEG"); }
#line 2247 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 311 "pmysql.y" /* yacc.c:1646  */
    { emit("AND"); }
#line 2253 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 312 "pmysql.y" /* yacc.c:1646  */
    { emit("OR"); }
#line 2259 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 313 "pmysql.y" /* yacc.c:1646  */
    { emit("XOR"); }
#line 2265 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 314 "pmysql.y" /* yacc.c:1646  */
    { emit("BITOR"); }
#line 2271 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 315 "pmysql.y" /* yacc.c:1646  */
    { emit("BITAND"); }
#line 2277 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 316 "pmysql.y" /* yacc.c:1646  */
    { emit("BITXOR"); }
#line 2283 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 317 "pmysql.y" /* yacc.c:1646  */
    { emit("SHIFT %s", (yyvsp[-1].subtok)==1 ? "left" : "right"); }
#line 2289 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 318 "pmysql.y" /* yacc.c:1646  */
    { emit("NOT"); }
#line 2295 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 319 "pmysql.y" /* yacc.c:1646  */
    { emit("NOT"); }
#line 2301 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 320 "pmysql.y" /* yacc.c:1646  */
    { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 2307 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 323 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2313 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 324 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2319 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 325 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2325 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 326 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2331 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 329 "pmysql.y" /* yacc.c:1646  */
    { emit("ISNULL"); }
#line 2337 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 330 "pmysql.y" /* yacc.c:1646  */
    { emit("ISNULL"); emit("NOT"); }
#line 2343 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 331 "pmysql.y" /* yacc.c:1646  */
    { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2349 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 332 "pmysql.y" /* yacc.c:1646  */
    { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2355 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 334 "pmysql.y" /* yacc.c:1646  */
    { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2361 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 337 "pmysql.y" /* yacc.c:1646  */
    { emit("BETWEEN"); }
#line 2367 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 340 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2373 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 341 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2379 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 344 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2385 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 348 "pmysql.y" /* yacc.c:1646  */
    { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2391 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 349 "pmysql.y" /* yacc.c:1646  */
    { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2397 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 350 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT 4"); }
#line 2403 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 351 "pmysql.y" /* yacc.c:1646  */
    { emit("CMPALLSELECT 3"); }
#line 2409 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 352 "pmysql.y" /* yacc.c:1646  */
    { emit("EXISTSELECT"); if((yyvsp[-3].subtok)) emit("NOT"); }
#line 2415 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 356 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2421 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 360 "pmysql.y" /* yacc.c:1646  */
    { emit("COUNTALL"); }
#line 2427 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 361 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 1 COUNT"); }
#line 2433 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 364 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2439 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 365 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 2 SUBSTR"); }
#line 2445 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 366 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 SUBSTR"); }
#line 2451 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 368 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2457 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 369 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 TRIM"); }
#line 2463 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 372 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 1"); }
#line 2469 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 373 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 2"); }
#line 2475 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 374 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 3"); }
#line 2481 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 377 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 DATE_ADD"); }
#line 2487 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 378 "pmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 DATE_SUB"); }
#line 2493 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 381 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 1"); }
#line 2499 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 382 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 2"); }
#line 2505 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 383 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 3"); }
#line 2511 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 384 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 4"); }
#line 2517 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 385 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 5"); }
#line 2523 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 386 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 6"); }
#line 2529 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 387 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 7"); }
#line 2535 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 388 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 8"); }
#line 2541 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 389 "pmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 9"); }
#line 2547 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 392 "pmysql.y" /* yacc.c:1646  */
    { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2553 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 393 "pmysql.y" /* yacc.c:1646  */
    { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2559 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 394 "pmysql.y" /* yacc.c:1646  */
    { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2565 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 395 "pmysql.y" /* yacc.c:1646  */
    { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2571 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 398 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2577 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 399 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2583 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 402 "pmysql.y" /* yacc.c:1646  */
    { emit("LIKE"); }
#line 2589 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 403 "pmysql.y" /* yacc.c:1646  */
    { emit("LIKE"); emit("NOT"); }
#line 2595 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 406 "pmysql.y" /* yacc.c:1646  */
    { emit("REGEXP"); }
#line 2601 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 407 "pmysql.y" /* yacc.c:1646  */
    { emit("REGEXP"); emit("NOT"); }
#line 2607 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 410 "pmysql.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2613 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 411 "pmysql.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2619 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 412 "pmysql.y" /* yacc.c:1646  */
    { emit("NOW"); }
#line 2625 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 415 "pmysql.y" /* yacc.c:1646  */
    { emit("STRTOBIN"); }
#line 2631 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 419 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2637 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 422 "pmysql.y" /* yacc.c:1646  */
    { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2643 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 425 "pmysql.y" /* yacc.c:1646  */
    { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2649 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 429 "pmysql.y" /* yacc.c:1646  */
    { emit("WHERE"); }
#line 2655 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 433 "pmysql.y" /* yacc.c:1646  */
    { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2661 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 436 "pmysql.y" /* yacc.c:1646  */
    { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2667 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 437 "pmysql.y" /* yacc.c:1646  */
    { emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2673 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 440 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2679 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 441 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2685 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 442 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2691 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 445 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2697 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 446 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2703 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 450 "pmysql.y" /* yacc.c:1646  */
    { emit("HAVING"); }
#line 2709 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 454 "pmysql.y" /* yacc.c:1646  */
    { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2715 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 457 "pmysql.y" /* yacc.c:1646  */
    { emit("LIMIT 1"); }
#line 2721 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 458 "pmysql.y" /* yacc.c:1646  */
    { emit("KIMIT 2"); }
#line 2727 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 462 "pmysql.y" /* yacc.c:1646  */
    { emit("INTO %d", (yyvsp[0].intval)); }
#line 2733 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 465 "pmysql.y" /* yacc.c:1646  */
    { emit("COLUMN %s", (yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2739 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 466 "pmysql.y" /* yacc.c:1646  */
    { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2745 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 470 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2751 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 471 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2757 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 472 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2763 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 473 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2769 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 474 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2775 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 475 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2781 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 476 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2787 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 477 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2793 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 478 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2799 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 481 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2805 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 482 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2811 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 483 "pmysql.y" /* yacc.c:1646  */
    { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2817 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 489 "pmysql.y" /* yacc.c:1646  */
    { emit("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2823 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 490 "pmysql.y" /* yacc.c:1646  */
    { emit("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2829 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 494 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2835 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 495 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2841 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 502 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2847 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 503 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2853 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 504 "pmysql.y" /* yacc.c:1646  */
    { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2859 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 505 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2865 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 512 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2871 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 513 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 200); }
#line 2877 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 514 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 200); }
#line 2883 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 515 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2889 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 516 "pmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2895 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 519 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2901 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 520 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2907 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 521 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2913 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 524 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2919 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 525 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 4; }
#line 2925 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 528 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2931 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 529 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2937 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 532 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2943 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 533 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2949 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 534 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2955 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 541 "pmysql.y" /* yacc.c:1646  */
    { emit("ONEXPR"); }
#line 2961 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 542 "pmysql.y" /* yacc.c:1646  */
    { emit("USING %d", (yyvsp[-1].intval)); }
#line 2967 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 545 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 2973 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 546 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 2979 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 550 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2985 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 551 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2991 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 554 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEX %s", (yyvsp[0].strval));  free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2997 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 555 "pmysql.y" /* yacc.c:1646  */
    { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3003 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 558 "pmysql.y" /* yacc.c:1646  */
    { emit("SUBQUERY"); }
#line 3009 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 562 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3015 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 565 "pmysql.y" /* yacc.c:1646  */
    { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3021 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 568 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 3027 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 569 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 3033 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 570 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 3039 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 571 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3045 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 574 "pmysql.y" /* yacc.c:1646  */
    { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3051 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 577 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 3057 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 578 "pmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 3063 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 586 "pmysql.y" /* yacc.c:1646  */
    { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3069 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 589 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3075 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 592 "pmysql.y" /* yacc.c:1646  */
    { 
                emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3082 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 597 "pmysql.y" /* yacc.c:1646  */
    { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 3088 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 600 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3094 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 601 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 3100 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 602 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 3106 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 603 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 3112 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 604 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 3118 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 612 "pmysql.y" /* yacc.c:1646  */
    { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 3124 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 615 "pmysql.y" /* yacc.c:1646  */
    { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3130 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 616 "pmysql.y" /* yacc.c:1646  */
    { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3136 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 619 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3142 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 620 "pmysql.y" /* yacc.c:1646  */
    { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3148 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 621 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3154 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 622 "pmysql.y" /* yacc.c:1646  */
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3160 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 625 "pmysql.y" /* yacc.c:1646  */
    {
                emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3167 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 629 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                    emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3174 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 631 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                    emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3181 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 633 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].subtok) != 4) { yyerror("bad assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                    emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3188 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 635 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].subtok) != 4) {yyerror("bad assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                    emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3195 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 641 "pmysql.y" /* yacc.c:1646  */
    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3201 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 644 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3207 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 648 "pmysql.y" /* yacc.c:1646  */
    { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3213 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 652 "pmysql.y" /* yacc.c:1646  */
    { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3219 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 656 "pmysql.y" /* yacc.c:1646  */
    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3225 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 660 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3231 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 664 "pmysql.y" /* yacc.c:1646  */
    { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 3237 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 667 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3243 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 668 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 3249 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 669 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 3255 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 672 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                        emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3262 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 674 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].subtok) != 4) {yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
        emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3269 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 676 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].subtok) != 4) {yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
        emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3276 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 678 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) {yyerror("bad update assignment to %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); YYERROR; }
        emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3283 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 682 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3289 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 685 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3295 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 686 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3301 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 689 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3307 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 690 "pmysql.y" /* yacc.c:1646  */
    { if (!(yyvsp[0].subtok)) {yyerror("IF EXISTS doesn't exist"); YYERROR; } 
        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3314 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 694 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3320 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 697 "pmysql.y" /* yacc.c:1646  */
    { 
        emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3327 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 701 "pmysql.y" /* yacc.c:1646  */
    {
        emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval)); free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3334 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 705 "pmysql.y" /* yacc.c:1646  */
    {
        emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3341 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 709 "pmysql.y" /* yacc.c:1646  */
    {
        emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3348 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 713 "pmysql.y" /* yacc.c:1646  */
    {
        emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval)); free((yyvsp[-6].strval)), free((yyvsp[-4].strval)); }
#line 3355 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 717 "pmysql.y" /* yacc.c:1646  */
    {
        emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval)); free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3362 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 721 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3368 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 722 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3374 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 725 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3380 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 726 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3386 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 729 "pmysql.y" /* yacc.c:1646  */
    { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3392 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 730 "pmysql.y" /* yacc.c:1646  */
    { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3398 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 731 "pmysql.y" /* yacc.c:1646  */
    { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3404 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 734 "pmysql.y" /* yacc.c:1646  */
    { emit("STARTCOL"); }
#line 3410 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 735 "pmysql.y" /* yacc.c:1646  */
    { emit("COLUMNDEF %d %d", (yyvsp[0].intval), (yyvsp[-1].intval)); }
#line 3416 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 738 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3422 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 739 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3428 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 741 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3434 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 742 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3440 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 743 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3446 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 744 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3452 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 745 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3458 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 746 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3464 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 747 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3470 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 748 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3476 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 749 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3482 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 750 "pmysql.y" /* yacc.c:1646  */
    { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3488 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 753 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3494 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 754 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3500 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 755 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-3].intval) + 1000 * (yyvsp[-1].intval); }
#line 3506 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 759 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3512 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 760 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 4000; }
#line 3518 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 763 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3524 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 764 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3530 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 765 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3536 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 769 "pmysql.y" /* yacc.c:1646  */
    { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3542 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 770 "pmysql.y" /* yacc.c:1646  */
    { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3548 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 773 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3554 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 774 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3560 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 775 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3566 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 776 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3572 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 777 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3578 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 778 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3584 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 779 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3590 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 780 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3596 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 781 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3602 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 782 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3608 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 783 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100001; }
#line 3614 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 784 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100002; }
#line 3620 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 785 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100003; }
#line 3626 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 786 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100004; }
#line 3632 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 787 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100005; }
#line 3638 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 788 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3644 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 789 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3650 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 790 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3656 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 791 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3662 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 792 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160001; }
#line 3668 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 793 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160002; }
#line 3674 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 794 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160003; }
#line 3680 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 795 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160004; }
#line 3686 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 796 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3692 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 797 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3698 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 798 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3704 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 799 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3710 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 800 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3716 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 801 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3722 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 804 "pmysql.y" /* yacc.c:1646  */
    { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3728 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 805 "pmysql.y" /* yacc.c:1646  */
    { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3734 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 808 "pmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3740 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 811 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3746 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 812 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3752 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 813 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 3758 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 816 "pmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3764 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 825 "pmysql.y" /* yacc.c:1646  */
    { if((yyvsp[-1].subtok) != 4) {yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; } 
        emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3771 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 827 "pmysql.y" /* yacc.c:1646  */
    { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3777 "pmysql.tab.c" /* yacc.c:1646  */
    break;


#line 3781 "pmysql.tab.c" /* yacc.c:1646  */
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
#line 830 "pmysql.y" /* yacc.c:1906  */


void emit(char *s, ...) {
    extern unsigned int yylineno;

    va_list ap;
    va_start(ap, s);

    printf("rpn: ");
    vfprintf(stdout, s, ap);
    printf("\n");
}

void yyerror(char *s, ...) {
    extern unsigned int yylineno;

    va_list ap;
    va_start(ap, s);

    fprintf(stderr, "%d: error: ", yylineno);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}

int main(int argc, char *argv[]) {
    extern FILE *yyin;

    if( argc > 1 && !strcmp(argv[1], "-d")) {
        yydebug = 1;
        argc --;
        argv ++;
    }

    if ( argc > 1 && (yyin = fopen(argv[1], "r")) == NULL) {
        perror(argv[1]);
        exit(1);
    }

    if (!yyparse())
        printf("SQL parse worked\n");
    else
        printf("SQL parse failed\n");
}
