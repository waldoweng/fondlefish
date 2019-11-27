/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     YYSTART = 258,
     NAME = 259,
     STRING = 260,
     INTNUM = 261,
     BOOL = 262,
     APPROXNUM = 263,
     USERVAR = 264,
     ASSIGN = 265,
     OR = 266,
     XOR = 267,
     ANDOP = 268,
     REGEXP = 269,
     LIKE = 270,
     IS = 271,
     IN = 272,
     NOT = 273,
     BETWEEN = 274,
     COMPARISON = 275,
     SHIFT = 276,
     MOD = 277,
     UMINUS = 278,
     ADD = 279,
     ALL = 280,
     ALTER = 281,
     ANALYZE = 282,
     AND = 283,
     ANY = 284,
     AS = 285,
     ASC = 286,
     AUTO_INCREMENT = 287,
     BEFORE = 288,
     BIGINT = 289,
     BINARY = 290,
     BIT = 291,
     BLOB = 292,
     BOTH = 293,
     BY = 294,
     CALL = 295,
     CASCADE = 296,
     CASE = 297,
     CHANGE = 298,
     CHAR = 299,
     CHECK = 300,
     COLLATE = 301,
     COLUMN = 302,
     COMMENT = 303,
     CONDITION = 304,
     CONSTRAINT = 305,
     CONTINUE = 306,
     CONVERT = 307,
     CREATE = 308,
     CROSS = 309,
     CURRENT_DATE = 310,
     CURRENT_TIME = 311,
     CURRENT_TIMESTAMP = 312,
     CURRENT_USER = 313,
     CURSOR = 314,
     DATABASE = 315,
     DATABASES = 316,
     DATE = 317,
     DATETIME = 318,
     DAY_HOUR = 319,
     DAY_MICROSECOND = 320,
     DAY_MINUTE = 321,
     DAY_SECOND = 322,
     DECIMAL = 323,
     DECLARE = 324,
     DEFAULT = 325,
     DELAYED = 326,
     DELETE = 327,
     DESC = 328,
     DESCRIBE = 329,
     DETERMINISTIC = 330,
     DISTINCT = 331,
     DISTINCTROW = 332,
     DIV = 333,
     DOUBLE = 334,
     DROP = 335,
     DUAL = 336,
     EACH = 337,
     ELSE = 338,
     ELSEIF = 339,
     END = 340,
     ENUM = 341,
     ESCAPE = 342,
     EXISTS = 343,
     EXIT = 344,
     EXPLAIN = 345,
     FETCH = 346,
     FLOAT = 347,
     FOR = 348,
     FORCE = 349,
     FOREIGN = 350,
     FROM = 351,
     FULLTEXT = 352,
     GRANT = 353,
     GROUP = 354,
     HAVING = 355,
     HIGH_PRIORITY = 356,
     HOUR_MICROSECOND = 357,
     HOUR_MINUTE = 358,
     HOUR_SECOND = 359,
     IF = 360,
     IGNORE = 361,
     INFILE = 362,
     INNER = 363,
     INOUT = 364,
     INSENSITIVE = 365,
     INSERT = 366,
     INTEGER = 367,
     INTERVAL = 368,
     INTO = 369,
     ITERATE = 370,
     JOIN = 371,
     KEY = 372,
     KEYS = 373,
     KILL = 374,
     LEADING = 375,
     LEAVE = 376,
     LEFT = 377,
     LIMIT = 378,
     LINES = 379,
     LOAD = 380,
     LOCALTIME = 381,
     LOCALTIMESTAMP = 382,
     LOCK = 383,
     LONG = 384,
     LONGBLOB = 385,
     LONGTEXT = 386,
     LOOP = 387,
     LOW_PRIORITY = 388,
     MATCH = 389,
     MEDIUMBLOB = 390,
     MEDIUMINT = 391,
     MEDIUMTEXT = 392,
     MINUTE_MICROSECOND = 393,
     MINUTE_SECOND = 394,
     MODIFIES = 395,
     NATURAL = 396,
     NO_WRITE_TO_BINLOG = 397,
     NULLX = 398,
     NUMBER = 399,
     ON = 400,
     ONDUPLICATE = 401,
     OPTIMIZE = 402,
     OPTION = 403,
     OPTIONALLY = 404,
     ORDER = 405,
     OUT = 406,
     OUTER = 407,
     OUTFILE = 408,
     PRECISION = 409,
     PRIMARY = 410,
     PROCEDURE = 411,
     PURGE = 412,
     QUICK = 413,
     READ = 414,
     READS = 415,
     REAL = 416,
     REFERENCES = 417,
     RELEASE = 418,
     RENAME = 419,
     REPEAT = 420,
     REPLACE = 421,
     REQUIRE = 422,
     RESTRICT = 423,
     RETURN = 424,
     REVOKE = 425,
     RIGHT = 426,
     ROLLUP = 427,
     SCHEMA = 428,
     SCHEMAS = 429,
     SECOND_MICROSECOND = 430,
     SELECT = 431,
     SENSITIVE = 432,
     SEPARATOR = 433,
     SET = 434,
     SHOW = 435,
     SAMLLINT = 436,
     SOME = 437,
     SONAME = 438,
     SPATIAL = 439,
     SPECIFIC = 440,
     SQL = 441,
     SQLEXCEPTION = 442,
     SQLSTATE = 443,
     SQLWARNING = 444,
     SQL_BIG_RESULT = 445,
     SQL_CALC_FOUND_ROWS = 446,
     SQL_SMALL_RESULT = 447,
     SSL = 448,
     STARTING = 449,
     STRAIGHT_JOIN = 450,
     TABLE = 451,
     TEMPORARY = 452,
     TERMINATED = 453,
     TEXT = 454,
     THEN = 455,
     TIME = 456,
     TIMESTAMP = 457,
     TINYINT = 458,
     TINYBLOB = 459,
     TINYTEXT = 460,
     TO = 461,
     TRAILING = 462,
     TRIGGER = 463,
     UNDO = 464,
     UNION = 465,
     UNIQUE = 466,
     UNLOCK = 467,
     UNSIGNED = 468,
     UPDATE = 469,
     USAGE = 470,
     USE = 471,
     USING = 472,
     UTC_DATE = 473,
     UTC_TIME = 474,
     UTC_TIMESTAMP = 475,
     VALUES = 476,
     VARBINARY = 477,
     VARCHAR = 478,
     VARYING = 479,
     WHEN = 480,
     WHERE = 481,
     WHILE = 482,
     WITH = 483,
     WRITE = 484,
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
/* Tokens.  */
#define YYSTART 258
#define NAME 259
#define STRING 260
#define INTNUM 261
#define BOOL 262
#define APPROXNUM 263
#define USERVAR 264
#define ASSIGN 265
#define OR 266
#define XOR 267
#define ANDOP 268
#define REGEXP 269
#define LIKE 270
#define IS 271
#define IN 272
#define NOT 273
#define BETWEEN 274
#define COMPARISON 275
#define SHIFT 276
#define MOD 277
#define UMINUS 278
#define ADD 279
#define ALL 280
#define ALTER 281
#define ANALYZE 282
#define AND 283
#define ANY 284
#define AS 285
#define ASC 286
#define AUTO_INCREMENT 287
#define BEFORE 288
#define BIGINT 289
#define BINARY 290
#define BIT 291
#define BLOB 292
#define BOTH 293
#define BY 294
#define CALL 295
#define CASCADE 296
#define CASE 297
#define CHANGE 298
#define CHAR 299
#define CHECK 300
#define COLLATE 301
#define COLUMN 302
#define COMMENT 303
#define CONDITION 304
#define CONSTRAINT 305
#define CONTINUE 306
#define CONVERT 307
#define CREATE 308
#define CROSS 309
#define CURRENT_DATE 310
#define CURRENT_TIME 311
#define CURRENT_TIMESTAMP 312
#define CURRENT_USER 313
#define CURSOR 314
#define DATABASE 315
#define DATABASES 316
#define DATE 317
#define DATETIME 318
#define DAY_HOUR 319
#define DAY_MICROSECOND 320
#define DAY_MINUTE 321
#define DAY_SECOND 322
#define DECIMAL 323
#define DECLARE 324
#define DEFAULT 325
#define DELAYED 326
#define DELETE 327
#define DESC 328
#define DESCRIBE 329
#define DETERMINISTIC 330
#define DISTINCT 331
#define DISTINCTROW 332
#define DIV 333
#define DOUBLE 334
#define DROP 335
#define DUAL 336
#define EACH 337
#define ELSE 338
#define ELSEIF 339
#define END 340
#define ENUM 341
#define ESCAPE 342
#define EXISTS 343
#define EXIT 344
#define EXPLAIN 345
#define FETCH 346
#define FLOAT 347
#define FOR 348
#define FORCE 349
#define FOREIGN 350
#define FROM 351
#define FULLTEXT 352
#define GRANT 353
#define GROUP 354
#define HAVING 355
#define HIGH_PRIORITY 356
#define HOUR_MICROSECOND 357
#define HOUR_MINUTE 358
#define HOUR_SECOND 359
#define IF 360
#define IGNORE 361
#define INFILE 362
#define INNER 363
#define INOUT 364
#define INSENSITIVE 365
#define INSERT 366
#define INTEGER 367
#define INTERVAL 368
#define INTO 369
#define ITERATE 370
#define JOIN 371
#define KEY 372
#define KEYS 373
#define KILL 374
#define LEADING 375
#define LEAVE 376
#define LEFT 377
#define LIMIT 378
#define LINES 379
#define LOAD 380
#define LOCALTIME 381
#define LOCALTIMESTAMP 382
#define LOCK 383
#define LONG 384
#define LONGBLOB 385
#define LONGTEXT 386
#define LOOP 387
#define LOW_PRIORITY 388
#define MATCH 389
#define MEDIUMBLOB 390
#define MEDIUMINT 391
#define MEDIUMTEXT 392
#define MINUTE_MICROSECOND 393
#define MINUTE_SECOND 394
#define MODIFIES 395
#define NATURAL 396
#define NO_WRITE_TO_BINLOG 397
#define NULLX 398
#define NUMBER 399
#define ON 400
#define ONDUPLICATE 401
#define OPTIMIZE 402
#define OPTION 403
#define OPTIONALLY 404
#define ORDER 405
#define OUT 406
#define OUTER 407
#define OUTFILE 408
#define PRECISION 409
#define PRIMARY 410
#define PROCEDURE 411
#define PURGE 412
#define QUICK 413
#define READ 414
#define READS 415
#define REAL 416
#define REFERENCES 417
#define RELEASE 418
#define RENAME 419
#define REPEAT 420
#define REPLACE 421
#define REQUIRE 422
#define RESTRICT 423
#define RETURN 424
#define REVOKE 425
#define RIGHT 426
#define ROLLUP 427
#define SCHEMA 428
#define SCHEMAS 429
#define SECOND_MICROSECOND 430
#define SELECT 431
#define SENSITIVE 432
#define SEPARATOR 433
#define SET 434
#define SHOW 435
#define SAMLLINT 436
#define SOME 437
#define SONAME 438
#define SPATIAL 439
#define SPECIFIC 440
#define SQL 441
#define SQLEXCEPTION 442
#define SQLSTATE 443
#define SQLWARNING 444
#define SQL_BIG_RESULT 445
#define SQL_CALC_FOUND_ROWS 446
#define SQL_SMALL_RESULT 447
#define SSL 448
#define STARTING 449
#define STRAIGHT_JOIN 450
#define TABLE 451
#define TEMPORARY 452
#define TERMINATED 453
#define TEXT 454
#define THEN 455
#define TIME 456
#define TIMESTAMP 457
#define TINYINT 458
#define TINYBLOB 459
#define TINYTEXT 460
#define TO 461
#define TRAILING 462
#define TRIGGER 463
#define UNDO 464
#define UNION 465
#define UNIQUE 466
#define UNLOCK 467
#define UNSIGNED 468
#define UPDATE 469
#define USAGE 470
#define USE 471
#define USING 472
#define UTC_DATE 473
#define UTC_TIME 474
#define UTC_TIMESTAMP 475
#define VALUES 476
#define VARBINARY 477
#define VARCHAR 478
#define VARYING 479
#define WHEN 480
#define WHERE 481
#define WHILE 482
#define WITH 483
#define WRITE 484
#define YEAR 485
#define YEAR_MONTH 486
#define ZEROFILL 487
#define FSUBSTRING 488
#define FTRIM 489
#define FDATE_ADD 490
#define FDATE_SUB 491
#define FCOUNT 492




/* Copy the first part of user declarations.  */
#line 3 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "include/ast/ast.h"

extern int yylex (void);

