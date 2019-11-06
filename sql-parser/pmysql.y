%{
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "include/ast/ast.h"

extern int yylex (void);

void yyerror(char *s, ...);
void emit(char *s, ...);
%}

%union {
    int intval;
    double floatval;
    char *strval;
    int subtok;
}

%token YYSTART

    /*name and literal values */
%token <strval> NAME
%token <strval> STRING
%token <intval> INTNUM
%token <intval> BOOL
%token <floatval> APPROXNUM

    /* use @abc names */
%token <strval> USERVAR

    /* operators and precedence levels */
%right ASSIGN
%left OR
%left ANDOP
%nonassoc IN IS LIKE REGEXP
%left NOT '!'
%left BETWEEN
%left <subtok> COMPARISON /* = <> < > <= => <=> */
%left '|'
%left '&'
%left <subtok> SHIFT /* << >> */
%left '+' '-'
%left '*' '/' '%' MOD
%left '^'
%nonassoc UMINUS

%token ADD
%token ALL
%token ALTER
%token ANALYZE
%token AND
%token ANY
%token AS
%token ASC
%token AUTO_INCREMENT
%token BEFORE
%token BETWEEN
%token BIGINT
%token BINARY
%token BIT
%token BLOB
%token BOTH
%token BY
%token CALL
%token CASCADE
%token CASE
%token CHANGE
%token CHAR
%token CHECK
%token COLLATE
%token COLUMN
%token COMMENT
%token CONDITION
%token CONSTRAINT
%token CONTINUE
%token CONVERT
%token CREATE
%token CROSS
%token CURRENT_DATE
%token CURRENT_TIME
%token CURRENT_TIMESTAMP
%token CURRENT_USER
%token CURSOR
%token DATABASE
%token DATABASES
%token DATE
%token DATETIME
%token DAY_HOUR
%token DAY_MICROSECOND
%token DAY_MINUTE
%token DAY_SECOND
%token DECIMAL
%token DECLARE
%token DEFAULT
%token DELAYED
%token DELETE
%token DESC
%token DESCRIBE
%token DETERMINISTIC
%token DISTINCT
%token DISTINCTROW
%token DIV
%token DOUBLE
%token DROP
%token DUAL
%token EACH
%token ELSE
%token ELSEIF
%token END
%token ENUM
%token ESCAPE
%token <subtok> EXISTS
%token EXIT
%token EXPLAIN
%token FETCH
%token FLOAT
%token FOR
%token FORCE
%token FOREIGN
%token FROM
%token FULLTEXT
%token GRANT
%token GROUP
%token HAVING
%token HIGH_PRIORITY
%token HOUR_MICROSECOND
%token HOUR_MINUTE
%token HOUR_SECOND
%token IF
%token IGNORE
%token IN
%token INFILE
%token INNER
%token INOUT
%token INSENSITIVE
%token INSERT
%token INTEGER
%token INTERVAL
%token INTO
%token IS
%token ITERATE
%token JOIN
%token KEY
%token KEYS
%token KILL
%token LEADING
%token LEAVE
%token LEFT
%token LIKE
%token LIMIT
%token LINES
%token LOAD
%token LOCALTIME
%token LOCALTIMESTAMP
%token LOCK
%token LONG
%token LONGBLOB
%token LONGTEXT
%token LOOP
%token LOW_PRIORITY
%token MATCH
%token MEDIUMBLOB
%token MEDIUMINT
%token MEDIUMTEXT
%token MINUTE_MICROSECOND
%token MINUTE_SECOND
%token MOD
%token MODIFIES
%token NATURAL
%token NOT
%token NO_WRITE_TO_BINLOG
%token NULLX
%token NUMBER
%token ON
%token ONDUPLICATE
%token OPTIMIZE
%token OPTION
%token OPTIONALLY
%token OR
%token ORDER
%token OUT
%token OUTER
%token OUTFILE
%token PRECISION
%token PRIMARY
%token PROCEDURE
%token PURGE
%token QUICK
%token READ
%token READS
%token REAL
%token REFERENCES
%token REGEXP
%token RELEASE
%token RENAME
%token REPEAT
%token REPLACE
%token REQUIRE
%token RESTRICT
%token RETURN
%token REVOKE
%token RIGHT
%token ROLLUP
%token SCHEMA
%token SCHEMAS
%token SECOND_MICROSECOND
%token SELECT
%token SENSITIVE
%token SEPARATOR
%token SET
%token SHOW
%token SAMLLINT
%token SOME
%token SONAME
%token SPATIAL
%token SPECIFIC
%token SQL
%token SQLEXCEPTION
%token SQLSTATE
%token SQLWARNING
%token SQL_BIG_RESULT
%token SQL_CALC_FOUND_ROWS
%token SQL_SMALL_RESULT
%token SSL
%token STARTING
%token STRAIGHT_JOIN
%token TABLE
%token TEMPORARY
%token TERMINATED
%token TEXT
%token THEN
%token TIME
%token TIMESTAMP
%token TINYINT
%token TINYBLOB
%token TINYTEXT
%token TO
%token TRAILING
%token TRIGGER
%token UNDO
%token UNION
%token UNIQUE
%token UNLOCK
%token UNSIGNED
%token UPDATE
%token USAGE
%token USE
%token USING
%token UTC_DATE
%token UTC_TIME
%token UTC_TIMESTAMP
%token VALUES
%token VARBINARY
%token VARCHAR
%token VARYING
%token WHEN
%token WHERE
%token WHILE
%token WITH
%token WRITE
%token XOR
%token YEAR
%token YEAR_MONTH
%token ZEROFILL

    /* functions with special syntax */
