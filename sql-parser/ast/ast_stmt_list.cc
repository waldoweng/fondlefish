#include "include/ast/ast_stmt_list.h"
#include "include/ast/ast_stmt.h"

Ast_StmtList::Ast_StmtList(Ast_Stmt *stmt) {
    this->stmt = stmt;
}

Ast_StmtList::Ast_StmtList(Ast_StmtList *stmt_list, Ast_Stmt *stmt) {
    this->stmt_list = stmt_list;
    this->stmt = stmt;
}

Ast_StmtList::~Ast_StmtList() {
    if (this->stmt_list)
        delete this->stmt_list;
    if (this->stmt)
        delete this->stmt;
}

void Ast_StmtList::illustrate() const {
    if (this->stmt_list)
        this->stmt_list->illustrate();
    if (this->stmt)
        this->stmt->illustrate();
}