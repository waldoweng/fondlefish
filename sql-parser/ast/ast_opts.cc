#include "ast_opts.h"
#include "ast_expr.h"
#include "ast_column_list.h"
#include "ast_insert_asgn_list.h"

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


Ast_OptOnDupUpdate::Ast_OptOnDupUpdate(Ast_InsertAsgnList *insert_asgn_list) 
    : insert_asgn_list(insert_asgn_list)
{
}

Ast_OptOnDupUpdate::~Ast_OptOnDupUpdate() {
    if (insert_asgn_list) delete insert_asgn_list;
}

void Ast_OptOnDupUpdate::illustrate() {
    if (this->insert_asgn_list) {
        this->putLine("ON DUPLICATE UPDATE");
        this->incLevel();
        this->insert_asgn_list->illustrate();
        this->decLevel();
    }
}


Ast_OptLimit::Ast_OptLimit(Ast_Expr *limit) 
    : offset(nullptr), limit(limit)
{
}

Ast_OptLimit::Ast_OptLimit(Ast_Expr *offset, Ast_Expr *limit) 
    : offset(offset), limit(limit)
{
}

Ast_OptLimit::~Ast_OptLimit() 
{
    if (offset) delete offset;
    if (limit) delete limit;
}


void Ast_OptLimit::illustrate() {
    if (offset) {
        this->putLine("OFFSET");
        this->incLevel();
        this->offset->illustrate();
        this->decLevel();
    }
    if (limit) {
        this->putLine("LIMIT");
        this->incLevel();
        this->limit->illustrate();
        this->decLevel();
    }
}


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


Ast_OptHaving::Ast_OptHaving(Ast_Expr *expr) 
    : expr(expr)
{
}

Ast_OptHaving::~Ast_OptHaving() {
    if (expr) delete expr;
}

void Ast_OptHaving::illustrate() {
    if (expr) {
        this->putLine("HAVING");
        this->incLevel();
        this->expr->illustrate();
        this->decLevel();
    }
}


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


Ast_OptWhere::Ast_OptWhere(Ast_Expr *expr)
    : expr(expr)
{
}

Ast_OptWhere::~Ast_OptWhere() 
{
    if (expr) delete expr;
}

void Ast_OptWhere::illustrate() {
    if (expr) {
        this->putLine("WHERE");
        this->incLevel();
        this->expr->illustrate();
        this->decLevel();
    }    
}