void yyerror(const char *s, ...);
void lyyerror(struct YYLTYPE t, const char *s, ...);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
{
    int intval;
    double floatval;
    char *strval;
    int subtok;

    Ast_DataType *ast_data_type;
    Ast_ValList *ast_val_list;
    Ast_IntervalExp *ast_interval_exp;
    Ast_CaseList *ast_case_list;
    Ast_EnumList *ast_enum_list;
    Ast_ColumnList *ast_column_list;
    Ast_ColumnAttrs *ast_column_atts;
    Ast_GroupByList *ast_groupby_list;
    Ast_DeleteList *ast_delete_list;
    Ast_InsertValList *ast_insert_vals_list;
    Ast_InsertAsgnList *ast_insert_asgn_list;
    Ast_UpdateAsgnList *ast_update_asgn_list;
    Ast_InsertVals *ast_insert_vals;
    Ast_OptCSC *ast_opt_csc;
    Ast_OptWhere *ast_opt_where;
    Ast_OptGroupBy *ast_opt_groupby;
    Ast_OptHaving *ast_opt_having;
    Ast_OptOrderBy *ast_opt_orderby;
    Ast_OptLimit *ast_opt_limit;
    Ast_OptIntoList *ast_opt_into_list;
    Ast_SetExpr *ast_set_expr;
    Ast_SetList *ast_set_list;
    Ast_OptColNames *ast_opt_col_names;
    Ast_OptOnDupUpdate *ast_opt_ondupupdate;
    Ast_TableFactor *ast_table_factor;
    Ast_JoinTable *ast_join_table;
    Ast_TableReference *ast_table_reference;
    Ast_TableReferences *ast_table_references;
    Ast_IndexList *ast_index_list;
    Ast_IndexHint *ast_index_hint;
    Ast_TableSubquery *ast_table_subquery;
    Ast_JoinCondition *ast_join_condition;
    Ast_SelectExprList *ast_select_expr_list;
    Ast_SelectExpr *ast_select_expr;
    Ast_CreateDefinition *ast_create_definition;
    Ast_CreateColList *ast_create_col_list;
    Ast_CreateSelectStmt *ast_create_select_statement;
    Ast_Expr *ast_expr;

    Ast_SelectStmt *ast_select_stmt;
    Ast_DeleteStmt *ast_delete_stmt;
    Ast_InsertStmt *ast_insert_stmt;
    Ast_ReplaceStmt *ast_replace_stmt;
    Ast_UpdateStmt *ast_update_stmt;
    Ast_CreateDatabaseStmt *ast_create_database_stmt;
    Ast_CreateTableStmt *ast_create_table_stmt;
    Ast_SetStmt *ast_set_stmt;
    Ast_Stmt *ast_stmt;
}
/* Line 193 of yacc.c.  */
#line 639 "pmysql.tab.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 664 "pmysql.tab.cc"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  252
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  298
/* YYNRULES -- Number of states.  */
#define YYNSTATES  604

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   492

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    29,    23,     2,
     249,   250,    27,    25,   251,    26,   248,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   247,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    31,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    22,     2,     2,     2,     2,     2,
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
      15,    16,    17,    19,    20,    21,    24,    30,    32,    33,
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
     244,   245,   246
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    16,    18,    20,    22,
      24,    26,    30,    34,    38,    42,    46,    50,    53,    57,
      61,    65,    69,    73,    77,    81,    84,    87,    91,    97,
     104,   111,   118,   122,   127,   131,   136,   140,   146,   148,
     152,   153,   155,   161,   168,   174,   181,   186,   191,   196,
     201,   206,   213,   222,   227,   235,   237,   239,   241,   248,
     255,   259,   263,   267,   271,   275,   279,   283,   287,   291,
     296,   303,   307,   313,   318,   324,   328,   333,   337,   342,
     344,   346,   348,   351,   353,   357,   369,   370,   373,   374,
     379,   382,   387,   388,   390,   392,   393,   396,   397,   400,
     401,   405,   406,   409,   414,   415,   418,   420,   422,   426,
     430,   431,   434,   437,   440,   443,   446,   449,   452,   455,
     457,   461,   463,   466,   469,   471,   472,   474,   478,   480,
     482,   486,   492,   496,   500,   502,   503,   509,   513,   519,
     526,   532,   533,   535,   537,   538,   540,   542,   544,   547,
     550,   551,   552,   554,   557,   562,   569,   576,   577,   580,
     581,   583,   587,   591,   593,   601,   604,   607,   610,   611,
     618,   621,   626,   627,   630,   638,   640,   649,   650,   655,
     656,   659,   662,   665,   668,   670,   671,   672,   676,   680,
     686,   688,   690,   694,   698,   706,   710,   714,   720,   726,
     734,   736,   745,   753,   761,   763,   772,   773,   776,   779,
     783,   789,   795,   803,   805,   810,   815,   816,   819,   821,
     830,   841,   851,   858,   870,   879,   880,   882,   884,   888,
     894,   899,   905,   906,   910,   911,   915,   918,   922,   926,
     930,   934,   937,   943,   947,   951,   954,   958,   959,   963,
     969,   970,   972,   973,   976,   979,   980,   985,   989,   992,
     996,  1000,  1004,  1008,  1012,  1016,  1020,  1024,  1028,  1030,
    1032,  1034,  1036,  1038,  1042,  1048,  1051,  1056,  1058,  1060,
    1062,  1064,  1068,  1072,  1076,  1080,  1086,  1092,  1094,  1098,
    1102,  1103,  1105,  1107,  1109,  1112,  1114,  1118,  1122
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     253,     0,    -1,   260,   247,    -1,   253,   260,   247,    -1,
       4,    -1,     4,   248,     4,    -1,     9,    -1,     5,    -1,
       6,    -1,     8,    -1,     7,    -1,   254,    25,   254,    -1,
     254,    26,   254,    -1,   254,    27,   254,    -1,   254,    28,
     254,    -1,   254,    29,   254,    -1,   254,    30,   254,    -1,
      26,   254,    -1,   254,    13,   254,    -1,   254,    11,   254,
      -1,   254,    12,   254,    -1,   254,    22,   254,    -1,   254,
      23,   254,    -1,   254,    31,   254,    -1,   254,    24,   254,
      -1,    19,   254,    -1,    18,   254,    -1,   254,    21,   254,
      -1,   254,    21,   249,   261,   250,    -1,   254,    21,    38,
     249,   261,   250,    -1,   254,    21,   191,   249,   261,   250,
      -1,   254,    21,    34,   249,   261,   250,    -1,   254,    16,
     152,    -1,   254,    16,    19,   152,    -1,   254,    16,     7,
      -1,   254,    16,    19,     7,    -1,     9,    10,   254,    -1,
     254,    20,   254,    37,   254,    -1,   254,    -1,   254,   251,
     255,    -1,    -1,   255,    -1,   254,    17,   249,   255,   250,
      -1,   254,    19,    17,   249,   255,   250,    -1,   254,    17,
     249,   261,   250,    -1,   254,    19,    17,   249,   261,   250,
      -1,    97,   249,   261,   250,    -1,     4,   249,   256,   250,
      -1,   246,   249,    27,   250,    -1,   246,   249,   254,   250,
      -1,   242,   249,   255,   250,    -1,   242,   249,   254,   105,
     254,   250,    -1,   242,   249,   254,   105,   254,   102,   254,
     250,    -1,   243,   249,   255,   250,    -1,   243,   249,   257,
     254,   105,   255,   250,    -1,   129,    -1,   216,    -1,    47,
      -1,   244,   249,   254,   251,   258,   250,    -1,   245,   249,
     254,   251,   258,   250,    -1,   122,   254,    73,    -1,   122,
     254,    74,    -1,   122,   254,    75,    -1,   122,   254,    76,
      -1,   122,   254,   240,    -1,   122,   254,   239,    -1,   122,
     254,   111,    -1,   122,   254,   112,    -1,   122,   254,   113,
      -1,    51,   254,   259,    94,    -1,    51,   254,   259,    92,
     254,    94,    -1,    51,   259,    94,    -1,    51,   259,    92,
     254,    94,    -1,   234,   254,   209,   254,    -1,   259,   234,
     254,   209,   254,    -1,   254,    15,   254,    -1,   254,    19,
      15,   254,    -1,   254,    14,   254,    -1,   254,    19,    14,
     254,    -1,    66,    -1,    64,    -1,    65,    -1,    44,   254,
      -1,   261,    -1,   185,   272,   273,    -1,   185,   272,   273,
     105,   276,   262,   263,   267,   268,   269,   270,    -1,    -1,
     235,   254,    -1,    -1,   108,    48,   264,   266,    -1,   254,
     265,    -1,   264,   251,   254,   265,    -1,    -1,    40,    -1,
      82,    -1,    -1,   237,   181,    -1,    -1,   109,   254,    -1,
      -1,   159,    48,   264,    -1,    -1,   132,   254,    -1,   132,
     254,   251,   254,    -1,    -1,   123,   271,    -1,     4,    -1,
       5,    -1,   271,   251,     4,    -1,   271,   251,     5,    -1,
      -1,   272,    34,    -1,   272,    85,    -1,   272,    86,    -1,
     272,   110,    -1,   272,   204,    -1,   272,   201,    -1,   272,
     199,    -1,   272,   200,    -1,   274,    -1,   273,   251,   274,
      -1,    27,    -1,   254,   275,    -1,    39,     4,    -1,     4,
      -1,    -1,   277,    -1,   276,   251,   277,    -1,   278,    -1,
     280,    -1,     4,   275,   287,    -1,     4,   248,     4,   275,
     287,    -1,   290,   279,     4,    -1,   249,   276,   250,    -1,
      39,    -1,    -1,   277,   281,   125,   278,   285,    -1,   277,
     204,   278,    -1,   277,   204,   278,   154,   254,    -1,   277,
     283,   282,   125,   278,   286,    -1,   277,   150,   284,   125,
     278,    -1,    -1,   117,    -1,    63,    -1,    -1,   161,    -1,
     131,    -1,   180,    -1,   131,   282,    -1,   180,   282,    -1,
      -1,    -1,   286,    -1,   154,   254,    -1,   226,   249,   271,
     250,    -1,   225,   126,   288,   249,   289,   250,    -1,   115,
     126,   288,   249,   289,   250,    -1,    -1,   102,   125,    -1,
      -1,     4,    -1,   289,   251,     4,    -1,   249,   261,   250,
      -1,   291,    -1,    81,   292,   105,     4,   262,   268,   269,
      -1,   292,   142,    -1,   292,   167,    -1,   292,   115,    -1,
      -1,    81,   292,   293,   105,   276,   262,    -1,     4,   294,
      -1,   293,   251,     4,   294,    -1,    -1,   248,    27,    -1,
      81,   292,   105,   293,   226,   276,   262,    -1,   295,    -1,
     120,   297,   298,     4,   299,   230,   300,   296,    -1,    -1,
     155,   126,   223,   302,    -1,    -1,   297,   142,    -1,   297,
      80,    -1,   297,   110,    -1,   297,   115,    -1,   123,    -1,
      -1,    -1,   249,   271,   250,    -1,   249,   301,   250,    -1,
     300,   251,   249,   301,   250,    -1,   254,    -1,    79,    -1,
     301,   251,   254,    -1,   301,   251,    79,    -1,   120,   297,
     298,     4,   188,   302,   296,    -1,     4,    21,   254,    -1,
       4,    21,    79,    -1,   302,   251,     4,    21,   254,    -1,
     302,   251,     4,    21,    79,    -1,   120,   297,   298,     4,
     299,   261,   296,    -1,   303,    -1,   175,   297,   298,     4,
     299,   230,   300,   296,    -1,   175,   297,   298,     4,   188,
     302,   296,    -1,   175,   297,   298,     4,   299,   261,   296,
      -1,   304,    -1,   223,   305,   276,   188,   306,   262,   268,
     269,    -1,    -1,   297,   142,    -1,   297,   115,    -1,     4,
      21,   254,    -1,     4,   248,     4,    21,   254,    -1,   306,
     251,     4,    21,   254,    -1,   306,   251,     4,   248,     4,
      21,   254,    -1,   307,    -1,    62,    69,   308,     4,    -1,
      62,   182,   308,     4,    -1,    -1,   114,    97,    -1,   309,
      -1,    62,   310,   205,   308,     4,   249,   311,   250,    -1,
      62,   310,   205,   308,     4,   248,     4,   249,   311,   250,
      -1,    62,   310,   205,   308,     4,   249,   311,   250,   320,
      -1,    62,   310,   205,   308,     4,   320,    -1,    62,   310,
     205,   308,     4,   248,     4,   249,   311,   250,   320,    -1,
      62,   310,   205,   308,     4,   248,     4,   320,    -1,    -1,
     206,    -1,   312,    -1,   311,   251,   312,    -1,   164,   126,
     249,   271,   250,    -1,   126,   249,   271,   250,    -1,   106,
     126,   249,   271,   250,    -1,    -1,     4,   318,   313,    -1,
      -1,   313,    19,   152,    -1,   313,   152,    -1,   313,    79,
       5,    -1,   313,    79,     6,    -1,   313,    79,     8,    -1,
     313,    79,     7,    -1,   313,    41,    -1,   313,   220,   249,
     271,   250,    -1,   313,   220,   126,    -1,   313,   164,   126,
      -1,   313,   126,    -1,   313,    57,     5,    -1,    -1,   249,
       6,   250,    -1,   249,     6,   251,     6,   250,    -1,    -1,
      44,    -1,    -1,   316,   222,    -1,   316,   241,    -1,    -1,
     317,    53,   188,     5,    -1,   317,    55,     5,    -1,    45,
     314,    -1,   212,   314,   316,    -1,   190,   314,   316,    -1,
     145,   314,   316,    -1,   121,   314,   316,    -1,    43,   314,
     316,    -1,   170,   314,   316,    -1,    88,   314,   316,    -1,
     101,   314,   316,    -1,    77,   314,   316,    -1,    71,    -1,
     210,    -1,   211,    -1,    72,    -1,   239,    -1,    53,   314,
     317,    -1,   232,   249,     6,   250,   317,    -1,    44,   314,
      -1,   231,   249,     6,   250,    -1,   213,    -1,    46,    -1,
     144,    -1,   139,    -1,   214,   315,   317,    -1,   208,   315,
     317,    -1,   146,   315,   317,    -1,   140,   315,   317,    -1,
      95,   249,   319,   250,   317,    -1,   188,   249,   319,   250,
     317,    -1,     5,    -1,   319,   251,     5,    -1,   321,   279,
     261,    -1,    -1,   115,    -1,   175,    -1,   322,    -1,   188,
     323,    -1,   324,    -1,   323,   251,   324,    -1,     9,    21,
     254,    -1,     9,    10,   254,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   395,   395,   396,   400,   401,   402,   403,   404,   405,
     406,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   428,   429,
     430,   431,   434,   435,   436,   437,   439,   442,   445,   446,
     449,   450,   453,   454,   455,   456,   457,   461,   465,   466,
     469,   470,   471,   472,   473,   476,   477,   478,   481,   482,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   496,
     497,   498,   499,   502,   503,   506,   507,   510,   511,   514,
     515,   516,   519,   523,   526,   527,   532,   533,   536,   537,
     540,   541,   544,   545,   546,   549,   550,   553,   554,   557,
     558,   561,   562,   563,   566,   567,   570,   571,   572,   573,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   588,
     589,   590,   593,   596,   597,   598,   601,   602,   605,   606,
     609,   610,   611,   612,   615,   616,   619,   620,   621,   622,
     623,   626,   627,   628,   631,   632,   635,   636,   639,   640,
     641,   644,   645,   648,   649,   652,   653,   654,   657,   658,
     661,   662,   665,   669,   672,   675,   676,   677,   678,   681,
     684,   685,   688,   689,   692,   696,   699,   703,   704,   707,
     708,   709,   710,   711,   714,   715,   718,   719,   722,   723,
     726,   727,   728,   729,   732,   736,   738,   740,   742,   747,
     751,   754,   758,   762,   767,   770,   774,   775,   776,   779,
     781,   783,   785,   789,   792,   793,   796,   797,   801,   804,
     808,   812,   816,   820,   824,   828,   829,   832,   833,   836,
     837,   838,   841,   842,   845,   846,   847,   848,   849,   850,
     851,   852,   853,   854,   855,   856,   857,   860,   861,   862,
     866,   867,   870,   871,   872,   875,   876,   877,   880,   881,
     882,   883,   884,   885,   886,   887,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   911,   912,   915,
     918,   919,   920,   923,   926,   929,   930,   933,   935
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "YYSTART", "NAME", "STRING", "INTNUM",
  "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "REGEXP",
  "LIKE", "IS", "IN", "'!'", "NOT", "BETWEEN", "COMPARISON", "'|'", "'&'",
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
  "WHERE", "WHILE", "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "';'", "'.'",
  "'('", "')'", "','", "$accept", "stmt_list", "expr", "val_list",
  "opt_val_list", "trim_ltb", "interval_exp", "case_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_orderby",
  "opt_limit", "opt_into_list", "column_list", "select_opts",
  "select_expr_list", "select_expr", "opt_as_alias", "table_references",
  "table_reference", "table_factor", "opt_as", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
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
  "set_list", "set_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    33,   273,
     274,   275,   124,    38,   276,    43,    45,    42,    47,    37,
     277,    94,   278,   279,   280,   281,   282,   283,   284,   285,
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
     486,   487,   488,   489,   490,   491,   492,    59,    46,    40,
      41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   252,   253,   253,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     256,   256,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   257,   257,   257,   254,   254,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   254,
     254,   254,   254,   259,   259,   254,   254,   254,   254,   254,
     254,   254,   254,   260,   261,   261,   262,   262,   263,   263,
     264,   264,   265,   265,   265,   266,   266,   267,   267,   268,
     268,   269,   269,   269,   270,   270,   271,   271,   271,   271,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   273,
     273,   273,   274,   275,   275,   275,   276,   276,   277,   277,
     278,   278,   278,   278,   279,   279,   280,   280,   280,   280,
     280,   281,   281,   281,   282,   282,   283,   283,   284,   284,
     284,   285,   285,   286,   286,   287,   287,   287,   288,   288,
     289,   289,   290,   260,   291,   292,   292,   292,   292,   291,
     293,   293,   294,   294,   291,   260,   295,   296,   296,   297,
     297,   297,   297,   297,   298,   298,   299,   299,   300,   300,
     301,   301,   301,   301,   295,   302,   302,   302,   302,   295,
     260,   303,   303,   303,   260,   304,   305,   305,   305,   306,
     306,   306,   306,   260,   307,   307,   308,   308,   260,   309,
     309,   309,   309,   309,   309,   310,   310,   311,   311,   312,
     312,   312,   312,   312,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   314,   314,   314,
     315,   315,   316,   316,   316,   317,   317,   317,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   319,   319,   320,
     321,   321,   321,   260,   322,   323,   323,   324,   324
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     5,     6,
       6,     6,     3,     4,     3,     4,     3,     5,     1,     3,
       0,     1,     5,     6,     5,     6,     4,     4,     4,     4,
       4,     6,     8,     4,     7,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     2,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     1,     1,     3,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       3,     1,     2,     2,     1,     0,     1,     3,     1,     1,
       3,     5,     3,     3,     1,     0,     5,     3,     5,     6,
       5,     0,     1,     1,     0,     1,     1,     1,     2,     2,
       0,     0,     1,     2,     4,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     7,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     8,     0,     4,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     3,     5,
       1,     1,     3,     3,     7,     3,     3,     5,     5,     7,
       1,     8,     7,     7,     1,     8,     0,     2,     2,     3,
       5,     5,     7,     1,     4,     4,     0,     2,     1,     8,
      10,     9,     6,    11,     8,     0,     1,     1,     3,     5,
       4,     5,     0,     3,     0,     3,     2,     3,     3,     3,
       3,     2,     5,     3,     3,     2,     3,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     5,     2,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     5,     1,     3,     3,
       0,     1,     1,     1,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   225,   168,   179,   179,   110,     0,   179,     0,     0,
      83,   163,   175,   200,   204,   213,   218,   293,   216,   216,
     226,     0,     0,   185,   185,     0,     0,   294,   295,     0,
       0,     1,     0,     2,     0,     0,     0,   216,   172,     0,
     167,   165,   166,     0,   181,   182,   183,   184,   180,     0,
       0,     4,     7,     8,    10,     9,     6,     0,     0,     0,
     121,   111,     0,     0,    80,    81,    79,   112,   113,     0,
     114,   117,   118,   116,   115,     0,     0,     0,     0,     0,
     125,    84,   119,     0,     0,     0,   183,   180,   125,     0,
       0,   126,   128,   129,   135,     3,   217,   214,   215,     0,
       0,   170,    86,     0,     0,     0,   186,   186,     0,    40,
       0,    26,    25,    17,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,   298,
     297,   296,     0,   157,     0,     0,     0,     0,   143,   142,
     146,   150,   147,     0,     0,   144,   134,     0,   290,   173,
       0,    99,     0,    86,   172,     0,     0,     0,     0,     0,
       5,    38,    41,     0,    36,     0,     0,     0,    71,     0,
       0,    38,     0,    57,    55,    56,     0,     0,     0,     0,
       0,     0,    19,    20,    18,    77,    75,    34,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      21,    22,    24,    11,    12,    13,    14,    15,    16,    23,
     123,    86,   120,   125,     0,     0,   130,   162,   133,     0,
      86,   127,   144,   144,     0,   137,     0,   145,     0,   132,
     291,   292,     0,   232,   222,   135,    87,     0,   101,    86,
     169,   171,     0,   177,   106,   107,     0,     0,   177,   177,
       0,   177,     0,    47,     0,     0,    69,     0,     0,    46,
       0,    50,    53,     0,     0,     0,    48,    49,    35,    33,
       0,     0,    78,    76,     0,     0,     0,     0,     0,     0,
      88,   157,   159,   159,     0,     0,     0,    99,   148,   149,
       0,     0,   151,     0,   290,     0,     0,     0,     0,     0,
     227,     0,     0,     0,   164,   174,     0,     0,     0,   194,
     187,     0,     0,   177,   199,   202,   177,   203,    39,    73,
       0,    72,     0,     0,     0,     0,     0,     0,    42,    44,
       0,     0,    37,     0,     0,     0,    28,     0,    97,   131,
       0,     0,     0,   209,     0,     0,   101,   140,   138,     0,
       0,   136,   152,     0,   232,   224,   247,   247,   247,   278,
     247,   268,   271,   247,   247,     0,   247,   247,   280,   250,
     279,   247,   250,   247,     0,   247,   250,   269,   270,   247,
     277,   250,     0,     0,   272,   234,     0,     0,     0,   290,
     232,   289,    92,   100,   102,   196,   195,     0,     0,   108,
     109,   191,   190,     0,     0,   176,   201,    70,    74,     0,
      51,     0,     0,    58,    59,    43,    45,    31,    29,    30,
       0,     0,    99,   158,     0,     0,     0,     0,     0,   205,
     153,     0,   139,     0,     0,   252,   275,   258,   255,   252,
     252,     0,   252,   252,   251,   255,   252,   255,   252,     0,
     252,   255,   252,   255,     0,     0,   233,     0,     0,     0,
     221,   228,    93,    94,    90,     0,     0,     0,     0,   188,
       0,     0,     0,    54,    60,    61,    62,    63,    66,    67,
      68,    65,    64,    95,    98,   101,   160,     0,     0,   210,
     211,     0,     0,   290,     0,   263,   273,   267,   265,   287,
       0,   266,   262,   284,   261,   283,   264,     0,   260,   282,
     259,   281,     0,     0,     0,   241,     0,     0,   245,   236,
       0,     0,     0,   230,     0,    92,   103,   178,   198,   197,
     193,   192,     0,    52,     0,    89,   104,   156,     0,   155,
       0,   154,   223,   248,     0,   253,   254,     0,     0,   255,
       0,   255,   276,   255,   235,   246,   237,   238,   240,   239,
     244,   243,     0,   231,   229,    91,   189,    96,     0,    85,
     161,   212,     0,     0,   257,   285,   288,   286,   274,     0,
     105,   249,   256,   242
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,   181,   182,   183,   197,   346,   117,     9,    10,
     171,   358,   413,   484,   555,   442,   258,   324,   589,   266,
      25,    81,    82,   146,    90,    91,    92,   167,    93,   164,
     248,   165,   244,   371,   372,   236,   361,   507,    94,    11,
      22,    43,   101,    12,   329,    23,    49,   177,   333,   423,
     263,    13,    14,    30,   240,    15,    35,    16,    21,   319,
     320,   476,   455,   465,   515,   516,   405,   520,   254,   255,
      17,    27,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -404