%token FSUBSTRING
%token FTRIM
%token FDATE_ADD
%token FDATE_SUB
%token FCOUNT

%type <intval> select_opts select_expr_list
%type <intval> val_list opt_val_list case_list
%type <intval> groupby_list opt_with_rollup opt_asc_desc
%type <intval> table_references opt_inner_cross opt_outer
%type <intval> left_or_right opt_left_or_right_outer column_list
%type <intval> index_list opt_for_join

%type <intval> delete_opts delete_list
%type <intval> insert_opts insert_vals insert_vals_list
%type <intval> insert_asgn_list opt_if_not_exists update_opts update_asgn_list
%type <intval> opt_temporary opt_length opt_binary opt_uz enum_list
%type <intval> column_atts data_type opt_ignore_replace create_col_list

%start stmt_list

%%

stmt_list: stmt ';'
    | stmt_list stmt ';'
    ;

    /**** expressions ****/
expr: NAME          { $$ = new Ast_Expr($1, Ast_Expr::NAME); }
    | NAME '.' NAME { $$ = new Ast_Expr($1, $3, Ast_Expr::NAME2); }
    | USERVAR       { $$ = new Ast_Expr($1, Ast_Expr::USERVAR); }
    | STRING        { $$ = new Ast_Expr($1, Ast_Expr::STRING); }
    | INTNUM        { $$ = new Ast_Expr($1, Ast_Expr::INTNUM); }
    | APPROXNUM     { $$ = new Ast_Expr($1, Ast_Expr::APPROXNUM); }
    | BOOL          { $$ = new Ast_Expr($1, Ast_Expr::BOOL); }
    ;

expr: expr '+' expr { $$ = new Ast_Expr($1, $3, Ast_Expr::ADD); }
    | expr '-' expr { $$ = new Ast_Expr($1, $3, Ast_Expr::MINUS); }
    | expr '*' expr { $$ = new Ast_Expr($1, $3, Ast_Expr::MUL); }
    | expr "/" expr { $$ = new Ast_Expr($1, $3, Ast_Expr::DIV); }
    | expr "%" expr { $$ = new Ast_Expr($1, $3, Ast_Expr::MOD); }
    | expr MOD expr { $$ = new Ast_Expr($1, $3, Ast_Expr::MOD); }
    | '-' expr %prec UMINUS     { $$ = new Ast_Expr($2, Ast_Expr::NEG); }
    | expr ANDOP expr   { $$ = new Ast_Expr($1, $3, Ast_Expr::AND); }
    | expr OR expr  { $$ = new Ast_Expr($1, $3, Ast_Expr::OR); }
    | expr XOR expr { $$ = new Ast_Expr($1, $3, Ast_Expr::XOR); }
    | expr '|' expr { $$ = new Ast_Expr($1, $3, Ast_Expr::BITOR); }
    | expr '&' expr { $$ = new Ast_Expr($1, $3, Ast_Expr::BITAND); }
    | expr '^' expr { $$ = new Ast_Expr($1, $3, Ast_Expr::BITXOR); }
    | expr SHIFT expr   { $$ = new Ast_Expr($1, $3, $2==1 ? Ast_Expr::LEFT_SHIFT : Ast_Expr::RIGHT_SHIFT); }
    | NOT expr      { $$ = new Ast_Expr($2, Ast_Expr::NOT); }
    | '!' expr      { $$ = new Ast_Expr($2, Ast_Expr::NOT); }
    | expr COMPARISON expr { $$ = new Ast_Expr($1, $3, Ast_Expr::CMP_BASE + $2); }

        /* recursive selects and comparisons thereto */
    | expr COMPARISON '(' select_stmt ')'  { $$ = new Ast_Expr($1, $4, Ast_Expr::CMP_BASE + $2 + 1); }
    | expr COMPARISON ANY '(' select_stmt ')' { $$ = new Ast_Expr($1, $5, Ast_Expr::CMP_BASE + $2 + 2); }
    | expr COMPARISON SOME '(' select_stmt ')' { $$ = new Ast_Expr($1, $5, Ast_Expr::CMP_BASE + $2 + 3); }
    | expr COMPARISON ALL '(' select_stmt ')' { $$ = new Ast_Expr($1, $5, Ast_Expr::CMP_BASE + $2 + 4); }
    ;

