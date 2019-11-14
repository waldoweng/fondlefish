#ifndef FONDLE_FISH_MYSQL_AST_SELECT_EXPR_LIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_SELECT_EXPR_LIST_H_INCLUDED

#include <string>
#include <vector>
#include "ast_base.h"

class Ast_Expr;

class Ast_SelectExpr : public Ast_Base {
public:
    explicit Ast_SelectExpr(Ast_Expr *expr, const char *alias);
    virtual ~Ast_SelectExpr();

public:
    virtual void illustrate();

private:
    Ast_Expr *expr;
    std::string alias;
};

class Ast_SelectExprList : public Ast_Base{
public:
    const static int SELECTALL = 0;

public:
    explicit Ast_SelectExprList();
    explicit Ast_SelectExprList(Ast_SelectExpr *expr);
    virtual ~Ast_SelectExprList();

public:
    virtual void illustrate();

public:
    void addSelectExpr(Ast_SelectExpr *expr);

private:
    std::vector<Ast_SelectExpr *> exprs;
};

#endif