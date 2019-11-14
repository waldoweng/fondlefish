#ifndef FONDLE_FISH_MYSQL_AST_TABLE_SUBQUERY_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_TABLE_SUBQUERY_H_INCLUDED

#include <string>
#include <vector>
#include "ast_base.h"

class Ast_SelectStmt;

class Ast_TableSubquery : public Ast_Base {
public:
    explicit Ast_TableSubquery(Ast_SelectStmt *select_stmt);
    virtual ~Ast_TableSubquery();

public:
    virtual void illustrate();

private:
    Ast_SelectStmt *select_stmt;
};

#endif