static const yytype_int16 yypact[] =
{
     -31,    -6,  -404,  -404,  -404,  -404,    40,     8,    43,  -161,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,   -23,   -23,
    -404,  -110,    41,   173,   173,   124,    61,  -145,  -404,   163,
      10,  -404,  -121,  -404,    42,   151,   170,   -23,   -52,   201,
    -404,  -404,  -404,   -82,  -404,  -404,  -404,  -404,  -404,   220,
     223,   -89,  -404,  -404,  -404,  -404,   222,   661,   661,   661,
    -404,  -404,   661,   334,  -404,  -404,  -404,  -404,  -404,     3,
    -404,  -404,  -404,  -404,  -404,    19,    33,    36,    53,    60,
    1477,   -81,  -404,   661,   661,    40,    11,    12,    15,     9,
    -104,   150,  -404,  -404,   203,  -404,  -404,  -404,  -404,   291,
     292,  -404,    86,  -182,    10,   318,  -170,   -96,   322,   661,
     661,   752,   752,  -404,  -404,   661,  1013,   -37,   146,   661,
     285,   661,   661,   383,  -404,   661,   661,   661,   661,   661,
      28,    84,   299,   661,     2,   661,   661,   661,   661,   661,
     661,   661,   661,   661,   661,   331,  -404,    10,   661,  1498,
    1498,  -404,   355,   -54,   115,    21,   376,    10,  -404,  -404,
    -404,   -58,  -404,    10,   261,   236,  -404,   399,   -34,  -404,
     661,   254,    10,  -179,   -52,   421,   212,    -7,   421,    -4,
    -404,   780,  -404,   178,  1498,  1100,   -32,   661,  -404,   661,
     188,   740,   190,  -404,  -404,  -404,   194,   661,   801,   835,
     196,   939,  1054,   854,  1229,  1516,  1516,  -404,    32,  -404,
     449,   661,   661,   202,  1447,   210,   213,   215,   146,   495,
     690,   673,   867,   208,   208,   419,   419,   419,   419,  -404,
    -404,  -179,  -404,    48,   326,   343,  -404,  -404,  -404,   -19,
       5,   150,   236,   236,   345,   317,    10,  -404,   347,  -404,
    -404,  -404,   469,     1,  -404,   203,  1498,   426,   344,  -179,
    -404,  -404,   457,  -114,  -404,  -404,    26,   253,   348,  -114,
     253,   348,   661,  -404,   661,   661,  -404,  1371,  1150,  -404,
     661,  -404,  -404,  1276,   382,   382,  -404,  -404,  -404,  -404,
     255,   256,  1516,  1516,   449,   661,   146,   146,   146,   257,
     402,   -54,   409,   409,   661,   508,   528,   254,  -404,  -404,
      10,   661,   -77,    10,   -50,  1140,   407,   287,   411,   105,
    -404,   146,   661,   661,  -404,  -404,   490,   412,   535,  -404,
    -404,   353,   544,  -113,  -404,  -404,  -113,  -404,  -404,  1498,
    1392,  -404,   661,   918,   661,   661,   290,   293,  -404,  -404,
     294,   295,   461,   297,   307,   308,  -404,   494,   450,  -404,
     435,   312,   315,  1498,   545,   -18,   344,  -404,  1498,   661,
     316,  -404,  -404,   -77,     1,  -404,   323,   323,   323,  -404,
     323,  -404,  -404,   323,   323,   324,   323,   323,  -404,   523,
    -404,   323,   523,   323,   325,   323,   523,  -404,  -404,   323,
    -404,   523,   332,   333,  -404,  -404,   335,   212,   336,   -40,
       1,  -404,  1413,   320,   897,  -404,  1498,   352,   562,  -404,
    -404,  -404,  1498,   111,   337,  -404,  -404,  -404,  1498,   661,
    -404,   339,  1034,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
     661,   661,   254,  -404,   586,   586,   661,   661,   587,  -404,
    1498,   212,  -404,   113,   588,  -404,  -404,  -404,  -404,  -404,
    -404,   591,  -404,  -404,  -404,  -404,  -404,  -404,  -404,   591,
    -404,  -404,  -404,  -404,   597,   598,   154,   212,   121,   212,
    -404,  -404,  -404,  -404,  -404,   661,   661,   421,   593,  -404,
     645,   544,   973,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,   -60,  1498,   344,  -404,   126,   133,  1498,
    1498,   571,   143,   -35,   145,  -158,   209,  -158,  -158,  -404,
     155,  -158,  -158,   209,  -158,   209,  -158,   157,  -158,   209,
    -158,   209,   356,   357,   441,  -404,   600,   340,  -404,  -404,
     487,  -101,   161,  -404,   167,  1413,  1498,   363,  -404,  1498,
    -404,  1498,   169,  -404,   434,  -404,   493,  -404,   613,  -404,
     661,  -404,  -404,  -404,   612,  -404,  -404,   432,   616,  -404,
     617,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,   212,  -404,  -404,  -404,  -404,  -404,   212,  -404,
    -404,  1498,   374,   625,  -404,   209,  -404,   209,   209,   185,
     380,  -404,  -404,  -404
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -404,  -404,   -25,   -90,  -404,  -404,   350,   516,   628,   797,
      68,  -404,   193,    93,  -404,  -404,  -290,  -339,  -404,  -403,
    -404,  -404,   491,   -66,   -11,   483,  -112,   387,  -404,  -404,
     200,  -404,  -404,  -404,   270,   346,   342,   211,  -404,  -404,
    -404,   607,   474,  -404,   -49,   199,   631,   553,   391,   171,
    -177,  -404,  -404,  -404,  -404,  -404,    51,  -404,  -404,   300,
     263,  -404,    46,  -127,   278,   -92,  -404,   206,  -288,  -404,
    -404,  -404,   592
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -221
static const yytype_int16 yytable[] =
{
      80,   269,   304,   447,   478,   315,    51,    52,    53,    54,
      55,    56,  -206,    88,    88,  -208,  -207,   366,   175,   124,
      57,    58,   153,   104,   147,   581,   375,   449,    59,   192,
     196,     1,   111,   112,   113,   207,   215,   114,   116,   288,
     216,   327,   327,    31,   172,    38,    62,   208,   512,    26,
       2,   245,   124,    63,   145,   187,   170,   188,   149,   150,
     275,   234,   276,    18,   565,   250,    64,    65,    66,   105,
      36,    83,   157,   242,   542,   250,   544,   369,   155,   176,
     250,   250,    84,   566,   156,   184,    33,   145,    99,     3,
     185,    34,   178,   173,   191,    37,   198,   199,   201,    69,
     202,   203,   204,   205,   206,     1,    85,   316,   214,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     290,   480,   243,    80,     2,   251,    95,   317,    51,    52,
      53,    54,    55,    56,   312,   251,   231,   328,   424,    96,
     251,   251,    57,    58,     4,   256,    39,   157,   582,   370,
      59,    60,   505,   176,     5,    97,    40,     6,    61,   108,
     109,   259,   277,     3,   278,   318,   556,   301,    62,   105,
     148,   235,   283,   534,    98,    63,    19,   554,     5,   599,
     209,     5,   338,    41,   289,   600,   292,   293,    64,    65,
      66,   485,     7,   217,     5,   535,   100,   189,   367,   374,
      20,   373,   189,    24,   350,   102,    29,  -219,    42,    67,
      68,   536,  -220,   158,   252,   253,   264,   265,     4,   334,
     335,    69,   337,   267,   106,   562,   270,   107,     5,   305,
     448,     6,   110,   537,    70,   140,   141,   142,   143,   144,
     170,   260,   166,    44,    75,    76,    77,    78,    79,   339,
     340,   218,   118,    44,   431,   343,   306,  -206,    89,    89,
    -208,  -207,   567,   152,   568,   467,     7,   159,   119,   471,
     352,   238,   157,    45,   473,  -141,   330,   331,    86,   363,
     538,   160,   120,    45,   425,   121,   368,   426,    46,    51,
      52,    53,    54,    55,    56,   168,    47,   412,   414,   300,
     161,   416,   122,    57,    58,    87,   539,   422,   307,   123,
     547,    59,  -172,   211,   212,    48,   213,   428,   540,   169,
     432,   170,   174,    71,    72,    73,   180,   325,    74,    62,
     162,     5,   193,   210,   100,   230,    63,  -172,    51,    52,
      53,    54,    55,    56,   450,   576,   577,   578,   579,    64,
      65,    66,    57,    58,   163,   409,   410,   419,   420,   233,
      59,   489,   490,   513,   410,   237,    75,    76,    77,    78,
      79,   543,   331,   523,   541,   525,   557,   558,    62,   529,
     239,   531,    69,   559,   558,    63,   246,    51,    52,    53,
      54,    55,    56,   561,   331,   563,   564,   247,    64,    65,
      66,    57,    58,   249,   492,   569,   570,   571,   570,    59,
     200,   583,   331,   257,   194,   412,   504,   584,   331,   586,
     490,   509,   510,   456,   457,   262,   458,    62,   273,   459,
     460,    69,   462,   463,    63,   603,   331,   466,   279,   468,
     281,   470,   308,   309,   282,   472,   286,    64,    65,    66,
     144,   294,   302,    51,    52,    53,    54,    55,    56,   296,
     545,   546,   297,   549,   298,   551,   422,    57,    58,   303,
     310,   311,   313,   314,   322,    59,   323,   595,   326,   597,
      69,   598,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    62,    51,    52,    53,    54,    55,    56,
      63,   195,   332,   327,   345,   348,   349,   356,    57,    58,
     357,   360,   364,    64,    65,    66,    59,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,    75,    76,    77,
      78,    79,   365,   406,    62,   591,   407,   408,   417,   418,
     433,    63,   440,   434,   435,   436,    69,   437,    51,    52,
      53,    54,    55,    56,    64,    65,    66,   438,   439,   441,
     443,   444,    57,    58,   445,   451,   446,   464,   115,   415,
      59,   485,   454,   461,   469,   487,    75,    76,    77,    78,
      79,   474,   475,   488,   477,   479,   491,    69,    62,   493,
     506,   511,   560,   574,   514,    63,   519,    51,    52,    53,
      54,    55,    56,   532,   533,   575,   572,   573,    64,    65,
      66,    57,    58,   580,   328,   587,   588,   590,   592,    59,
     593,   594,   596,   421,   601,    75,    76,    77,    78,    79,
     602,   331,   186,   503,     5,   347,    32,    62,   585,   232,
     241,    69,   321,   452,    63,   362,   103,   359,   261,    51,
      52,    53,    54,    55,    56,    50,   508,    64,    65,    66,
     179,   336,   552,    57,    58,    51,    52,    53,    54,    55,
      56,    59,   548,   481,   453,   527,     0,   151,     0,    57,
      58,     0,     0,     0,     0,     0,     0,    59,     0,    62,
      69,    75,    76,    77,    78,    79,    63,   137,   138,   139,
     140,   141,   142,   143,   144,    62,     0,     0,     0,    64,
      65,    66,    63,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,   550,    64,    65,    66,     0,     0,
       0,     0,    75,    76,    77,    78,    79,   517,   518,     0,
     521,   522,    69,     0,   524,     0,   526,     0,   528,     0,
     530,   125,   126,   127,   128,   129,   130,   131,    69,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,     0,    75,    76,    77,    78,
      79,   125,   126,   127,   128,   129,   130,   131,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   125,   126,   127,   128,   129,   130,   131,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,     0,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,   280,   125,   126,   127,   128,
     129,   130,   131,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   154,    75,    76,    77,
      78,    79,   138,   139,   140,   141,   142,   143,   144,     0,
       0,     0,     0,    75,    76,    77,    78,    79,   125,   126,
     127,   128,   129,   130,   131,   190,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   125,
     126,   127,   128,   129,   130,   131,     0,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     125,   126,   127,   128,   129,   130,   131,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,     0,     0,   268,     0,   271,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   272,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,   291,     0,     0,
       0,     0,     0,     0,     0,   299,     0,     0,     0,     0,
     429,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   272,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   125,   126,   127,   128,   129,
     130,   131,   284,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   126,   127,   128,   129,
     130,   131,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   285,     0,     0,     0,
       0,   351,     0,   353,   354,   355,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   494,   495,   496,
     497,   125,   126,   127,   128,   129,   130,   131,   411,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   498,   499,   500,   486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   430,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   376,   377,   378,   379,     0,     0,   287,
       0,     0,     0,   380,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   381,   382,     0,     0,     0,     0,   383,     0,     0,
       0,     0,     0,   553,     0,     0,     0,     0,   384,     0,
       0,     0,     0,     0,     0,   385,     0,     0,     0,     0,
       0,   386,     0,   128,   129,   130,   131,   115,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   501,   502,     0,     0,     0,     0,   388,
     389,     0,     0,     0,   390,   391,   392,   125,   126,   127,
     128,   129,   130,   131,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   274,
     393,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   394,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   396,     0,
     397,   398,   399,   400,   401,     0,     0,     0,     0,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   402,   403,     0,     0,     0,     0,     0,     0,   404,
       0,   344,   125,   126,   127,   128,   129,   130,   131,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   125,   126,   127,   128,   129,   130,   131,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   125,   126,   127,   128,   129,   130,
     131,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,     0,     0,     0,     0,     0,
       0,     0,     0,   482,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   130,   131,   341,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
       0,   124,     0,     0,   295,     0,   427,     0,   125,   126,
     127,   128,   129,   130,   131,   483,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   125,
     126,   127,   128,   129,   130,   131,   145,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
    -221,  -221,  -221,  -221,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144
};

static const yytype_int16 yycheck[] =
{
      25,   178,    21,    21,   407,     4,     4,     5,     6,     7,
       8,     9,     4,     4,     4,     4,     4,   307,   188,     4,
      18,    19,    88,   105,   105,   126,   314,   366,    26,   119,
     120,    62,    57,    58,    59,     7,    34,    62,    63,     7,
      38,   155,   155,     0,   226,     4,    44,    19,   451,     9,
      81,   163,     4,    51,    39,    92,   235,    94,    83,    84,
      92,   115,    94,    69,   222,   115,    64,    65,    66,   251,
      19,    10,   251,   131,   477,   115,   479,   154,    89,   249,
     115,   115,    21,   241,   188,   110,   247,    39,    37,   120,
     115,   114,   188,   104,   119,   205,   121,   122,   123,    97,
     125,   126,   127,   128,   129,    62,   251,   106,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     210,   409,   180,   148,    81,   175,   247,   126,     4,     5,
       6,     7,     8,     9,   246,   175,   147,   251,   251,    97,
     175,   175,    18,    19,   175,   170,   105,   251,   249,   226,
      26,    27,   442,   249,   185,     4,   115,   188,    34,   248,
     249,   172,   187,   120,   189,   164,   505,   233,    44,   251,
     251,   225,   197,    19,     4,    51,   182,   237,   185,   582,
     152,   185,   272,   142,   152,   588,   211,   212,    64,    65,
      66,   251,   223,   191,   185,    41,   248,   234,   310,   249,
     206,   313,   234,     4,   294,     4,     7,   247,   167,    85,
      86,    57,   247,    63,   248,   249,     4,     5,   175,   268,
     269,    97,   271,   230,     4,   513,   230,     4,   185,   248,
     248,   188,    10,    79,   110,    27,    28,    29,    30,    31,
     235,   173,    39,    80,   242,   243,   244,   245,   246,   274,
     275,   249,   249,    80,   344,   280,   251,   249,   249,   249,
     249,   249,    53,   248,    55,   392,   223,   117,   249,   396,
     295,   250,   251,   110,   401,   125,   250,   251,   115,   304,
     126,   131,   249,   110,   333,   249,   311,   336,   115,     4,
       5,     6,     7,     8,     9,     4,   123,   322,   323,   231,
     150,   326,   249,    18,    19,   142,   152,   332,   240,   249,
     487,    26,   226,    14,    15,   142,    17,   342,   164,    27,
     345,   235,     4,   199,   200,   201,     4,   259,   204,    44,
     180,   185,    47,   249,   248,     4,    51,   251,     4,     5,
       6,     7,     8,     9,   369,     5,     6,     7,     8,    64,
      65,    66,    18,    19,   204,   250,   251,     4,     5,     4,
      26,   250,   251,   250,   251,   250,   242,   243,   244,   245,
     246,   250,   251,   465,   220,   467,   250,   251,    44,   471,
       4,   473,    97,   250,   251,    51,   125,     4,     5,     6,
       7,     8,     9,   250,   251,   250,   251,   161,    64,    65,
      66,    18,    19,     4,   429,   250,   251,   250,   251,    26,
      27,   250,   251,   159,   129,   440,   441,   250,   251,   250,
     251,   446,   447,   377,   378,     4,   380,    44,   250,   383,
     384,    97,   386,   387,    51,   250,   251,   391,   250,   393,
     250,   395,   242,   243,   250,   399,   250,    64,    65,    66,
      31,   249,   126,     4,     5,     6,     7,     8,     9,   249,
     485,   486,   249,   488,   249,   490,   491,    18,    19,   126,
     125,   154,   125,     4,    48,    26,   132,   569,    21,   571,
      97,   573,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    44,     4,     5,     6,     7,     8,     9,
      51,   216,   249,   155,   122,   250,   250,   250,    18,    19,
     108,   102,     4,    64,    65,    66,    26,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   242,   243,   244,
     245,   246,     4,   126,    44,   560,   249,   126,   126,     4,
     250,    51,    48,   250,   250,   250,    97,   250,     4,     5,
       6,     7,     8,     9,    64,    65,    66,   250,   250,   109,
     125,   249,    18,    19,   249,   249,    21,    44,   234,    79,
      26,   251,   249,   249,   249,   223,   242,   243,   244,   245,
     246,   249,   249,    21,   249,   249,   249,    97,    44,   250,
       4,     4,    21,   152,     6,    51,     5,     4,     5,     6,
       7,     8,     9,     6,     6,     5,   250,   250,    64,    65,
      66,    18,    19,   126,   251,   181,   123,     4,     6,    26,
     188,     5,     5,    79,   250,   242,   243,   244,   245,   246,
       5,   251,   116,   440,   185,   285,     8,    44,   545,   148,
     157,    97,   255,   373,    51,   303,    39,   301,   174,     4,
       5,     6,     7,     8,     9,    24,   445,    64,    65,    66,
     107,   270,   491,    18,    19,     4,     5,     6,     7,     8,
       9,    26,    79,   410,   374,   469,    -1,    85,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    44,
      97,   242,   243,   244,   245,   246,    51,    24,    25,    26,
      27,    28,    29,    30,    31,    44,    -1,    -1,    -1,    64,
      65,    66,    51,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    79,    64,    65,    66,    -1,    -1,
      -1,    -1,   242,   243,   244,   245,   246,   459,   460,    -1,
     462,   463,    97,    -1,   466,    -1,   468,    -1,   470,    -1,
     472,    11,    12,    13,    14,    15,    16,    17,    97,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,   242,   243,   244,   245,
     246,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   242,   243,   244,   245,   246,
      -1,    -1,    -1,    -1,    -1,   105,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    89,   242,   243,   244,
     245,   246,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,   242,   243,   244,   245,   246,    11,    12,
      13,    14,    15,    16,    17,   118,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,   177,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,   251,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,   210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,   251,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    11,    12,    13,    14,    15,
      16,    17,   251,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   251,    -1,    -1,    -1,
      -1,   294,    -1,   296,   297,   298,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    11,    12,    13,    14,    15,    16,    17,   321,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   112,   113,   251,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,   250,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    43,    44,    45,    46,    -1,    -1,   250,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    14,    15,    16,    17,   234,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   239,   240,    -1,    -1,    -1,    -1,   139,
     140,    -1,    -1,    -1,   144,   145,   146,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,   209,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,    -1,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,
     210,   211,   212,   213,   214,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,   239,
      -1,   105,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    94,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,     4,    -1,    -1,    37,    -1,    94,    -1,    11,    12,
      13,    14,    15,    16,    17,    82,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    11,
      12,    13,    14,    15,    16,    17,    39,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    62,    81,   120,   175,   185,   188,   223,   253,   260,
     261,   291,   295,   303,   304,   307,   309,   322,    69,   182,
     206,   310,   292,   297,   297,   272,     9,   323,   324,   297,
     305,     0,   260,   247,   114,   308,   308,   205,     4,   105,
     115,   142,   167,   293,    80,   110,   115,   123,   142,   298,
     298,     4,     5,     6,     7,     8,     9,    18,    19,    26,
      27,    34,    44,    51,    64,    65,    66,    85,    86,    97,
     110,   199,   200,   201,   204,   242,   243,   244,   245,   246,
     254,   273,   274,    10,    21,   251,   115,   142,     4,   249,
     276,   277,   278,   280,   290,   247,    97,     4,     4,   308,
     248,   294,     4,   293,   105,   251,     4,     4,   248,   249,
      10,   254,   254,   254,   254,   234,   254,   259,   249,   249,
     249,   249,   249,   249,     4,    11,    12,    13,    14,    15,
      16,    17,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    39,   275,   105,   251,   254,
     254,   324,   248,   275,   261,   276,   188,   251,    63,   117,
     131,   150,   180,   204,   281,   283,    39,   279,     4,    27,
     235,   262,   226,   276,     4,   188,   249,   299,   188,   299,
       4,   254,   255,   256,   254,   254,   259,    92,    94,   234,
     261,   254,   255,    47,   129,   216,   255,   257,   254,   254,
      27,   254,   254,   254,   254,   254,   254,     7,    19,   152,
     249,    14,    15,    17,   254,    34,    38,   191,   249,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
       4,   276,   274,     4,   115,   225,   287,   250,   250,     4,
     306,   277,   131,   180,   284,   278,   125,   161,   282,     4,
     115,   175,   248,   249,   320,   321,   254,   159,   268,   276,
     262,   294,     4,   302,     4,     5,   271,   230,   261,   302,
     230,   261,   251,   250,   209,    92,    94,   254,   254,   250,
     105,   250,   250,   254,   251,   251,   250,   250,     7,   152,
     255,   261,   254,   254,   249,    37,   249,   249,   249,   261,
     262,   275,   126,   126,    21,   248,   251,   262,   282,   282,
     125,   154,   278,   125,     4,     4,   106,   126,   164,   311,
     312,   279,    48,   132,   269,   262,    21,   155,   251,   296,
     250,   251,   249,   300,   296,   296,   300,   296,   255,   254,
     254,    94,   209,   254,   105,   122,   258,   258,   250,   250,
     255,   261,   254,   261,   261,   261,   250,   108,   263,   287,
     102,   288,   288,   254,     4,     4,   268,   278,   254,   154,
     226,   285,   286,   278,   249,   320,    43,    44,    45,    46,
      53,    71,    72,    77,    88,    95,   101,   121,   139,   140,
     144,   145,   146,   170,   188,   190,   208,   210,   211,   212,
     213,   214,   231,   232,   239,   318,   126,   249,   126,   250,
     251,   261,   254,   264,   254,    79,   254,   126,     4,     4,
       5,    79,   254,   301,   251,   296,   296,    94,   254,   102,
     250,   255,   254,   250,   250,   250,   250,   250,   250,   250,
      48,   109,   267,   125,   249,   249,    21,    21,   248,   269,
     254,   249,   286,   311,   249,   314,   314,   314,   314,   314,
     314,   249,   314,   314,    44,   315,   314,   315,   314,   249,
     314,   315,   314,   315,   249,   249,   313,   249,   271,   249,
     320,   312,    40,    82,   265,   251,   251,   223,    21,   250,
     251,   249,   254,   250,    73,    74,    75,    76,   111,   112,
     113,   239,   240,   264,   254,   268,     4,   289,   289,   254,
     254,     4,   271,   250,     6,   316,   317,   316,   316,     5,
     319,   316,   316,   317,   316,   317,   316,   319,   316,   317,
     316,   317,     6,     6,    19,    41,    57,    79,   126,   152,
     164,   220,   271,   250,   271,   254,   254,   302,    79,   254,
      79,   254,   301,   250,   237,   266,   269,   250,   251,   250,
      21,   250,   320,   250,   251,   222,   241,    53,    55,   250,
     251,   250,   250,   250,   152,     5,     5,     6,     7,     8,
     126,   126,   249,   250,   250,   265,   250,   181,   123,   270,
       4,   254,     6,   188,     5,   317,     5,   317,   317,   271,
     271,   250,     5,   250
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 400 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr(Ast_LiteralExpr::LiteralTypeName, "", (yyvsp[(1) - (1)].strval)); ;}
    break;

  case 5:
#line 401 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr(Ast_LiteralExpr::LiteralTypeDetailName, (yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].strval)); ;}
    break;

  case 6:
#line 402 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr(Ast_LiteralExpr::LiteralTypeUserVar, "", (yyvsp[(1) - (1)].strval)); ;}
    break;

  case 7:
#line 403 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr(Ast_LiteralExpr::LiteralTypeString, "", (yyvsp[(1) - (1)].strval)); ;}
    break;

  case 8:
#line 404 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr((yyvsp[(1) - (1)].intval)); ;}
    break;

  case 9:
#line 405 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr((yyvsp[(1) - (1)].floatval)); ;}
    break;

  case 10:
#line 406 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr((yyvsp[(1) - (1)].intval)); ;}
    break;

  case 11:
#line 409 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeAdd, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 12:
#line 410 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeSub, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 13:
#line 411 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeMul, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 14:
#line 412 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeDiv, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 15:
#line 413 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeMod, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 16:
#line 414 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeMod, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 17:
#line 415 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeNeg, (yyvsp[(2) - (2)].ast_expr)); ;}
    break;

  case 18:
#line 416 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeAnd, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 19:
#line 417 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeOr, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 20:
#line 418 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeXor, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 21:
#line 419 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeBitOr, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 22:
#line 420 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeBitAnd, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 23:
#line 421 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeMod, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 24:
#line 422 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr((yyvsp[(2) - (3)].subtok)==1 ? Ast_ArithmeticExpr::CompoundTypeLeftShift : Ast_ArithmeticExpr::CompoundTypeRightShift, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 25:
#line 423 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeNot, (yyvsp[(2) - (2)].ast_expr)); ;}
    break;

  case 26:
#line 424 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(Ast_ArithmeticExpr::CompoundTypeNot, (yyvsp[(2) - (2)].ast_expr)); ;}
    break;

  case 27:
#line 425 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ArithmeticExpr(static_cast<enum Ast_ArithmeticExpr::arithmetic_type>(Ast_ArithmeticExpr::CompoundTypeCompareEQ + (yyvsp[(2) - (3)].subtok)), (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 28:
#line 428 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CompareExpr(static_cast<enum Ast_CompareExpr::compare_type>(Ast_CompareExpr::CompoundTypeCompareEQ + (yyvsp[(2) - (5)].subtok)), (yyvsp[(1) - (5)].ast_expr), (yyvsp[(4) - (5)].ast_select_stmt)); ;}
    break;

  case 29:
#line 429 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CompareExpr(static_cast<enum Ast_CompareExpr::compare_type>(Ast_CompareExpr::CompoundTypeCompareEQ + (yyvsp[(2) - (6)].subtok)), Ast_CompareExpr::CompareSubTypeAny, (yyvsp[(1) - (6)].ast_expr), (yyvsp[(5) - (6)].ast_select_stmt)); ;}
    break;

  case 30:
#line 430 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CompareExpr(static_cast<enum Ast_CompareExpr::compare_type>(Ast_CompareExpr::CompoundTypeCompareEQ + (yyvsp[(2) - (6)].subtok)), Ast_CompareExpr::CompareSubTypeSome, (yyvsp[(1) - (6)].ast_expr), (yyvsp[(5) - (6)].ast_select_stmt)); ;}
    break;

  case 31:
#line 431 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CompareExpr(static_cast<enum Ast_CompareExpr::compare_type>(Ast_CompareExpr::CompoundTypeCompareEQ + (yyvsp[(2) - (6)].subtok)), Ast_CompareExpr::CompareSubTypeAll, (yyvsp[(1) - (6)].ast_expr), (yyvsp[(5) - (6)].ast_select_stmt)); ;}
    break;

  case 32:
#line 434 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_IsExpr(Ast_IsExpr::CompoundTypeIsNull, (yyvsp[(1) - (3)].ast_expr)); ;}
    break;

  case 33:
#line 435 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_IsExpr(Ast_IsExpr::CompoundTypeIsNotNull, (yyvsp[(1) - (4)].ast_expr)); ;}
    break;

  case 34:
#line 436 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_IsExpr(Ast_IsExpr::CompoundTypeIsBool, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].intval)); ;}
    break;

  case 35:
#line 437 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_IsExpr(Ast_IsExpr::CompoundTypeIsBool, (yyvsp[(1) - (4)].ast_expr), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 36:
#line 439 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_AsgnExpr((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 37:
#line 442 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_BetweenExpr((yyvsp[(1) - (5)].ast_expr), (yyvsp[(3) - (5)].ast_expr), (yyvsp[(5) - (5)].ast_expr)); ;}
    break;

  case 38:
#line 445 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_val_list) = new Ast_ValList((yyvsp[(1) - (1)].ast_expr)); ;}
    break;

  case 39:
#line 446 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(3) - (3)].ast_val_list)->addExpr((yyvsp[(1) - (3)].ast_expr)); (yyval.ast_val_list) = (yyvsp[(3) - (3)].ast_val_list); ;}
    break;

  case 40:
#line 449 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_val_list) = 0; ;}
    break;

  case 41:
#line 450 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_val_list) = (yyvsp[(1) - (1)].ast_val_list); ;}
    break;

  case 42:
#line 453 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_InExpr(Ast_InExpr::CompoundTypeIn, (yyvsp[(1) - (5)].ast_expr), (yyvsp[(4) - (5)].ast_val_list)); ;}
    break;

  case 43:
#line 454 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_InExpr(Ast_InExpr::CompoundTypeNotIn, (yyvsp[(1) - (6)].ast_expr), (yyvsp[(5) - (6)].ast_val_list)); ;}
    break;

  case 44:
#line 455 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_InExpr(Ast_InExpr::CompoundTypeIn, (yyvsp[(1) - (5)].ast_expr), (yyvsp[(4) - (5)].ast_select_stmt)); ;}
    break;

  case 45:
#line 456 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_InExpr(Ast_InExpr::CompoundTypeNotIn, (yyvsp[(1) - (6)].ast_expr), (yyvsp[(5) - (6)].ast_select_stmt)); ;}
    break;

  case 46:
#line 457 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_ExistExpr((yyvsp[(1) - (4)].subtok) ? Ast_ExistExpr::CompoundTypeExists : Ast_ExistExpr::CompoundTypeNotExists, (yyvsp[(3) - (4)].ast_select_stmt)); ;}
    break;

  case 47:
#line 461 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_RegularFunctionExpr((yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].ast_val_list)); ;}
    break;

  case 48:
#line 465 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CountFuncExpr(nullptr); ;}
    break;

  case 49:
#line 466 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CountFuncExpr((yyvsp[(3) - (4)].ast_expr)); ;}
    break;

  case 50:
#line 469 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_SubtringFuncExpr((yyvsp[(3) - (4)].ast_val_list)); ;}
    break;

  case 51:
#line 470 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_SubtringFuncExpr((yyvsp[(3) - (6)].ast_expr), (yyvsp[(5) - (6)].ast_expr), nullptr); ;}
    break;

  case 52:
#line 471 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_SubtringFuncExpr((yyvsp[(3) - (8)].ast_expr), (yyvsp[(5) - (8)].ast_expr), (yyvsp[(7) - (8)].ast_expr)); ;}
    break;

  case 53:
#line 472 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_TrimFuncExpr((yyvsp[(3) - (4)].ast_val_list)); ;}
    break;

  case 54:
#line 473 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_TrimFuncExpr(static_cast<Ast_TrimFuncExpr::trim_ltb>((yyvsp[(3) - (7)].intval)), (yyvsp[(4) - (7)].ast_expr), (yyvsp[(6) - (7)].ast_val_list)); ;}
    break;

  case 55:
#line 476 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 56:
#line 477 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 2; ;}
    break;

  case 57:
#line 478 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 3; ;}
    break;

  case 58:
#line 481 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_DateFuncExpr(Ast_DateFuncExpr::CompoundTypeFuncDateAdd, (yyvsp[(3) - (6)].ast_expr), (yyvsp[(5) - (6)].ast_interval_exp)); ;}
    break;

  case 59:
#line 482 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_DateFuncExpr(Ast_DateFuncExpr::CompoundTypeFuncDateSub, (yyvsp[(3) - (6)].ast_expr), (yyvsp[(5) - (6)].ast_interval_exp)); ;}
    break;

  case 60:
#line 485 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_DAY_HOUR, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 61:
#line 486 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_DAY_MICROSECOND, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 62:
#line 487 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_DAY_MINUTE, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 63:
#line 488 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_DAY_SECOND, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 64:
#line 489 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_YEAR_MONTH, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 65:
#line 490 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_YEAR, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 66:
#line 491 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_HOUR_MICROSECOND, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 67:
#line 492 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_HOUR_MINUTE, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 68:
#line 493 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_interval_exp) = new Ast_IntervalExp(Ast_IntervalExp::INTERVAL_HOUR_SECOND, (yyvsp[(2) - (3)].ast_expr)); ;}
    break;

  case 69:
#line 496 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CaseExpr((yyvsp[(2) - (4)].ast_expr), (yyvsp[(3) - (4)].ast_case_list), nullptr); ;}
    break;

  case 70:
#line 497 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CaseExpr((yyvsp[(2) - (6)].ast_expr), (yyvsp[(3) - (6)].ast_case_list), (yyvsp[(5) - (6)].ast_expr)); ;}
    break;

  case 71:
#line 498 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CaseExpr(nullptr, (yyvsp[(2) - (3)].ast_case_list), nullptr); ;}
    break;

  case 72:
#line 499 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_CaseExpr(nullptr, (yyvsp[(2) - (5)].ast_case_list), (yyvsp[(4) - (5)].ast_expr)); ;}
    break;

  case 73:
#line 502 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_case_list) = new Ast_CaseList((yyvsp[(2) - (4)].ast_expr), (yyvsp[(4) - (4)].ast_expr)); ;}
    break;

  case 74:
#line 503 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (5)].ast_case_list)->addCase((yyvsp[(3) - (5)].ast_expr), (yyvsp[(5) - (5)].ast_expr)); (yyval.ast_case_list) = (yyvsp[(1) - (5)].ast_case_list); ;}
    break;

  case 75:
#line 506 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LikeExpr(Ast_LikeExpr::CompoundTypeLike, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 76:
#line 507 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LikeExpr(Ast_LikeExpr::CompoundTypeNotLike, (yyvsp[(1) - (4)].ast_expr), (yyvsp[(4) - (4)].ast_expr)); ;}
    break;

  case 77:
#line 510 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_RegexpExpr(Ast_RegexpExpr::CompoundTypeRegexp, (yyvsp[(1) - (3)].ast_expr), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 78:
#line 511 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_RegexpExpr(Ast_RegexpExpr::CompoundTypeNotRegexp, (yyvsp[(1) - (4)].ast_expr), (yyvsp[(4) - (4)].ast_expr)); ;}
    break;

  case 79:
#line 514 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr(Ast_LiteralExpr::LiteralTypeCurTs); ;}
    break;

  case 80:
#line 515 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr(Ast_LiteralExpr::LiteralTypeCurDate); ;}
    break;

  case 81:
#line 516 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_LiteralExpr(Ast_LiteralExpr::LiteralTypeCurTime); ;}
    break;

  case 82:
#line 519 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_expr) = new Ast_BinaryExpr((yyvsp[(2) - (2)].ast_expr)); ;}
    break;

  case 83:
#line 523 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_stmt) = new Ast_Stmt((yyvsp[(1) - (1)].ast_select_stmt)); (yyvsp[(1) - (1)].ast_select_stmt)->illustrate(); ;}
    break;

  case 84:
#line 526 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_select_stmt) = new Ast_SelectStmt(static_cast<Ast_SelectStmt::select_opts>((yyvsp[(2) - (3)].intval)), (yyvsp[(3) - (3)].ast_select_expr_list)); ;}
    break;

  case 85:
#line 529 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    {  (yyval.ast_select_stmt) = new Ast_SelectStmt(static_cast<Ast_SelectStmt::select_opts>((yyvsp[(2) - (11)].intval)), (yyvsp[(3) - (11)].ast_select_expr_list), (yyvsp[(5) - (11)].ast_table_references), (yyvsp[(6) - (11)].ast_opt_where), (yyvsp[(7) - (11)].ast_opt_groupby), (yyvsp[(8) - (11)].ast_opt_having), (yyvsp[(9) - (11)].ast_opt_orderby), (yyvsp[(10) - (11)].ast_opt_limit), (yyvsp[(11) - (11)].ast_opt_into_list)); ;}
    break;

  case 86:
#line 532 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_where) = NULL; ;}
    break;

  case 87:
#line 533 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_where) = new Ast_OptWhere((yyvsp[(2) - (2)].ast_expr)); ;}
    break;

  case 88:
#line 536 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_groupby) = NULL; ;}
    break;

  case 89:
#line 537 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_groupby) = new Ast_OptGroupBy((yyvsp[(3) - (4)].ast_groupby_list), (yyvsp[(4) - (4)].intval)); ;}
    break;

  case 90:
#line 540 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_groupby_list) = new Ast_GroupByList((yyvsp[(1) - (2)].ast_expr), (yyvsp[(2) - (2)].intval)) ;}
    break;

  case 91:
#line 541 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (4)].ast_groupby_list)->addGroupBy((yyvsp[(3) - (4)].ast_expr), (yyvsp[(4) - (4)].intval)); (yyval.ast_groupby_list) = (yyvsp[(1) - (4)].ast_groupby_list); ;}
    break;

  case 92:
#line 544 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 93:
#line 545 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 94:
#line 546 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 95:
#line 549 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 96:
#line 550 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 97:
#line 553 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_having) = NULL; ;}
    break;

  case 98:
#line 554 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_having) = new Ast_OptHaving((yyvsp[(2) - (2)].ast_expr)); ;}
    break;

  case 99:
#line 557 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_orderby) = NULL; ;}
    break;

  case 100:
#line 558 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_orderby) = new Ast_OptOrderBy((yyvsp[(3) - (3)].ast_groupby_list)); ;}
    break;

  case 101:
#line 561 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_limit) = NULL; ;}
    break;

  case 102:
#line 562 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_limit) = new Ast_OptLimit((yyvsp[(2) - (2)].ast_expr)); ;}
    break;

  case 103:
#line 563 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_limit) = new Ast_OptLimit((yyvsp[(2) - (4)].ast_expr), (yyvsp[(4) - (4)].ast_expr)); ;}
    break;

  case 104:
#line 566 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_into_list) = NULL; ;}
    break;

  case 105:
#line 567 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_into_list) = new Ast_OptIntoList((yyvsp[(2) - (2)].ast_column_list)); ;}
    break;

  case 106:
#line 570 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_column_list) = new Ast_ColumnList((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 107:
#line 571 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { lyyerror((yylsp[(1) - (1)]), "string %s found where name are requered\n", (yyvsp[(1) - (1)].strval)); (yyval.ast_column_list) = new Ast_ColumnList((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 108:
#line 572 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_list)->addName((yyvsp[(3) - (3)].strval)); (yyval.ast_column_list) = (yyvsp[(1) - (3)].ast_column_list); ;}
    break;

  case 109:
#line 573 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { lyyerror((yylsp[(3) - (3)]), "string %s found where name are requered\n", (yyvsp[(3) - (3)].strval)); (yyvsp[(1) - (3)].ast_column_list)->addName((yyvsp[(3) - (3)].strval)); free((yyvsp[(3) - (3)].strval)); (yyval.ast_column_list) = (yyvsp[(1) - (3)].ast_column_list); ;}
    break;

  case 110:
#line 577 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 111:
#line 578 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(1) - (2)].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 112:
#line 579 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(1) - (2)].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 113:
#line 580 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(1) - (2)].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 114:
#line 581 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(1) - (2)].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 115:
#line 582 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(1) - (2)].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 020; ;}
    break;

  case 116:
#line 583 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(1) - (2)].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 040; ;}
    break;

  case 117:
#line 584 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(1) - (2)].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0100; ;}
    break;

  case 118:
#line 585 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(1) - (2)].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 0200; ;}
    break;

  case 119:
#line 588 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_select_expr_list) = new Ast_SelectExprList((yyvsp[(1) - (1)].ast_select_expr)); ;}
    break;

  case 120:
#line 589 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_select_expr_list)->addSelectExpr((yyvsp[(3) - (3)].ast_select_expr)); (yyval.ast_select_expr_list) = (yyvsp[(1) - (3)].ast_select_expr_list); ;}
    break;

  case 121:
#line 590 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_select_expr_list) = new Ast_SelectExprList(); ;}
    break;

  case 122:
#line 593 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_select_expr) = new Ast_SelectExpr((yyvsp[(1) - (2)].ast_expr), (yyvsp[(2) - (2)].strval)); ;}
    break;

  case 123:
#line 596 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.strval) = (yyvsp[(2) - (2)].strval); ;}
    break;

  case 124:
#line 597 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 125:
#line 598 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.strval) = NULL; ;}
    break;

  case 126:
#line 601 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_table_references) = new Ast_TableReferences((yyvsp[(1) - (1)].ast_table_reference)); ;}
    break;

  case 127:
#line 602 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_table_references)->addTableReference((yyvsp[(3) - (3)].ast_table_reference)); (yyval.ast_table_references) = (yyvsp[(1) - (3)].ast_table_references); ;}
    break;

  case 128:
#line 605 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_table_reference) = new Ast_TableReference((yyvsp[(1) - (1)].ast_table_factor)); ;}
    break;

  case 129:
#line 606 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_table_reference) = new Ast_TableReference((yyvsp[(1) - (1)].ast_join_table)); ;}
    break;

  case 130:
#line 609 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_table_factor) = new Ast_TableFactor((yyvsp[(1) - (3)].strval), (yyvsp[(2) - (3)].strval), (yyvsp[(3) - (3)].ast_index_hint)); ;}
    break;

  case 131:
#line 610 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_table_factor) = new Ast_TableFactor((yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval), (yyvsp[(4) - (5)].strval), (yyvsp[(5) - (5)].ast_index_hint)); ;}
    break;

  case 132:
#line 611 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_table_factor) = new Ast_TableFactor((yyvsp[(1) - (3)].ast_table_subquery), (yyvsp[(3) - (3)].strval)); ;}
    break;

  case 133:
#line 612 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_table_factor) = new Ast_TableFactor((yyvsp[(2) - (3)].ast_table_references)); ;}
    break;

  case 136:
#line 619 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_table) = new Ast_JoinTable((yyvsp[(1) - (5)].ast_table_reference), static_cast<enum Ast_JoinTable::join_type>((yyvsp[(2) - (5)].intval)), (yyvsp[(4) - (5)].ast_table_factor), (yyvsp[(5) - (5)].ast_join_condition)); ;}
    break;

  case 137:
#line 620 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_table) = new Ast_JoinTable((yyvsp[(1) - (3)].ast_table_reference), Ast_JoinTable::JOIN_TABLE_STRAIGHT_JOIN, (yyvsp[(3) - (3)].ast_table_factor)); ;}
    break;

  case 138:
#line 621 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_table) = new Ast_JoinTable((yyvsp[(1) - (5)].ast_table_reference), Ast_JoinTable::JOIN_TABLE_STRAIGHT_JOIN, (yyvsp[(3) - (5)].ast_table_factor), (yyvsp[(5) - (5)].ast_expr)); ;}
    break;

  case 139:
#line 622 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_table) = new Ast_JoinTable((yyvsp[(1) - (6)].ast_table_reference), static_cast<enum Ast_JoinTable::join_type>((yyvsp[(2) - (6)].intval)), (yyvsp[(5) - (6)].ast_table_factor), (yyvsp[(6) - (6)].ast_join_condition)); ;}
    break;

  case 140:
#line 623 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_table) = new Ast_JoinTable((yyvsp[(1) - (5)].ast_table_reference), static_cast<enum Ast_JoinTable::join_type>((yyvsp[(3) - (5)].intval)), (yyvsp[(5) - (5)].ast_table_factor)); ;}
    break;

  case 141:
#line 626 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = Ast_JoinTable::JOIN_TABLE_INNER; ;}
    break;

  case 142:
#line 627 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = Ast_JoinTable::JOIN_TABLE_INNER; ;}
    break;

  case 143:
#line 628 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = Ast_JoinTable::JOIN_TABLE_CROSS; ;}
    break;

  case 144:
#line 631 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 145:
#line 632 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 146:
#line 635 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = Ast_JoinTable::JOIN_TABLE_LEFT_OUTER; ;}
    break;

  case 147:
#line 636 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = Ast_JoinTable::JOIN_TABLE_RIGHT_OUTER; ;}
    break;

  case 148:
#line 639 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = Ast_JoinTable::JOIN_TABLE_LEFT_OUTER; ;}
    break;

  case 149:
#line 640 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = Ast_JoinTable::JOIN_TABLE_RIGHT_OUTER;; ;}
    break;

  case 150:
#line 641 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = Ast_JoinTable::JOIN_TABLE_INNER; ;}
    break;

  case 151:
#line 644 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_condition) = NULL; ;}
    break;

  case 152:
#line 645 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_condition) = (yyvsp[(1) - (1)].ast_join_condition); ;}
    break;

  case 153:
#line 648 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_condition) = new Ast_JoinCondition((yyvsp[(2) - (2)].ast_expr)); ;}
    break;

  case 154:
#line 649 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_join_condition) = new Ast_JoinCondition((yyvsp[(3) - (4)].ast_column_list)); ;}
    break;

  case 155:
#line 652 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_index_hint) = new Ast_IndexHint(1, (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].ast_index_list)); ;}
    break;

  case 156:
#line 653 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_index_hint) = new Ast_IndexHint(0, (yyvsp[(3) - (6)].intval), (yyvsp[(5) - (6)].ast_index_list)); ;}
    break;

  case 157:
#line 654 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_index_hint) = NULL; ;}
    break;

  case 158:
#line 657 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 159:
#line 658 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 160:
#line 661 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_index_list) = new Ast_IndexList((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 161:
#line 662 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_index_list)->addName((yyvsp[(3) - (3)].strval)); (yyval.ast_index_list) = (yyvsp[(1) - (3)].ast_index_list); ;}
    break;

  case 162:
#line 665 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_table_subquery) = new Ast_TableSubquery((yyvsp[(2) - (3)].ast_select_stmt)); ;}
    break;

  case 163:
#line 669 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_stmt) = new Ast_Stmt((yyvsp[(1) - (1)].ast_delete_stmt)); ;}
    break;

  case 164:
#line 672 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_delete_stmt) = new Ast_DeleteStmt(static_cast<enum Ast_DeleteStmt::delete_opts>((yyvsp[(2) - (7)].intval)), (yyvsp[(4) - (7)].strval), (yyvsp[(5) - (7)].ast_opt_where), (yyvsp[(6) - (7)].ast_opt_orderby), (yyvsp[(7) - (7)].ast_opt_limit)); ;}
    break;

  case 165:
#line 675 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; ;}
    break;

  case 166:
#line 676 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; ;}
    break;

  case 167:
#line 677 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; ;}
    break;

  case 168:
#line 678 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 169:
#line 681 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_delete_stmt) = new Ast_DeleteStmt(static_cast<enum Ast_DeleteStmt::delete_opts>((yyvsp[(2) - (6)].intval)), (yyvsp[(3) - (6)].ast_delete_list), (yyvsp[(5) - (6)].ast_table_references), (yyvsp[(6) - (6)].ast_opt_where)); ;}
    break;

  case 170:
#line 684 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_delete_list) = new Ast_DeleteList((yyvsp[(1) - (2)].strval)); ;}
    break;

  case 171:
#line 685 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (4)].ast_delete_list)->addName((yyvsp[(3) - (4)].strval)); (yyval.ast_delete_list) = (yyvsp[(1) - (4)].ast_delete_list); ;}
    break;

  case 174:
#line 693 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_delete_stmt) = new Ast_DeleteStmt(static_cast<enum Ast_DeleteStmt::delete_opts>((yyvsp[(2) - (7)].intval)), (yyvsp[(4) - (7)].ast_delete_list), (yyvsp[(6) - (7)].ast_table_references), (yyvsp[(7) - (7)].ast_opt_where)); ;}
    break;

  case 175:
#line 696 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_stmt) = new Ast_Stmt((yyvsp[(1) - (1)].ast_insert_stmt)); (yyvsp[(1) - (1)].ast_insert_stmt)->illustrate(); ;}
    break;

  case 176:
#line 700 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_insert_stmt) = new Ast_InsertStmt(static_cast<enum Ast_InsertStmt::insert_opts>((yyvsp[(2) - (8)].intval)), (yyvsp[(4) - (8)].strval), (yyvsp[(5) - (8)].ast_opt_col_names), (yyvsp[(7) - (8)].ast_insert_vals_list), (yyvsp[(8) - (8)].ast_opt_ondupupdate)); ;}
    break;

  case 177:
#line 703 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_ondupupdate) = NULL; ;}
    break;

  case 178:
#line 704 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_ondupupdate) = new Ast_OptOnDupUpdate((yyvsp[(4) - (4)].ast_insert_asgn_list)); ;}
    break;

  case 179:
#line 707 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 180:
#line 708 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 181:
#line 709 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02; ;}
    break;

  case 182:
#line 710 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04; ;}
    break;

  case 183:
#line 711 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 186:
#line 718 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_col_names) = NULL; ;}
    break;

  case 187:
#line 719 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_col_names) = new Ast_OptColNames((yyvsp[(2) - (3)].ast_column_list)); ;}
    break;

  case 188:
#line 722 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_insert_vals_list) = new Ast_InsertValList((yyvsp[(2) - (3)].ast_insert_vals)); ;}
    break;

  case 189:
#line 723 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (5)].ast_insert_vals_list)->addInsertVals((yyvsp[(4) - (5)].ast_insert_vals)); (yyval.ast_insert_vals_list) = (yyvsp[(1) - (5)].ast_insert_vals_list); ;}
    break;

  case 190:
#line 726 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_insert_vals) = new Ast_InsertVals((yyvsp[(1) - (1)].ast_expr)); ;}
    break;

  case 191:
#line 727 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_insert_vals) = new Ast_InsertVals(NULL); ;}
    break;

  case 192:
#line 728 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_insert_vals)->addInsertVal((yyvsp[(3) - (3)].ast_expr)); (yyval.ast_insert_vals) = (yyvsp[(1) - (3)].ast_insert_vals);;}
    break;

  case 193:
#line 729 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_insert_vals)->addInsertVal(NULL); (yyval.ast_insert_vals) = (yyvsp[(1) - (3)].ast_insert_vals); ;}
    break;

  case 194:
#line 732 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    {
                (yyval.ast_insert_stmt) = new Ast_InsertStmt(static_cast<enum Ast_InsertStmt::insert_opts>((yyvsp[(2) - (7)].intval)), (yyvsp[(4) - (7)].strval), (yyvsp[(6) - (7)].ast_insert_asgn_list), (yyvsp[(7) - (7)].ast_opt_ondupupdate)); ;}
    break;

  case 195:
