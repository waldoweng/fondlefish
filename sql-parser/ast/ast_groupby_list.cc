#include "ast_groupby_list.h"
#include "ast_expr.h"

Ast_GroupByList::GroupByItem::GroupByItem(Ast_Expr *expr, bool asc) 
    : expr(expr), asc(asc)
{
}

Ast_GroupByList::GroupByItem::~GroupByItem() {
    if (expr) delete expr;
}

Ast_GroupByList::Ast_GroupByList(Ast_Expr *expr, bool asc) {
    groupby_list.push_back(Ast_GroupByList::GroupByItem(expr, asc));
}

Ast_GroupByList::~Ast_GroupByList() {}

void Ast_GroupByList::addGroupBy(Ast_Expr *expr, bool asc) {
    groupby_list.push_back(Ast_GroupByList::GroupByItem(expr, asc));
}

void Ast_GroupByList::illustrate() {
    for (std::vector<Ast_GroupByList::GroupByItem>::iterator it = groupby_list.begin();
        it != groupby_list.end();
        ++it
    ) {
        this->putLine("GROUP BY ORDER:%s", it->asc ? "ASC" : "DESC");
        this->incLevel();
        it->expr->illustrate();
        this->decLevel();
    }
}
