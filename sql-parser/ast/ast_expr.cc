#include "ast_expr.h"

Ast_Expr::Ast_Expr(const char *strval, int type) {
    this->type = type;
    this->strval = strval;
}

Ast_Expr::Ast_Expr(const char *strval1, const char *strval2, int type) {
    this->type = type;
    this->strval1 = strval1;
    this->strval2 = strval2;
}

Ast_Expr::Ast_Expr(int intval, int type) {
    this->type = type;
    this->intval = intval;
}

Ast_Expr::Ast_Expr(double floatval, int type) {
    this->type = type;
    this->floatval = floatval;
}

Ast_Expr::Ast_Expr(int type) {
    this->type = type;
}

