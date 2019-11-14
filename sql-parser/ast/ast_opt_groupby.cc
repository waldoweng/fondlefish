#include "ast_opt_groupby.h"
#include "ast_groupby_list.h"

Ast_OptGroupBy::Ast_OptGroupBy(Ast_GroupByList *groupby_list, bool opt_with_rollup) 
    : groupby_list(groupby_list), opt_with_rollup(opt_with_rollup)
{
}

Ast_OptGroupBy::~Ast_OptGroupBy() {
    if (groupby_list) delete groupby_list;
}

void Ast_OptGroupBy::illustrate() {
    this->putLine("OPT GROUP BY %s", this->opt_with_rollup ? "WITH ROLLUP" : "");
    this->incLevel();
    if (groupby_list) this->groupby_list->illustrate();
    this->decLevel();
}