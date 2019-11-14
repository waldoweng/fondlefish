#include "ast_val_list.h"
#include "ast_expr.h"

Ast_ValList::Ast_ValList(Ast_Expr *expr) {
    this->exprs.push_back(expr);
}

Ast_ValList::~Ast_ValList() {
    for (std::vector<Ast_Expr *>::iterator it = this->exprs.begin();
        it != this->exprs.end();
        ++ it)
    {
        if (*it) delete (*it);
    }
}

void Ast_ValList::addExpr(Ast_Expr *expr) {
    this->exprs.push_back(expr);
}

void Ast_ValList::illustrate() {
    for (std::vector<Ast_Expr *>::iterator it = this->exprs.begin();
        it != this->exprs.end();
        ++ it)
    {
        if (*it) (*it)->illustrate();
    }
}