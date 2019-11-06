#ifndef FONDLE_FISH_MYSQL_AST_OPT_HAVING_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_HAVING_H_INCLUDED

#include "ast_base.h"

class Ast_Expr;

class Ast_OptHaving : public Ast_Base {
public:
    Ast_OptHaving(Ast_Expr *expr);
    ~Ast_OptHaving();

public:
    virtual void illustrate() const;

private:
    Ast_Expr *expr;
};

#endif