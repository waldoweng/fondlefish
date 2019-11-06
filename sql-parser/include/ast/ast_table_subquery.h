#ifndef FONDLE_FISH_MYSQL_AST_TABLE_SUBQUERY_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_TABLE_SUBQUERY_H_INCLUDED

#include <string>
#include <vector>
#include "ast_base.h"

class Ast_SelectStmt;

class Ast_TableSubqeury : public Ast_Base {
public:
    Ast_TableSubqeury(Ast_SelectStmt *select_stmt);
    ~Ast_TableSubqeury();

public:
    virtual void illustrate() const;

private:
};

#endif