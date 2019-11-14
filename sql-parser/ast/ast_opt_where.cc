#include "ast_opt_where.h"
#include "ast_expr.h"

Ast_OptWhere::Ast_OptWhere(Ast_Expr *expr)
    : expr(expr)
{
}

Ast_OptWhere::~Ast_OptWhere() 
{
    if (expr) delete expr;
}

void Ast_OptWhere::illustrate() {
    if (expr) {
        this->putLine("WHERE");
        this->incLevel();
        this->expr->illustrate();
        this->decLevel();
    }    
}