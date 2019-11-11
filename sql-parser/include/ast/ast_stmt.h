#ifndef FONDLE_FISH_MYSQL_AST_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_STMT_H_INCLUDED

#include "ast_base.h"

class Ast_SelectStmt;
class Ast_DeleteStmt;
class Ast_InsertStmt;
class Ast_ReplaceStmt;
class Ast_UpdateStmt;
class Ast_CreateDatabaseStmt;
class Ast_CreateTableStmt;
class Ast_SetStmt;

class Ast_Stmt : public Ast_Base {
public:
    const static unsigned char SELECT_STMT = 0;
    const static unsigned char UPDATE_STMT = 1;
    const static unsigned char DELETE_STMT = 2;
    const static unsigned char INSERT_STMT = 3;
    const static unsigned char CREATE_DATABASE_STMT = 4;
    const static unsigned char CREATE_TABLE_STMT = 5;
    const static unsigned char SET_STMT = 6;

public:
    explicit Ast_Stmt(Ast_SelectStmt *stmt);
    explicit Ast_Stmt(Ast_UpdateStmt *stmt);
    explicit Ast_Stmt(Ast_DeleteStmt *stmt);
    explicit Ast_Stmt(Ast_InsertStmt *stmt);
    explicit Ast_Stmt(Ast_ReplaceStmt *stmt);
    explicit Ast_Stmt(Ast_CreateDatabaseStmt *stmt);
    explicit Ast_Stmt(Ast_CreateTableStmt *stmt);
    explicit Ast_Stmt(Ast_SetStmt *stmt);
    virtual ~Ast_Stmt();

public:
    virtual void illustrate() const;

private:
    int m_stmt_type;
    union _stmt
    {
        Ast_SelectStmt *select_stmt;
        Ast_UpdateStmt *update_stmt;
        Ast_DeleteStmt *delete_stmt;
        Ast_InsertStmt *insert_stmt;
        Ast_CreateDatabaseStmt *create_database_stmt;
        Ast_CreateTableStmt *create_table_stmt;
        Ast_SetStmt *set_stmt;
    } m_stmt;
};

#endif