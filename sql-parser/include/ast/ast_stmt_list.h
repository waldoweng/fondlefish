#ifndef FONDLE_FISH_MYSQL_AST_STMT_LIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_STMT_LIST_H_INCLUDED

#include <vector>
#include "ast_base.h"

class Ast_Stmt;

class Ast_StmtList : public Ast_Base {
public:
    explicit Ast_StmtList(Ast_Stmt *stmt);
    virtual ~Ast_StmtList();

public:
    virtual void illustrate();

public:
    void addStmt(Ast_Stmt *stmt);

private:
    std::vector<Ast_Stmt *> stmt_list;
};


#endif