expr: expr IS NULLX     { $$ = new Ast_Expr($1, Ast_Expr::IS_NULL); }
    | expr IS NOT NULLX { $$ = new Ast_Expr($1, Ast_Expr::IS_NOT_NULL); }
    | expr IS BOOL      { $$ = new Ast_Expr($1, $3, Ast_Expr::IS_BOOL); }
    | expr IS NOT BOOL  { $$ = new Ast_Expr($1, $4, Ast_Expr::IS_NOT_BOOL); }

    | USERVAR ASSIGN expr   { $$ = new Ast_Expr($1, $3, Ast_Expr::ASSIGN); }
    ;

expr: expr BETWEEN expr AND expr %prec BETWEEN { $$ = new Ast_Expr($1. $3, $5, Ast_Expr::BETWEEN); }
    ;

val_list: expr { $$ = new Ast_ValList($1); }
    | expr ',' val_list { $$ = new Ast_ValList($1, $3); }
    ;

opt_val_list: /* nil */ { $$ = 0; }
    | val_list { $$ = new Ast_OptValList($1); }
    ;

expr: expr IN '(' val_list ')'          { $$ = new Ast_Expr($1, $4, Ast_Expr::IS_IN); }
    | expr NOT IN '(' val_list ')'      { $$ = new Ast_Expr($1, $5, Ast_Expr::IS_NOT_IN); }
    | expr IN '(' select_stmt ')'       { $$ = new Ast_Expr($1, $4, Ast_Expr::IS_IN); }
    | expr NOT IN '(' select_stmt ')'   { $$ = new Ast_Expr($1, $5, Ast_Expr::IS_NOT_IN); }
    | EXISTS '(' select_stmt ')'        { $$ = new Ast_Expr($3, $1 ? Ast_Expr::EXISTS : Ast_Expr::NOT_EXISTS); }
    ;

    /* regular functions */
expr: NAME '(' opt_val_list ')'     { $$ = new Ast_Expr($1, $3, Ast_Expr::CALL); }
    ;

    /* functions with special syntax */
expr: FCOUNT '(' '*' ')'    { $$ = new Ast_Expr(Ast_Expr::COUNTALL); }
    | FCOUNT '(' expr ')'   { $$ = new Ast_Expr($3, Ast_Expr::COUNT); }
    ;

expr: FSUBSTRING '(' val_list ')'               { $$ = new Ast_Expr($3, Ast_Expr::SUBSTR); }
    | FSUBSTRING '(' expr FROM expr ')'         { $$ = new Ast_Expr($3, $5, Ast_Expr::SUBSTR_FROM); }
    | FSUBSTRING '(' expr FROM expr FOR expr ')'    { $$ = new Ast_Expr($3, $5, $7, Ast_Expr::SUBSTR_FROM_FOR); }
    | FTRIM '(' val_list ')'                    { $$ = new Ast_Expr($3, Ast_Expr::TRIM); }
    | FTRIM '(' trim_ltb expr FROM val_list ')' { $$ = new Ast_Expr($4, $6, Ast_Expr::TRIM_FROM + $3); }
    ;

trim_ltb: LEADING   { $$ = 0; }
    | TRAILING      { $$ = 1; }
    | BOTH          { $$ = 2; }
    ;

expr: FDATE_ADD '(' expr ',' interval_exp ')'   { $$ = new Ast_Expr($3, $5, Ast_Expr::DATE_ADD); }
    | FDATE_SUB '(' expr ',' interval_exp ')'   { $$ = new Ast_Expr($3, $5, Ast_Expr::DATE_SUB); }
    ;

interval_exp: INTERVAL expr DAY_HOUR    { $$ = new Ast_IntervalExp($2, 1); }
    | INTERVAL expr DAY_MICROSECOND     { $$ = new Ast_IntervalExp($2, 2); }
    | INTERVAL expr DAY_MINUTE          { $$ = new Ast_IntervalExp($2, 3); }
    | INTERVAL expr DAY_SECOND          { $$ = new Ast_IntervalExp($2, 4); }
    | INTERVAL expr YEAR_MONTH          { $$ = new Ast_IntervalExp($2, 5); }
    | INTERVAL expr YEAR                { $$ = new Ast_IntervalExp($2, 6); }
    | INTERVAL expr HOUR_MICROSECOND    { $$ = new Ast_IntervalExp($2, 7); }
    | INTERVAL expr HOUR_MINUTE         { $$ = new Ast_IntervalExp($2, 8); }
    | INTERVAL expr HOUR_SECOND         { $$ = new Ast_IntervalExp($2, 9); }
    ;

