#ifndef FONDLE_FISH_AST_EXPR_H_INCLUDE
#define FONDLE_FISH_AST_EXPR_H_INCLUDE

#include "ast_base.h"

class Ast_SelectStmt;
class Ast_ValList;
class Ast_IntervalExp;
class Ast_CaseList;

class Ast_Expr : public Ast_Base
{
public:
    enum ast_expr_type {
        EXPR_NAME = 0,
        EXPR_NAME2 = 1,
        EXPR_USERVAR = 2,
        EXPR_STRING = 3,
        EXPR_INTNUM = 4,
        EXPR_APPROXNUM = 5,
        EXPR_BOOL = 6,

        EXPR_ADD = 10,
        EXPR_MINUS = 11,
        EXPR_MUL = 12,
        EXPR_DIV = 13,
        EXPR_MOD = 14,
        EXPR_NEG = 15,
        EXPR_AND = 16,
        EXPR_OR = 17,
        EXPR_XOR = 18,
        EXPR_BITOR = 19,
        EXPR_BITAND = 20,
        EXPR_BITXOR = 21,
        EXPR_LEFT_SHIFT = 22,
        EXPR_RIGHT_SHIFT = 23,
        EXPR_NOT = 24,

        EXPR_CMP_BASE = 30,

        EXPR_IS_NULL = 200,
        EXPR_IS_NOT_NULL = 201,
        EXPR_IS_BOOL = 202,
        EXPR_IS_NOT_BOOL = 203,
        EXPR_ASSIGN = 204,

        EXPR_BETWEEN = 300,
        
        EXPR_IS_IN = 400,
        EXPR_IS_NOT_IN = 401,
        EXPR_EXISTS = 402,
        EXPR_NOT_EXISTS = 403,

        EXPR_CALL = 500,

        EXPR_COUNTALL = 600,
        EXPR_COUNT = 601,

        EXPR_SUBSTR = 700,
        EXPR_SUBSTR_FROM = 701,
        EXPR_SUBSTR_FROM_FOR = 702,
        EXPR_TRIM = 703,

        EXPR_TRIM_FROM = 710,
        EXPR_TRIM_FROM_LEADING = 711,
        EXPR_TRIM_FROM_TRAILING = 712,
        EXPR_TRIM_FROM_BOTH = 713,

        EXPR_DATE_ADD = 800,
        EXPR_DATE_SUB = 801,

        EXPR_CASE = 900,
        EXPR_CASE2 = 901,
        EXPR_CASE3 = 902,
        EXPR_CASE4 = 903,

        EXPR_LIKE = 1000,
        EXPR_NOT_LIKE = 1001,

        EXPR_REGEXP = 1100,
        EXPR_NOT_REGEXP = 1101,

        EXPR_CURRENT_TIMESTAMP = 1200,
        EXPR_CURRENT_DATE = 1201,
        EXPR_CURRENT_TIME = 1202,

        EXPR_BINARY = 1300
    };

public:
    explicit Ast_Expr(const char *strval, int type);
    explicit Ast_Expr(const char *strval1, const char *strval2, int type);
    explicit Ast_Expr(int intval, int type);
    explicit Ast_Expr(double floatval, int type);
    explicit Ast_Expr(int type);

    explicit Ast_Expr(Ast_Expr *expr, int type);
    explicit Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, int type);
    explicit Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, Ast_Expr *expr3, int type);

    explicit Ast_Expr(Ast_ValList *val_list, int type);
    explicit Ast_Expr(Ast_Expr *expr, int boolval, int type);
    explicit Ast_Expr(const char *strval, Ast_Expr *expr, int type);
    explicit Ast_Expr(Ast_Expr *expr, Ast_ValList *val_list, int type);

    explicit Ast_Expr(Ast_SelectStmt *stmt, int type);
    explicit Ast_Expr(Ast_Expr *expr, Ast_SelectStmt *stmt, int type);

    explicit Ast_Expr(const char *strval, Ast_ValList *val_list, int type);
    explicit Ast_Expr(Ast_Expr *expr, Ast_IntervalExp *interval_expr, int type);
    explicit Ast_Expr(Ast_CaseList *case_list, int type);
    explicit Ast_Expr(Ast_Expr *expr, Ast_CaseList *case_list, int type);
    explicit Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, Ast_CaseList *case_list, int type);

    virtual ~Ast_Expr();
    
public:
    virtual void eval() const;
    virtual void illustrate() const;

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
    const Ast_IntervalExp *interval_expr;
    const Ast_CaseList *case_list;
};

#endif