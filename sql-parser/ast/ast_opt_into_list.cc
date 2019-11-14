#include "ast_opt_into_list.h"
#include "ast_column_list.h"

Ast_OptIntoList::Ast_OptIntoList(Ast_ColumnList *column_list) 
    : column_list(column_list)
{
}

Ast_OptIntoList::~Ast_OptIntoList() {
    if (column_list) delete column_list;
}

void Ast_OptIntoList::illustrate() {
    this->column_list->illustrate();
}