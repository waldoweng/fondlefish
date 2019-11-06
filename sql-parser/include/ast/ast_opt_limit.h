#ifndef FONDLE_FISH_MYSQL_AST_OPT_LIMIT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_LIMIT_H_INCLUDED

#include "ast_base.h"

class Ast_Expr;

class Ast_OptLimit : public Ast_Base{
public:
    Ast_OptLimit(Ast_Expr *expr);
    Ast_OptLimit(Ast_Expr *expr1, Ast_Expr *expr2);
    ~Ast_OptLimit();

public:
    virtual void illustrate() const;

private:
    Ast_Expr *expr1;
    Ast_Expr *expr2;
};

#endif