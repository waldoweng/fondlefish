#ifndef FONDLE_FISH_AST_EXPR_H_INCLUDE
#define FONDLE_FISH_AST_EXPR_H_INCLUDE

#include "ast_base.h"

class Ast_ValList;
class Ast_SelectStmt;
class Ast_OptValList;
class Ast_IntervalExp;
class Ast_CaseList;

class Ast_Expr : public Ast_Base
{
public:
    const static int NAME = 0;
    const static int NAME2 = 1;
    const static int USERVAR = 2;
    const static int STRING = 3;
    const static int INTNUM = 4;
    const static int APPROXNUM = 5;
    const static int BOOL = 6;

    const static int ADD = 10;
    const static int MINUS = 11;
    const static int MUL = 12;
    const static int DIV = 13;
    const static int MOD = 14;
    const static int NEG = 15;
    const static int AND = 16;
    const static int OR = 17;
    const static int XOR = 18;
    const static int BITOR = 19;
    const static int BITAND = 20;
    const static int BITXOR = 21;
    const static int LEFT_SHIFT = 22;
    const static int RIGHT_SHIFT = 23;
    const static int NOT = 24;

    const static int CMP_BASE = 30;

    const static int IS_NULL = 200;
    const static int IS_NOT_NULL = 201;
    const static int IS_BOOL = 202;
    const static int IS_NOT_BOOL = 203;
    const static int ASSIGN = 204;

    const static int BETWEEN = 300;
    
    const static int IS_IN = 400;
    const static int IS_NOT_IN = 401;
    const static int EXISTS = 402;
    const static int NOT_EXISTS = 403;

    const static int CALL = 500;

    const static int COUNTALL = 600;
    const static int COUNT = 601;

    const static int SUBSTR = 700;
    const static int SUBSTR_FROM = 701;
    const static int SUBSTR_FROM_FOR = 702;
    const static int TRIM = 703;
    const static int TRIM_FROM_LEADING = 704;
    const static int TRIM_FROM_TRAILING = 705;
    const static int TRIM_FROM_BOTH = 706;

    const static int DATE_ADD = 800;
    const static int DATE_SUB = 801;

    const static int CASE = 900;
    const static int CASE2 = 901;
    const static int CASE3 = 902;
    const static int CASE4 = 903;

    const static int LIKE = 1000;
    const static int NOT_LIKE = 1001;

    const static int REGEXP = 1100;
    const static int NOT_REGEXP = 1101;

    const static int CURRENT_TIMESTAMP = 1200;
    const static int CURRENT_DATE = 1201;
    const static int CURRENT_TIME = 1202;

    const static int BINARY = 1300;

public:
    Ast_Expr(const char *strval, int type);
    Ast_Expr(const char *strval1, const char *strval2, int type);
    Ast_Expr(int intval, int type);
    Ast_Expr(double floatval, int type);
    Ast_Expr(int type);

    Ast_Expr(Ast_Expr *expr, int type);
    Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, int type);
    Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, Ast_Expr *expr3, int type);

    Ast_Expr(Ast_ValList *val_list);
    Ast_Expr(Ast_Expr *expr, int boolval, int type);
    Ast_Expr(const char *strval, Ast_Expr *expr, int type);
    Ast_Expr(Ast_Expr *expr, Ast_ValList *val_list, int type);

    Ast_Expr(Ast_SelectStmt *stmt, int type);
    Ast_Expr(Ast_Expr *expr, Ast_SelectStmt *stmt, int type);

    Ast_Expr(const char *strval, Ast_OptValList *opt_val_list, int type);
    Ast_Expr(Ast_Expr *expr, Ast_ValList *val_list, int type);
    Ast_Expr(Ast_Expr *expr, Ast_IntervalExp *interval_expr, int type);
    Ast_Expr(Ast_CaseList *case_list, int type);
    Ast_Expr(Ast_Expr *expr, Ast_CaseList *case_list, int type);
    Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, Ast_CaseList *case_list, int type);

public:
    void Eval();

private:
    int type;
    
    const char *strval;
    const char *strval1;
    const char *strval2;
    int intval;
    double floatval;
    int boolval;

    const Ast_Expr *expr;
    const Ast_Expr *expr1;
    const Ast_Expr *expr2;
    const Ast_Expr *expr3;

    const Ast_ValList *val_list;
    const Ast_SelectStmt *select_stmt;
    const Ast_OptValList *opt_val_list;
    const Ast_IntervalExp *interval_expr;
    const Ast_CaseList *case_list;
};

#endif