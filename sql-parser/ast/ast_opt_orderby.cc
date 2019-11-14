#include "ast_opt_orderby.h"
#include "ast_groupby_list.h"

Ast_OptOrderBy::Ast_OptOrderBy(Ast_GroupByList *orderby_list) 
    : orderby_list(orderby_list)
{
}

Ast_OptOrderBy::~Ast_OptOrderBy() {
    if (orderby_list) delete orderby_list;
}

void Ast_OptOrderBy::illustrate() {
    if (orderby_list) {
        this->putLine("ORDER BY");
        this->incLevel();
        this->orderby_list->illustrate();
        this->decLevel();
    }
}