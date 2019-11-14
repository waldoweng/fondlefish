#include "ast_join_condition.h"
#include "ast_expr.h"
#include "ast_column_list.h"

Ast_JoinCondition::Ast_JoinCondition(Ast_Expr *expr) 
    : expr(expr), column_list(NULL)
{
}

Ast_JoinCondition::Ast_JoinCondition(Ast_ColumnList *column_list)
    : expr(NULL), column_list(column_list)
{
}

Ast_JoinCondition::~Ast_JoinCondition() {
    if (expr) delete expr;
    if (column_list) delete column_list;
}

void Ast_JoinCondition::illustrate() {
    this->putLine("JOIN ON");
    this->incLevel();
    if (expr) this->expr->illustrate();
    if (column_list) this->column_list->illustrate();
    this->decLevel();
}