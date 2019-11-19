#include "ast_select_expr_list.h"
#include "ast_expr.h"

Ast_SelectExpr::Ast_SelectExpr(Ast_Expr *expr, const char *alias) 
    : expr(expr), alias(alias ? alias : "")
{
}

Ast_SelectExpr::~Ast_SelectExpr() {
    if (expr) delete expr;
}

void Ast_SelectExpr::illustrate() {
    if(alias.empty())
        this->putLine("SELECT");
    else
        this->putLine("SELECT AS %s", alias.c_str());

    this->incLevel();
    this->expr->illustrate();
    this->decLevel();
}

Ast_SelectExprList::Ast_SelectExprList()
{
    exprs.push_back(nullptr);
}

Ast_SelectExprList::Ast_SelectExprList(Ast_SelectExpr *expr) {
    exprs.push_back(expr);
}

Ast_SelectExprList::~Ast_SelectExprList() {
    for (std::vector<Ast_SelectExpr *>::iterator it = exprs.begin();
        it != exprs.end();
        it ++)
    {
        if (*it) delete *it;
    }
}

void Ast_SelectExprList::addSelectExpr(Ast_SelectExpr *expr) {
    exprs.push_back(expr);
}

void Ast_SelectExprList::illustrate() {
    for (std::vector<Ast_SelectExpr *>::iterator it = exprs.begin();
        it != exprs.end();
        it ++)
    {
        if (*it)
            (*it)->illustrate();
        else
            this->putLine("SELECT ALL");
    }
}