#line 736 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                    (yyval.ast_insert_asgn_list) = new Ast_InsertAsgnList((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 196:
#line 738 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                    (yyval.ast_insert_asgn_list) = new Ast_InsertAsgnList((yyvsp[(1) - (3)].strval), NULL); ;}
    break;

  case 197:
#line 740 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad assignment to %s", (yyvsp[(1) - (5)].ast_insert_asgn_list)); YYERROR; }
                    (yyvsp[(1) - (5)].ast_insert_asgn_list)->addInsertAsgn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].ast_expr)); (yyval.ast_insert_asgn_list) = (yyvsp[(1) - (5)].ast_insert_asgn_list); ;}
    break;

  case 198:
#line 742 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(4) - (5)].subtok) != 4) {yyerror("bad assignment to %s", (yyvsp[(1) - (5)].ast_insert_asgn_list)); YYERROR; }
                    (yyvsp[(1) - (5)].ast_insert_asgn_list)->addInsertAsgn((yyvsp[(3) - (5)].strval), NULL); (yyval.ast_insert_asgn_list) = (yyvsp[(1) - (5)].ast_insert_asgn_list); ;}
    break;

  case 199:
#line 748 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_insert_stmt) = new Ast_InsertStmt(static_cast<enum Ast_InsertStmt::insert_opts>((yyvsp[(2) - (7)].intval)), (yyvsp[(4) - (7)].strval), (yyvsp[(5) - (7)].ast_opt_col_names), (yyvsp[(6) - (7)].ast_select_stmt), (yyvsp[(7) - (7)].ast_opt_ondupupdate)); ;}
    break;

  case 200:
