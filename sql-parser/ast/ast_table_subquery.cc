#include "ast_table_subquery.h"
#include "ast_select_stmt.h"

Ast_TableSubquery::Ast_TableSubquery(Ast_SelectStmt *select_stmt)
    : select_stmt(select_stmt)
{
}

Ast_TableSubquery::~Ast_TableSubquery()
{
    if (select_stmt) delete select_stmt;
}

void Ast_TableSubquery::illustrate() {
    this->putLine("SUBQUERY");
    this->incLevel();
    this->select_stmt->illustrate();
    this->decLevel();
}