#include "ast_opt_col_names.h"
#include "ast_column_list.h"

Ast_OptColNames::Ast_OptColNames(Ast_ColumnList *column_list)
    : column_list(column_list)
{
}

Ast_OptColNames::~Ast_OptColNames() {
    if (column_list) delete column_list;
}

void Ast_OptColNames::illustrate() {
    if (column_list)
        column_list->illustrate();
}