/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 579 "pmysql.tab.hh"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
