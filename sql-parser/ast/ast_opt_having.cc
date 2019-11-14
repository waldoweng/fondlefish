#include "ast_opt_having.h"
#include "ast_expr.h"

Ast_OptHaving::Ast_OptHaving(Ast_Expr *expr) 
    : expr(expr)
{
}

Ast_OptHaving::~Ast_OptHaving() {
    if (expr) delete expr;
}

void Ast_OptHaving::illustrate() {
    if (expr) {
        this->putLine("HAVING");
        this->incLevel();
        this->expr->illustrate();
        this->decLevel();
    }
}