expr: CASE expr case_list END           { $$ = new Ast_Expr($2, $3, Ast_Expr::CASE); }
    | CASE expr case_list ELSE expr END { $$ = new Ast_Expr($2, $5, $3, Ast_Expr::CASE2); }
    | CASE case_list END                { $$ = new Ast_Expr($2, Ast_Expr::CASE3); }
    | CASE case_list ELSE expr END      { $$ = new Ast_Expr($4, $2, Ast_Expr::CASE4); }
    ;

case_list: WHEN expr THEN expr { $$ = new Ast_CaseList($2, $4); }
    | case_list WHEN expr THEN expr { $1->addCase($3, $5); $$ = $1; }
    ;

expr: expr LIKE expr { $$ = new Ast_Expr($1, $3, Ast_Expr::LIKE); }
    | expr NOT LIKE expr { $$ = new Ast_Expr($1, $4, Ast_Expr::NOT_LIKE); }
    ;

expr: expr REGEXP expr { $$ = new Ast_Expr($1, $3, Ast_Expr::REGEXP); }
    | expr NOT REGEXP expr { $$ = new Ast_Expr($1, $4, Ast_Expr::NOT_REGEXP); }
    ;

expr: CURRENT_TIMESTAMP { $$ = new Ast_Expr(Ast_Expr::CURRENT_TIMESTAMP); }
    | CURRENT_DATE      { $$ = new Ast_Expr(Ast_Expr::CURRENT_DATE); }
    | CURRENT_TIME      { $$ = new Ast_Expr(Ast_Expr::CURRENT_TIME); }
    ;

expr: BINARY expr %prec UMINUS { $$ = new Ast_Expr($2, Ast_Expr::BINARY); }
    ;

    /* statements: select statement */
stmt: select_stmt { $$ = new Ast_Stmt($1); }
    ;

select_stmt: SELECT select_opts select_expr_list    { $$ = new Ast_SelectStmt($2, $3); }
    | SELECT select_opts select_expr_list FROM table_references 
        opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list 
        {  $$ = new Ast_SelectStmt($2, $3, $5, $6, %7, $8, $9, $10, $11); }
    ;

opt_where: /* nil */ { $$ = NULL; }
    | WHERE expr { $$ = new Ast_OptWhere($2); }
    ;

opt_groupby: /* nil */ { $$ = NULL; }
    | GROUP BY groupby_list opt_with_rollup { $$ = new Ast_OptGroupBy($3, $4); }
    ;

groupby_list: expr opt_asc_desc { $$ = new Ast_GroupByList($1, $2) }
    | groupby_list ',' expr opt_asc_desc { $1->AddGroupBy($3, $4); $$ = $1; }
    ;

opt_asc_desc: /* nil */ { $$ = 1; }
    | ASC               { $$ = 1; }
    | DESC              { $$ = 0; }
    ;

opt_with_rollup: /* nil */ { $$ = 0; }
    | WITH ROLLUP { $$ = 1; }
    ;

opt_having: /* nil */ { $$ = NULL; }
    | HAVING expr { $$ = new Ast_OptHaving($2); }
    ;

opt_orderby: /* nil */ { $$ = NULL; }
    | ORDER BY groupby_list { $$ = new Ast_OptOrderBy($3); }
    ;

opt_limit: /* nil */ { $$ = NULL; }
    | LIMIT expr   { $$ = new Ast_OptLimit($2); }
    | LIMIT expr ',' expr           { $$ = new Ast_OptLimit($2, $4); }
    ;

opt_into_list: /* nil */ { $$ = NULL; }
    | INTO column_list { $$ = Ast_OptLimit($2); }
    ;

column_list: NAME { $$ = Ast_ColumnList($1); }
    | column_list ',' NAME { $1->AddName($3); $$ = $1; }
    ;


