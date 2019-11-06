#ifndef FONDLE_FISH_MYSQL_AST_STMT_LIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_STMT_LIST_H_INCLUDED

#include "ast_base.h"

class Ast_Stmt;

class Ast_StmtList : public Ast_Base {
public:
    Ast_StmtList(Ast_Stmt *stmt);
    Ast_StmtList(Ast_StmtList *stmt_list, Ast_Stmt *stmt);
    ~Ast_StmtList();

public:
    virtual void illustrate() const;

private:
    Ast_StmtList *stmt_list;
    Ast_Stmt *stmt;
};


#endif
