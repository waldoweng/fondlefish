#ifndef FONDLE_FISH_MYSQL_AST_VALLIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_VALLIST_H_INCLUDED

#include "ast_base.h"

class Ast_Expr;

class Ast_ValList : public Ast_Base {
public:
    explicit Ast_ValList(Ast_Expr *expr);
    explicit Ast_ValList(Ast_Expr *expr, Ast_ValList *val_list);
    virtual ~Ast_ValList();

public:
    virtual void illustrate();

private:
};

#endif