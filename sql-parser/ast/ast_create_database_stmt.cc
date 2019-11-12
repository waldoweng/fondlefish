#include <cstdio>
#include "ast_create_database_stmt.h"

Ast_CreateDatabaseStmt::Ast_CreateDatabaseStmt(bool opt_if_not_exists, const char *name) 
    : opt_if_not_exists(opt_if_not_exists), name(name) {}

Ast_CreateDatabaseStmt::~Ast_CreateDatabaseStmt() {}

void Ast_CreateDatabaseStmt::illustrate() {
    if (opt_if_not_exists)
        printf("Create If Not Exists Database %s;\n", name.c_str());
    else
        printf("Create Database %s;\n", name.c_str());
}