select_opts: /* nil */  { $$ = 0; }
    | select_opts ALL   { if($1 & 01) yyerror("duplicate ALL option"); $$ = $1 | 01; }
    | select_opts DISTINCT  { if($1 & 02) yyerror("duplicate DISTINCT option"); $$ = $1 | 02; }
    | select_opts DISTINCTROW   { if($1 & 04) yyerror("duplicate DISTINCTROW option"); $$ = $1 | 04; }
    | select_opts HIGH_PRIORITY { if($1 & 010) yyerror("duplicate HIGH_PRIORITY option"); $$ = $1 | 010; }
    | select_opts STRAIGHT_JOIN { if($1 & 020) yyerror("duplicate STRAIGHT_JOIN option"); $$ = $1 | 020; }
    | select_opts SQL_SMALL_RESULT { if($1 & 040) yyerror("duplicate SQL_SMALL_RESULT option"); $$ = $1 | 040; }
    | select_opts SQL_BIG_RESULT { if($1 & 0100) yyerror("duplicate SQL_BIG_RESULT option"); $$ = $1 | 0100; }
    | select_opts SQL_CALC_FOUND_ROWS { if($1 & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); $$ = $1 | 0200; }
    ;

select_expr_list: select_expr { $$ = new Ast_SelectExprList($1); }
    | select_expr_list ',' select_expr { $1->addSelectExpr($3); $$ = $1; }
    | '*' { $$ = new Ast_SelectExprList(Ast_SelectExprList::SELECTALL); }
    ;

select_expr: expr opt_as_alias { $$ = new Ast_SelectExpr($1, $2); }
    ;

opt_as_alias: AS NAME   { $$ = $2; }
    | NAME              { $$ = $1; }
    | /* nil */         { $$ = NULL; }
    ;

table_references: table_reference { $$ = new Ast_TableReferences($1); }
    | table_references ',' table_reference { $1->addReference($3); $$ = $1; }
    ;

table_reference: table_factor { $$ = new Ast_TableReference($1); }
    | join_table { $$ = new Ast_TableReference($1); }
    ;

table_factor: NAME opt_as_alias index_hint  { $$ = new Ast_TableFactor($1, $2, $3); }
    | NAME '.' NAME opt_as_alias index_hint { $$ = new Ast_TableFactor($1, $3, $4, $5); }
    | table_subquery opt_as NAME { $$ = new Ast_TableFactor($1, $3); }
    | '(' table_references ')' { $$ = new Ast_TableFactor($2); }
    ;

opt_as: AS
    | /* nil */
    ;

join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition { $$ = new Ast_JoinTable($1, $2, $4, $5); }
    | table_reference STRAIGHT_JOIN table_factor { $$ = new Ast_JoinTable($1, $3); }
    | table_reference STRAIGHT_JOIN table_factor ON expr { $$ = new Ast_JoinTable($1, Ast_JoinTable::INNER, $3, $5); }
    | table_reference left_or_right opt_outer JOIN table_factor join_condition { $$ = new Ast_JoinTable($1, $2, $5, $6); }
    | table_reference NATURAL opt_left_or_right_outer JOIN table_factor { $$ = new Ast_JoinTable($1, $3, $5); }
    ;

opt_inner_cross: /* nil */ { $$ = Ast_JoinTable::INNER; }
    | INNER { $$ = Ast_JoinTable::INNER; }
    | CROSS { $$ = Ast_JoinTable::CROSS; }
    ;

opt_outer: /* nil */ { $$ = 0; }
    | OUTER { $$ = 0; }
    ;

left_or_right: LEFT { $$ = Ast_JoinTable::LEFT_OUTER; }
    | RIGHT { $$ = Ast_JoinTable::RIGHT_OUTER; }
    ;

opt_left_or_right_outer: LEFT opt_outer { $$ = Ast_JoinTable::LEFT_OUTER; }
    | RIGHT opt_outer { $$ = Ast_JoinTable::RIGHT_OUTER;; }
    | /* nil */ { $$ = Ast_JoinTable::INNER; }
    ;

opt_join_condition: /* nil */ { $$ = NULL; }
    | join_condition { $$ = $1; }
    ;

join_condition: ON expr { $$ = new Ast_JoinCondition($2); }
    | USING '(' column_list ')' { $$ = new Ast_JoinCondition($3); }
    ;

index_hint: USE KEY opt_for_join '(' index_list ')'     { $$ = new Ast_IndexHint(1, $3, $5); }
    | IGNORE KEY opt_for_join '(' index_list ')'        { $$ = new Ast_IndexHint(0, $3, $5); }
    | /* nil */ { $$ = NULL; }
    ;

opt_for_join: FOR JOIN { $$ = 1; }
    | /* nil */ { $$ = 0; }
    ;

index_list: NAME    { $$ = new Ast_IndexList($1); }
    | index_list ',' NAME { $1->addName($3); $$ = $1; }
    ;

table_subquery: '(' select_stmt ')' { $$ = new Ast_TableSubqeury($2); }
    ;


stmt: delete_stmt { $$ = new Ast_Stmt($1); }
    ;

delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit { $$ = new Ast_DeleteStmt($2, $4, $5, $6, $7); }
    ;

