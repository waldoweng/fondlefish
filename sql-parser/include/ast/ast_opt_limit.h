#ifndef FONDLE_FISH_MYSQL_AST_OPT_LIMIT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_LIMIT_H_INCLUDED

#include "ast_base.h"

class Ast_Expr;

class Ast_OptLimit : public Ast_Base{
public:
    explicit Ast_OptLimit(Ast_Expr *limit);
    explicit Ast_OptLimit(Ast_Expr *offset, Ast_Expr *limit);
    virtual ~Ast_OptLimit();

public:
    virtual void illustrate();

private:
    Ast_Expr *offset;
    Ast_Expr *limit;
};

#endif