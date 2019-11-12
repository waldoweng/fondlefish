#ifndef FONDLE_FISH_MYSQL_AST_OPT_WHERE_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_WHERE_H_INCLUDED

#include "ast_base.h"

class Ast_Expr;

class Ast_OptWhere : public Ast_Base {
public:
    explicit Ast_OptWhere(Ast_Expr *expr);
    virtual ~Ast_OptWhere();

public:
    virtual void illustrate();

private:
    Ast_Expr *expr;
};

#endif