#line 751 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_stmt) = new Ast_Stmt((yyvsp[(1) - (1)].ast_replace_stmt)); ;}
    break;

  case 201:
#line 755 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_replace_stmt) = new Ast_ReplaceStmt(static_cast<enum Ast_ReplaceStmt::replace_opts>((yyvsp[(2) - (8)].intval)), (yyvsp[(4) - (8)].strval), (yyvsp[(5) - (8)].ast_opt_col_names), (yyvsp[(7) - (8)].ast_insert_vals_list), (yyvsp[(8) - (8)].ast_opt_ondupupdate)); ;}
    break;

  case 202:
#line 759 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_replace_stmt) = new Ast_ReplaceStmt(static_cast<enum Ast_ReplaceStmt::replace_opts>((yyvsp[(2) - (7)].intval)), (yyvsp[(4) - (7)].strval), (yyvsp[(6) - (7)].ast_insert_asgn_list), (yyvsp[(7) - (7)].ast_opt_ondupupdate)); ;}
    break;

  case 203:
#line 763 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_replace_stmt) = new Ast_ReplaceStmt(static_cast<enum Ast_ReplaceStmt::replace_opts>((yyvsp[(2) - (7)].intval)), (yyvsp[(4) - (7)].strval), (yyvsp[(5) - (7)].ast_opt_col_names), (yyvsp[(6) - (7)].ast_select_stmt), (yyvsp[(7) - (7)].ast_opt_ondupupdate)); ;}
    break;

  case 204:
#line 767 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_stmt) = new Ast_Stmt((yyvsp[(1) - (1)].ast_update_stmt)); ;}
    break;

  case 205:
#line 771 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_update_stmt) = new Ast_UpdateStmt(static_cast<enum Ast_UpdateStmt::update_opts>((yyvsp[(2) - (8)].intval)), (yyvsp[(3) - (8)].ast_table_references), (yyvsp[(5) - (8)].ast_update_asgn_list), (yyvsp[(6) - (8)].ast_opt_where), (yyvsp[(7) - (8)].ast_opt_orderby), (yyvsp[(8) - (8)].ast_opt_limit)); ;}
    break;

  case 206:
#line 774 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 207:
#line 775 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01; ;}
    break;

  case 208:
#line 776 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010; ;}
    break;

  case 209:
#line 779 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                        (yyval.ast_update_asgn_list) = new Ast_UpdateAsgnList((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 210:
#line 781 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(4) - (5)].subtok) != 4) {yyerror("bad update assignment to %s", (yyvsp[(1) - (5)].strval)); YYERROR; }
        (yyval.ast_update_asgn_list) = new Ast_UpdateAsgnList((yyvsp[(1) - (5)].strval), (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].ast_expr)); ;}
    break;

  case 211:
#line 783 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(4) - (5)].subtok) != 4) {yyerror("bad update assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
        (yyvsp[(1) - (5)].ast_update_asgn_list)->addUpdateAsgn((yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].ast_expr)); (yyval.ast_update_asgn_list) = (yyvsp[(1) - (5)].ast_update_asgn_list); ;}
    break;

  case 212:
