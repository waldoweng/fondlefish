#include "ast_stmt_list.h"
#include "ast_stmt.h"

Ast_StmtList::Ast_StmtList(Ast_Stmt *stmt) {
    this->stmt_list.push_back(stmt);
}

Ast_StmtList::~Ast_StmtList() {
    for (std::vector<Ast_Stmt *>::iterator it = this->stmt_list.begin();
        it != this->stmt_list.end();
        it ++)
    {
        if (*it)
            delete (*it);
    }
}

void Ast_StmtList::addStmt(Ast_Stmt *stmt) {
    this->stmt_list.push_back(stmt);
}

void Ast_StmtList::illustrate() {
    for (std::vector<Ast_Stmt *>::iterator it = this->stmt_list.begin();
        it != this->stmt_list.end();
        it ++)
    {
        if (*it)
            (*it)->illustrate();
    }
}