delete_opts: delete_opts LOW_PRIORITY { $$ = $1 + 01; }
    | delete_opts QUICK { $$ = $1 + 02; }
    | delete_opts IGNORE { $$ = $1 + 04; }
    | /* nil */ { $$ = 0; }
    ;

delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where { $$ = new Ast_DeleteStmt($2, $3, $5, $6); }
    ;

delete_list: NAME opt_dot_star { $$ = new Ast_DEleteList($1); }
    | delete_list ',' NAME opt_dot_star { $1->addName($3); $$ = $1; }
    ;

opt_dot_star: /* nil */
    | '.' '*'
    ;

delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where 
                { $$ = new Ast_DeleteStmt($2, $4, $6, $7); }
    ;

stmt: insert_stmt { $$ = new Ast_Stmt($1); }
    ;

insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate 
                { $$ = new Ast_InsertStmt($2, $4, $5, $7, $8); }
    ;

opt_ondupupdate: /* nil */ { $$ = NULL; }
    | ONDUPLICATE KEY UPDATE insert_asgn_list { $$ = new Ast_OptOnDupUpdate($4); }
    ;

insert_opts: /* nil */ { $$ = 0; }
    | insert_opts LOW_PRIORITY { $$ = $1 | 01; }
    | insert_opts DELAYED { $$ = $1 | 02; }
    | insert_opts HIGH_PRIORITY { $$ = $1 | 04; }
    | insert_opts IGNORE { $$ = $1 | 010; }
    ;

opt_into: INTO
    | /* nil */
    ;

opt_col_names: /* nil */ { $$ = NULL; }
    | '(' column_list ')' { $$ = new Ast_OptColNames($2); }
    ;

insert_vals_list: '(' insert_vals ')' { $$ = new Ast_InsertValList($2); }
    | insert_vals_list ',' '(' insert_vals ')' { $1->addInsertVals($4); $$ = $1; }
    ;

insert_vals: expr { $$ = new Ast_InsertVals($1); }
    | DEFAULT { $$ = new Ast_InsertVals(NULL); }
    | insert_vals ',' expr { $1->addInsertVals($3); $$ = $1;}
    | insert_vals ',' DEFAULT { $1->addInsertVals(NULL); $$ = $1; }
    ;

insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate {
                $$ = new Ast_InsertStmt($2, $4, $6, $7); }
    ;

insert_asgn_list: NAME COMPARISON expr { if($2 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; }
                    $$ = new Ast_InsertAsgnList($1, $3); }
    | NAME COMPARISON DEFAULT { if($2 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; }
                    $$ = new Ast_InsertAsgnList($1, NULL); }
    | insert_asgn_list ',' NAME COMPARISON expr { if($4 != 4) { yyerror("bad assignment to %s", $1); YYERROR; }
                    $1->AddInsertAsgn($3, $5); $$ = $1; }
    | insert_asgn_list ',' NAME COMPARISON DEFAULT { if($4 != 4) {yyerror("bad assignment to %s", $1); YYERROR; }
                    $1->AddInsertAsgn($3, NULL); $$ = $1; }
    ;


insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate 
                { $$ = new Ast_InsertStmt($2, $4, $5, $6, $7); }
    ;

stmt: replace_stmt { $$ = new Ast_Stmt($1); }
    ;

replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate
                { $$ = new Ast_ReplaceStmt($2, $4, $5, $7, $8); }
    ;

replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate
                { $$ = new Ast_ReplaceStmt($2, $4, $6, $7); }
    ;

replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate
                { $$ = new Ast_ReplaceStmt($2, $4, $5, $6, $7); }
    ;


stmt: update_stmt { $$ = new Ast_Stmt($1); }
    ;

update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit
                { emit("UPDATE %d %d %d", $2, $3, $5); }
    ;

update_opts: /* nil */ { $$ = 0; }
    | insert_opts LOW_PRIORITY { $$ = $1 | 01; }
    | insert_opts IGNORE { $$ = $1 | 010; }
    ;

update_asgn_list: NAME COMPARISON expr { if ($2 != 4) { yyerror("bad update assignment to %s", $1); YYERROR; }
                        $$ = new Ast_UpdateAsgnList($1, $3); }
    | NAME '.' NAME COMPARISON expr { if($4 != 4) {yyerror("bad update assignment to %s", $1); YYERROR; }
        $$ = new Ast_UpdateAsgnList($1, $3, $5); }
    | update_asgn_list ',' NAME COMPARISON expr { if($4 != 4) {yyerror("bad update assignment to %s", $3); YYERROR; }
        $1->addUpdateAsgn($3, $5); $$ = $1; }
    | update_asgn_list ',' NAME '.' NAME COMPARISON expr { if ($6 != 4) {yyerror("bad update assignment to %s.%s", $3, $5); YYERROR; }
        $1->addUpdateAsgn($3, $5, $7); $$ = $1; }
    ;

