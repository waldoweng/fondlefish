#ifndef FONDLE_FISH_MYSQL_AST_VALLIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_VALLIST_H_INCLUDED

#include <vector>
#include "ast_base.h"

class Ast_Expr;

class Ast_ValList : public Ast_Base {
public:
    explicit Ast_ValList(Ast_Expr *expr);
    virtual ~Ast_ValList();

public:
    virtual void illustrate();

public:
    void addExpr(Ast_Expr *expr);

private:
    std::vector<Ast_Expr *> exprs;
};

#endif