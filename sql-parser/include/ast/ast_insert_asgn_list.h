#ifndef FONDLE_FISH_MYSQL_AST_INSERT_ASSIGN_LIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_INSERT_ASSIGN_LIST_H_INCLUDED

#include <vector>
#include <string>
#include "ast_base.h"

class Ast_Expr;

class Ast_InsertAsgnList : public Ast_Base {
public:
    Ast_InsertAsgnList(std::string name, Ast_Expr *expr);
    virtual ~Ast_InsertAsgnList();

public:
    virtual void illustrate() const;

public:
    void AddInsertAsgn(std::string name, Ast_Expr *expr);

private:
};

#endif