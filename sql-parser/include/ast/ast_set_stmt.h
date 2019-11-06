#ifndef FONDLE_FISH_MYSQL_AST_SET_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_SET_STMT_H_INCLUDED

#include <cstdint>
#include <string>
#include "ast_base.h"

class Ast_Expr;

class Ast_SetExpr : public Ast_Base {
public:
    Ast_SetExpr(std::string uservar, Ast_Expr *expr);
    virtual ~Ast_SetExpr();

public:
    virtual void illustrate() const;

private:
};

class Ast_SetList : public Ast_Base {
public:
    Ast_SetList(Ast_SetExpr *set_expr);
    virtual ~Ast_SetList();

public:
    virtual void illustrate() const;

public:
    void addSetExpr(Ast_SetExpr *set_expr);

private:
};

class Ast_SetStmt : public Ast_Base {
public:
    Ast_SetStmt(Ast_SetList *set_list);
    virtual ~Ast_SetStmt();

public:
    virtual void illustrate() const;

private:
};

#endif