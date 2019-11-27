#include "ast_stmt_list.h"
#include "ast_select_stmt.h"
#include "ast_update_stmt.h"
#include "ast_delete_stmt.h"
#include "ast_insert_stmt.h"
#include "ast_replace_stmt.h"
#include "ast_create_database_stmt.h"
#include "ast_create_table_stmt.h"
#include "ast_set_stmt.h"

Ast_Stmt::Ast_Stmt(Ast_SelectStmt *stmt) {
    this->m_stmt.select_stmt = stmt;
    this->m_stmt_type = Ast_Stmt::SELECT_STMT;
}

Ast_Stmt::Ast_Stmt(Ast_UpdateStmt *stmt) {
    this->m_stmt.update_stmt = stmt;
    this->m_stmt_type = Ast_Stmt::UPDATE_STMT;
}

Ast_Stmt::Ast_Stmt(Ast_DeleteStmt *stmt) {
    this->m_stmt.delete_stmt = stmt;
    this->m_stmt_type = Ast_Stmt::DELETE_STMT;
}

Ast_Stmt::Ast_Stmt(Ast_InsertStmt *stmt) {
    this->m_stmt.insert_stmt = stmt;
    this->m_stmt_type = Ast_Stmt::INSERT_STMT;
}

Ast_Stmt::Ast_Stmt(Ast_ReplaceStmt *stmt) 
    : m_stmt_type(Ast_Stmt::REPLACE_STMT)
{
    this->m_stmt.replace_stmt = stmt;
}

Ast_Stmt::Ast_Stmt(Ast_CreateDatabaseStmt *stmt) {
    this->m_stmt.create_database_stmt = stmt;
    this->m_stmt_type = Ast_Stmt::CREATE_DATABASE_STMT;
}

Ast_Stmt::Ast_Stmt(Ast_CreateTableStmt *stmt) {
    this->m_stmt.create_table_stmt = stmt;
    this->m_stmt_type = Ast_Stmt::CREATE_TABLE_STMT;
}

Ast_Stmt::Ast_Stmt(Ast_SetStmt *stmt) {
    this->m_stmt.set_stmt = stmt;
    this->m_stmt_type = Ast_Stmt::SET_STMT;
}

Ast_Stmt::~Ast_Stmt() {
    switch (this->m_stmt_type)
    {
        case Ast_Stmt::SELECT_STMT:
            delete this->m_stmt.select_stmt;
            break;
        case Ast_Stmt::UPDATE_STMT:
            delete this->m_stmt.update_stmt;
            break;
        case Ast_Stmt::DELETE_STMT:
            delete this->m_stmt.delete_stmt;
            break;
        case Ast_Stmt::INSERT_STMT:
            delete this->m_stmt.insert_stmt;
            break;
        case Ast_Stmt::REPLACE_STMT:
            delete this->m_stmt.replace_stmt;
            break;
        case Ast_Stmt::CREATE_DATABASE_STMT:
            delete this->m_stmt.create_database_stmt;
            break;
        case Ast_Stmt::CREATE_TABLE_STMT:
            delete this->m_stmt.create_table_stmt;
            break;
        case Ast_Stmt::SET_STMT:
            delete this->m_stmt.set_stmt;
            break;
        default:
            break;
    }
}

void Ast_Stmt::illustrate() {
}
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