#line 785 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if ((yyvsp[(6) - (7)].subtok) != 4) {yyerror("bad update assignment to %s.%s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval)); YYERROR; }
        (yyvsp[(1) - (7)].ast_update_asgn_list)->addUpdateAsgn((yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval), (yyvsp[(7) - (7)].ast_expr)); (yyval.ast_update_asgn_list) = (yyvsp[(1) - (7)].ast_update_asgn_list); ;}
    break;

  case 213:
#line 789 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_stmt) = new Ast_Stmt((yyvsp[(1) - (1)].ast_create_database_stmt)) ;}
    break;

  case 214:
#line 792 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_database_stmt) = new Ast_CreateDatabaseStmt((yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); ;}
    break;

  case 215:
#line 793 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_database_stmt) = new Ast_CreateDatabaseStmt((yyvsp[(3) - (4)].intval), (yyvsp[(4) - (4)].strval)); ;}
    break;

  case 216:
#line 796 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 217:
#line 797 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if (!(yyvsp[(2) - (2)].subtok)) {yyerror("IF EXISTS doesn't exist"); YYERROR; } 
        (yyval.intval) = (yyvsp[(2) - (2)].subtok); /* NOT EXISTS hack */ ;}
    break;

  case 218:
#line 801 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_stmt) = new Ast_Stmt((yyvsp[(1) - (1)].ast_create_table_stmt)); ;}
    break;

  case 219:
