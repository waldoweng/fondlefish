#include "ast_set_stmt.h"
#include "ast_expr.h"

Ast_SetExpr::Ast_SetExpr(const char *uservar, Ast_Expr *expr) 
    : uservar(uservar), expr(expr)
{
}

Ast_SetExpr::~Ast_SetExpr() {
    if (expr) delete expr;
}

void Ast_SetExpr::illustrate() {
    this->putLine("SET");
    this->incLevel();
    this->expr->illustrate();
    this->decLevel();
}

Ast_SetList::Ast_SetList(Ast_SetExpr *expr) {
    exprs.push_back(expr);
}

Ast_SetList::~Ast_SetList() {
    for (std::vector<Ast_SetExpr *>::iterator it = exprs.begin();
        it != exprs.end();
        it ++)
    {
        if (*it)
            delete (*it);
    }
}

void Ast_SetList::addSetExpr(Ast_SetExpr *expr) {
    exprs.push_back(expr);
}

void Ast_SetList::illustrate() {
    for (std::vector<Ast_SetExpr *>::iterator it = exprs.begin();
        it != exprs.end();
        it ++)
    {
        if (*it)
            (*it)->illustrate();
    }
}

Ast_SetStmt::Ast_SetStmt(Ast_SetList *set_list) 
    : set_list(set_list)
{
}

Ast_SetStmt::~Ast_SetStmt() {
    if (set_list)
        delete set_list;
}

void Ast_SetStmt::illustrate() {
    this->putLine("SET STMT");
    this->incLevel();
    this->set_list->illustrate();
    this->decLevel();
}