stmt: create_database_stmt { $$ = new Ast_Stmt($1) }
    ;

create_database_stmt: CREATE DATABASE opt_if_not_exists NAME { $$ = new Ast_CreateDatabaseStmt($3, $4); }
    | CREATE SCHEMA opt_if_not_exists NAME { e$$ = new Ast_CreateDatabaseStmt($3, $4); }
    ;

opt_if_not_exists: /* nil */ { $$ = 0; }
    | IF EXISTS { if (!$2) {yyerror("IF EXISTS doesn't exist"); YYERROR; } 
        $$ = $2; /* NOT EXISTS hack */ }
    ;

stmt: create_table_stmt { $$ = new Ast_Stmt($1); }
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' { 
        $$ = new Ast_CreateTableStmt($2, $4, $5, $7); }
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' {
        $$ = new Ast_CreateTableStmt($2, $4, $5, $7, $9); }
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement {
        $$ = new Ast_CreateTableStmt($2, $4, $5, $7, $9); }
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement {
        $$ = new Ast_CreateTableStmt($2, $4, $5, $6); }
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement {
        $$ = new Ast_CreateTableStmt($2, $4, $5, $7, $9, $11); }
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement {
        $$ = new Ast_CreateTableStmt($2, $4, $5, $7, $8); }
    ;

opt_temporary: /* nil */ { $$ = 0; }
    | TEMPORARY { $$ = 1; }
    ;

create_col_list: create_definition { $$ = new Ast_CreateColList($1); }
    | create_col_list ',' create_definition { $1->addCreateDefinition($3); $$ = $1; }
    ;

create_definition: PRIMARY KEY '(' column_list ')' { $$ = new Ast_CreateDefinition(Ast_CreateDefinition::PRIKEY_KEY, $4); }
    | KEY '(' column_list ')'               { $$ = new Ast_CreateDefinition(Ast_CreateDefinition::KEY, $3); }
    | FULLTEXT KEY '(' column_list ')'      { $$ = new Ast_CreateDefinition(Ast_CreateDefinition::FULLTEXT_KEY, $4); }
    ;

create_definition: 
    | NAME data_type column_atts { $$ = new Ast_CreateDefinition($1, $2, $3); }
    ;

column_atts: /* nil */ { $$ = new Ast_ColumnAttrs(); }
    | column_atts NOT NULLX { $1->addAttr(Ast_ColumnAttrs::NOT_NULL); $$ = $1; }
    | column_atts NULLX
    | column_atts DEFAULT STRING { $1->addAttr(Ast_ColumnAttrs::DEFAULT_STRING, $3); $$ = $1; }
    | column_atts DEFAULT INTNUM { $1->addAttr(Ast_ColumnAttrs::DEFAULT_INTNUM, $3); $$ = $1; }
    | column_atts DEFAULT APPROXNUM { $1->addAttr(Ast_ColumnAttrs::DEFAULT_APPROXNUM, $3); $$ = $1; }
    | column_atts DEFAULT BOOL { $1->addAttr(Ast_ColumnAttrs::DEFAULT_BOOL, $3); $$ = $1; }
    | column_atts AUTO_INCREMENT { $1->addAttr(Ast_ColumnAttrs::AUTO_INCREMENT); $$ = $1; }
    | column_atts UNIQUE '(' column_list ')' { $1->addAttr(Ast_ColumnList::UNIQUE, $4); $$ = $1; }
    | column_atts UNIQUE KEY { $1->addAttr(Ast_ColumnList::UNIQUE_KEY); $$ = $1; }
    | column_atts PRIMARY KEY { $1->addAttr(Ast_ColumnList::PRIMARY_KEY); $$ = $1; }
    | column_atts KEY { $1->addAttr(Ast_ColumnList::INDEX_KEY); $$ = $1; }
    | column_atts COMMENT STRING { $1->addAttr(Ast_ColumnList::COMMENT, $3); $$ = $1; }
    ;

opt_length: /* nil */ { $$ = 0; }
    | '(' INTNUM ')' { $$ = $2; }
    | '(' INTNUM ',' INTNUM ')' { $$ = $2 + 1000 * $4; }
    ;


opt_binary: /* nil */ { $$ = 0; }
    | BINARY { $$ = 1; }
    ;

opt_uz: /* nil */ { $$ = 0; }
    | opt_uz UNSIGNED { $$ = 1; }
    | opt_uz ZEROFILL { $$ = 2; }
    ;