#line 804 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { 
        (yyval.ast_create_table_stmt) = new Ast_CreateTableStmt((yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].ast_create_col_list)); ;}
    break;

  case 220:
#line 808 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    {
        (yyval.ast_create_table_stmt) = new Ast_CreateTableStmt((yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(5) - (10)].strval), (yyvsp[(7) - (10)].strval), (yyvsp[(9) - (10)].ast_create_col_list)); ;}
    break;

  case 221:
#line 812 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    {
        (yyval.ast_create_table_stmt) = new Ast_CreateTableStmt((yyvsp[(2) - (9)].intval), (yyvsp[(4) - (9)].intval), (yyvsp[(5) - (9)].strval), (yyvsp[(7) - (9)].ast_create_col_list), (yyvsp[(9) - (9)].ast_create_select_statement)); ;}
    break;

  case 222:
#line 816 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    {
        (yyval.ast_create_table_stmt) = new Ast_CreateTableStmt((yyvsp[(2) - (6)].intval), (yyvsp[(4) - (6)].intval), (yyvsp[(5) - (6)].strval), (yyvsp[(6) - (6)].ast_create_select_statement)); ;}
    break;

  case 223:
#line 820 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    {
        (yyval.ast_create_table_stmt) = new Ast_CreateTableStmt((yyvsp[(2) - (11)].intval), (yyvsp[(4) - (11)].intval), (yyvsp[(5) - (11)].strval), (yyvsp[(7) - (11)].strval), (yyvsp[(9) - (11)].ast_create_col_list), (yyvsp[(11) - (11)].ast_create_select_statement)); ;}
    break;

  case 224:
#line 824 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    {
        (yyval.ast_create_table_stmt) = new Ast_CreateTableStmt((yyvsp[(2) - (8)].intval), (yyvsp[(4) - (8)].intval), (yyvsp[(5) - (8)].strval), (yyvsp[(7) - (8)].strval), (yyvsp[(8) - (8)].ast_create_select_statement)); ;}
    break;

  case 225:
#line 828 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 226:
#line 829 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 227:
#line 832 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_col_list) = new Ast_CreateColList((yyvsp[(1) - (1)].ast_create_definition)); ;}
    break;

  case 228:
#line 833 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_create_col_list)->addCreateDefinition((yyvsp[(3) - (3)].ast_create_definition)); (yyval.ast_create_col_list) = (yyvsp[(1) - (3)].ast_create_col_list); ;}
    break;

  case 229:
#line 836 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_definition) = new Ast_CreateDefinition(Ast_CreateDefinition::KEY_TYPE_PRIMARY_KEY, (yyvsp[(4) - (5)].ast_column_list)); ;}
    break;

  case 230:
#line 837 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_definition) = new Ast_CreateDefinition(Ast_CreateDefinition::KEY_TYPE_KEY, (yyvsp[(3) - (4)].ast_column_list)); ;}
    break;

  case 231:
#line 838 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_definition) = new Ast_CreateDefinition(Ast_CreateDefinition::KEY_TYPE_FULLTEXT_KEY, (yyvsp[(4) - (5)].ast_column_list)); ;}
    break;

  case 232:
#line 841 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_definition) = NULL; ;}
    break;

  case 233:
#line 842 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_definition) = new Ast_CreateDefinition((yyvsp[(1) - (3)].strval), (yyvsp[(2) - (3)].ast_data_type), (yyvsp[(3) - (3)].ast_column_atts)); ;}
    break;

  case 234:
#line 845 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_column_atts) = new Ast_ColumnAttrs(); ;}
    break;

  case 235:
#line 846 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_atts)->addAttr(Ast_ColumnAttrs::ATTR_NOT_NULL); (yyval.ast_column_atts) = (yyvsp[(1) - (3)].ast_column_atts); ;}
    break;

  case 237:
#line 848 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_atts)->addAttr(Ast_ColumnAttrs::ATTR_DEFAULT_STRING, (yyvsp[(3) - (3)].strval)); (yyval.ast_column_atts) = (yyvsp[(1) - (3)].ast_column_atts); ;}
    break;

  case 238:
#line 849 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_atts)->addUInt32Attr(Ast_ColumnAttrs::ATTR_DEFAULT_INTNUM, (yyvsp[(3) - (3)].intval)); (yyval.ast_column_atts) = (yyvsp[(1) - (3)].ast_column_atts); ;}
    break;

  case 239:
#line 850 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_atts)->addDoubleAttr(Ast_ColumnAttrs::ATTR_DEFAULT_APPROXNUM, (yyvsp[(3) - (3)].floatval)); (yyval.ast_column_atts) = (yyvsp[(1) - (3)].ast_column_atts); ;}
    break;

  case 240:
#line 851 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_atts)->addBoolAttr(Ast_ColumnAttrs::ATTR_DEFAULT_BOOL, (yyvsp[(3) - (3)].intval)); (yyval.ast_column_atts) = (yyvsp[(1) - (3)].ast_column_atts); ;}
    break;

  case 241:
#line 852 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (2)].ast_column_atts)->addAttr(Ast_ColumnAttrs::ATTR_AUTO_INCREMENT); (yyval.ast_column_atts) = (yyvsp[(1) - (2)].ast_column_atts); ;}
    break;

  case 242:
#line 853 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (5)].ast_column_atts)->addAttr(Ast_ColumnAttrs::ATTR_UNIQ, (yyvsp[(4) - (5)].ast_column_list)); (yyval.ast_column_atts) = (yyvsp[(1) - (5)].ast_column_atts); ;}
    break;

  case 243:
#line 854 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_atts)->addAttr(Ast_ColumnAttrs::ATTR_UNIQ_KEY); (yyval.ast_column_atts) = (yyvsp[(1) - (3)].ast_column_atts); ;}
    break;

  case 244:
#line 855 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_atts)->addAttr(Ast_ColumnAttrs::ATTR_PRIMARY_KEY); (yyval.ast_column_atts) = (yyvsp[(1) - (3)].ast_column_atts); ;}
    break;

  case 245:
#line 856 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (2)].ast_column_atts)->addAttr(Ast_ColumnAttrs::ATTR_INDEX_KEY); (yyval.ast_column_atts) = (yyvsp[(1) - (2)].ast_column_atts); ;}
    break;

  case 246:
#line 857 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_column_atts)->addAttr(Ast_ColumnAttrs::ATTR_COMMENT, (yyvsp[(3) - (3)].strval)); (yyval.ast_column_atts) = (yyvsp[(1) - (3)].ast_column_atts); ;}
    break;

  case 247:
#line 860 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 248:
#line 861 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(2) - (3)].intval); ;}
    break;

  case 249:
#line 862 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000 * (yyvsp[(4) - (5)].intval); ;}
    break;

  case 250:
#line 866 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 251:
#line 867 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 252:
#line 870 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 253:
#line 871 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 254:
#line 872 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 2; ;}
    break;

  case 255:
#line 875 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_csc) = NULL; ;}
    break;

  case 256:
#line 876 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_csc) = new Ast_OptCSC(Ast_OptCSC::CSC_TYPE_CHARSET, (yyvsp[(4) - (4)].strval)); ;}
    break;

  case 257:
#line 877 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_opt_csc) = new Ast_OptCSC(Ast_OptCSC::CSC_TYPE_COLLATE, (yyvsp[(3) - (3)].strval)); ;}
    break;

  case 258:
#line 880 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_BIT, (yyvsp[(2) - (2)].intval), false, false); ;}
    break;

  case 259:
#line 881 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_TINYINT, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 260:
#line 882 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_SMALLINT, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 261:
#line 883 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_MEDIUMINT, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 262:
#line 884 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_INTEGER, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 263:
#line 885 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_BIGINT, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 264:
#line 886 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_REAL, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 265:
#line 887 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_DOUBLE, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 266:
#line 888 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_FLOAT, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 267:
#line 889 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_DECIMAL, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval) == 1, (yyvsp[(3) - (3)].intval) == 2); ;}
    break;

  case 268:
#line 890 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_DATE); ;}
    break;

  case 269:
#line 891 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_TIME); ;}
    break;

  case 270:
#line 892 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_TIMESTAMP); ;}
    break;

  case 271:
#line 893 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_DATETIME); ;}
    break;

  case 272:
#line 894 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_YEAR); ;}
    break;

  case 273:
#line 895 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_CHAR, (yyvsp[(2) - (3)].intval), false, (yyvsp[(3) - (3)].ast_opt_csc)); ;}
    break;

  case 274:
#line 896 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_VARCHAR, (yyvsp[(3) - (5)].intval), false, (yyvsp[(5) - (5)].ast_opt_csc)); ;}
    break;

  case 275:
#line 897 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_BINARY, (yyvsp[(2) - (2)].intval), false, (Ast_OptCSC *)NULL); ;}
    break;

  case 276:
#line 898 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_VARBINARY, (yyvsp[(3) - (4)].intval), false, (Ast_OptCSC *)NULL); ;}
    break;

  case 277:
#line 899 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_TINYBLOB); ;}
    break;

  case 278:
#line 900 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_BLOB); ;}
    break;

  case 279:
#line 901 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_MEDIUMBLOB); ;}
    break;

  case 280:
#line 902 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_LONGBLOB); ;}
    break;

  case 281:
#line 903 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_TINYTEXT, 1 << 8, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].ast_opt_csc)); ;}
    break;

  case 282:
#line 904 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_TEXT, 1 << 16, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].ast_opt_csc)); ;}
    break;

  case 283:
#line 905 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_MEDIUMTEXT, 1 << 28, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].ast_opt_csc)); ;}
    break;

  case 284:
#line 906 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_LONGTEXT, 1 << 28, (yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].ast_opt_csc)); ;}
    break;

  case 285:
#line 907 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_ENUM, (yyvsp[(3) - (5)].ast_enum_list), (yyvsp[(5) - (5)].ast_opt_csc)); ;}
    break;

  case 286:
#line 908 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_data_type) = new Ast_DataType(Ast_DataType::DATA_TYPE_SET, (yyvsp[(3) - (5)].ast_enum_list), (yyvsp[(5) - (5)].ast_opt_csc)); ;}
    break;

  case 287:
#line 911 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_enum_list) = new Ast_EnumList((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 288:
#line 912 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_enum_list)->addEnum((yyvsp[(3) - (3)].strval)); (yyval.ast_enum_list) = (yyvsp[(1) - (3)].ast_enum_list); ;}
    break;

  case 289:
#line 915 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_create_select_statement) = new Ast_CreateSelectStmt((yyvsp[(1) - (3)].intval), (yyvsp[(3) - (3)].ast_select_stmt)); ;}
    break;

  case 290:
#line 918 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 0; ;}
    break;

  case 291:
#line 919 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 1; ;}
    break;

  case 292:
#line 920 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.intval) = 2; ;}
    break;

  case 293:
#line 923 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_stmt) = new Ast_Stmt((yyvsp[(1) - (1)].ast_set_stmt)); ;}
    break;

  case 294:
#line 926 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_set_stmt) = new Ast_SetStmt((yyvsp[(2) - (2)].ast_set_list)); ;}
    break;

  case 295:
#line 929 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_set_list) = new Ast_SetList((yyvsp[(1) - (1)].ast_set_expr)); ;}
    break;

  case 296:
#line 930 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyvsp[(1) - (3)].ast_set_list)->addSetExpr((yyvsp[(3) - (3)].ast_set_expr)), (yyval.ast_set_list) = (yyvsp[(1) - (3)].ast_set_list); ;}
    break;

  case 297:
#line 933 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { if((yyvsp[(2) - (3)].subtok) != 4) {yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; } 
        (yyval.ast_set_expr) = new Ast_SetExpr((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;

  case 298:
#line 935 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"
    { (yyval.ast_set_expr) = new Ast_SetExpr((yyvsp[(1) - (3)].strval), (yyvsp[(3) - (3)].ast_expr)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4158 "pmysql.tab.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 938 "/Users/wengzhao/Desktop/fondlefish/sql-parser/pmysql.yy"


void yyerror(const char *s, ...) {
    extern unsigned int yylineno;

    va_list ap;
    va_start(ap, s);

    fprintf(stderr, "%d: error: ", yylineno);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}

void lyyerror(YYLTYPE t, const char *s, ...) {
    va_list ap; va_start(ap, s);

    if(t.first_line) 
        fprintf(stderr, "%d.%d-%d.%d: error: ", t.first_line, t.first_column, t.last_line, t.last_column); 
    vfprintf(stderr, s, ap); 
    fprintf(stderr, "\n");
}

int main(int argc, char *argv[]) {
    extern FILE *yyin;

    if( argc > 1 && !strcmp(argv[1], "-d")) {
        //yydebug = 1;
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