opt_csc: /* nil */ { $$ = NULL; }
    | opt_csc CHAR SET STRING { $$ = new Ast_OptCSC(Ast_OptCSC::CHARSET, $4); }
    | opt_csc COLLATE STRING { $$ = new Ast_OptCSC(Ast_OptCSC::COLLATE, $3); }
    ;

data_type: BIT opt_length { $$ = new Ast_DataType(Ast_DataType::BIT, $2, false, false); }
    | TINYINT opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::TINYINT, $2, $3 == 1, $3 == 2); }
    | SAMLLINT opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::SAMLLINT, $2, $3 == 1, $3 == 2); }
    | MEDIUMINT opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::MEDIUMINT, $2, $3 == 1, $3 == 2); }
    | INTEGER opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::INTEGER, $2, $3 == 1, $3 == 2); }
    | BIGINT opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::BIGINT, $2, $3 == 1, $3 == 2); }
    | REAL opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::REAL, $2, $3 == 1, $3 == 2); }
    | DOUBLE opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::DOUBLE, $2, $3 == 1, $3 == 2); }
    | FLOAT opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::FLOAT, $2, $3 == 1, $3 == 2); }
    | DECIMAL opt_length opt_uz { $$ = new Ast_DataType(Ast_DataType::DECIMAL, $2, $3 == 1, $3 == 2); }
    | DATE { $$ = new Ast_DataType(Ast_DataType::DATE); }
    | TIME { $$ = new Ast_DataType(Ast_DataType::TIME); }
    | TIMESTAMP { $$ = new Ast_DataType(Ast_DataType::TIMESTAMP); }
    | DATETIME { $$ = new Ast_DataType(Ast_DataType::DATETIME); }
    | YEAR { $$ = new Ast_DataType(Ast_DataType::YEAR); }
    | CHAR opt_length opt_csc { $$ = new Ast_DataType(Ast_DataType::CHAR, $2, false, $3); }
    | VARCHAR '(' INTNUM ')' opt_csc { $$ = new Ast_DataType(Ast_DataType::VARCHAR, $3, false, $5); }
    | BINARY opt_length { $$ = new Ast_DataType(Ast_DataType::BINARY, $2, false, NULL); }
    | VARBINARY '(' INTNUM ')' { $$ = new Ast_DataType(Ast_DataType::VARBINARY, $3, false, NULL); }
    | TINYBLOB { $$ = new Ast_DataType(Ast_DataType::TINYBLOB); }
    | BLOB { $$ = new Ast_DataType(Ast_DataType::BLOB; }
    | MEDIUMBLOB { $$ = new Ast_DataType(Ast_DataType::MEDIUMBLOB); }
    | LONGBLOB { $$ = new Ast_DataType(Ast_DataType::LONGBLOB); }
    | TINYTEXT opt_binary opt_csc { $$ = new Ast_DataType(Ast_DataType::TINYTEXT, 1 << 8, $2, $3); }
    | TEXT opt_binary opt_csc { $$ = new Ast_DataType(Ast_DataType::TEXT, 1 << 16, $2, $3); }
    | MEDIUMTEXT opt_binary opt_csc { $$ = new Ast_DataType(Ast_DataType::MEDIUMTEXT, 1 << 28, $2, $3); }
    | LONGTEXT opt_binary opt_csc { $$ = new Ast_DataType(Ast_DataType::LONGTEXT, 1 << 28, $2, $3); }
    | ENUM '(' enum_list ')' opt_csc { $$ = new Ast_DataType(Ast_DataType::ENUM, $3, $5); }
    | SET '(' enum_list ')' opt_csc { $$ = new Ast_DataType(Ast_DataType::SET, $3, $5); }
    ;

enum_list: STRING { $$ = new Ast_EnumList($1); }
    | enum_list ',' STRING { $1->addEnum($3); $$ = $1; }
    ;

create_select_statement: opt_ignore_replace opt_as select_stmt { $$ = new Ast_CreateSelectStmt($1, $3); }
    ;

opt_ignore_replace: /* nil */ { $$ = 0; }
    | IGNORE { $$ = 1; }
    | REPLACE { $$ = 2; }
    ;

stmt: set_stmt { $$ = new Ast_Stmt($1); }
    ;

set_stmt: SET set_list { $$ = new Ast_SetStmt($2); }
    ;

set_list: set_expr { $$ = new Ast_SetList($1); }
    | set_list ',' set_expr { $1->addSetExpr($3), $$ = $1; }
    ;

set_expr: USERVAR COMPARISON expr { if($2 != 4) {yyerror("bad set to @%s", $1); YYERROR; } 
        $$ = new Ast_SetExpr($1, $3); }
    | USERVAR ASSIGN expr { $$ = new Ast_SetExpr($1, $3); }
    ;

%%

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