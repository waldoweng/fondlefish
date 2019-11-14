#include "ast_select_stmt.h"
#include "ast_select_expr_list.h"
#include "ast_table_reference.h"
#include "ast_opt_where.h"
#include "ast_opt_groupby.h"
#include "ast_opt_having.h"
#include "ast_opt_orderby.h"
#include "ast_opt_limit.h"
#include "ast_opt_into_list.h"

Ast_SelectStmt::TablelessSelectStmt::TablelessSelectStmt(
    enum Ast_SelectStmt::select_opts select_opts, Ast_SelectExprList *select_expr_list)
    : select_opts(select_opts), select_expr_list(select_expr_list)
{
}

Ast_SelectStmt::TablelessSelectStmt::~TablelessSelectStmt() {
    if (select_expr_list)
        delete select_expr_list;
}

Ast_SelectStmt::TableSelectStmt::TableSelectStmt(enum Ast_SelectStmt::select_opts select_opts, 
    Ast_SelectExprList *select_expr_list, Ast_TableReferences *table_references, Ast_OptWhere *opt_where,
    Ast_OptGroupBy *opt_groupby, Ast_OptHaving *opt_having, Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit,
    Ast_OptIntoList *opt_into_list)
    : select_opts(select_opts), select_expr_list(select_expr_list), table_references(table_references),
        opt_where(opt_where), opt_groupby(opt_groupby), opt_having(opt_having), opt_orderby(opt_orderby),
        opt_limit(opt_limit), opt_into_list(opt_into_list)
{
}

Ast_SelectStmt::TableSelectStmt::~TableSelectStmt() {
    if (select_expr_list) delete select_expr_list;
    if (table_references) delete table_references;
    if (opt_where) delete opt_where;
    if (opt_groupby) delete opt_groupby;
    if (opt_having) delete opt_having;
    if (opt_orderby) delete opt_orderby;
    if (opt_limit) delete opt_limit;
    if (opt_into_list) delete opt_into_list;
}

Ast_SelectStmt::SelectStmt::SelectStmt(Ast_SelectStmt::TablelessSelectStmt *tableless)
    : tableless(tableless)
{
}

Ast_SelectStmt::SelectStmt::SelectStmt(Ast_SelectStmt::TableSelectStmt *table) 
    : table(table)
{
}

Ast_SelectStmt::SelectStmt::~SelectStmt() {}

Ast_SelectStmt::Ast_SelectStmt(enum Ast_SelectStmt::select_opts select_opts, Ast_SelectExprList *select_expr_list) 
    : select_type(Ast_SelectStmt::SELECT_TYPE_TABLELESS),
        stmt(new Ast_SelectStmt::TablelessSelectStmt(select_opts, select_expr_list))
{
}

Ast_SelectStmt::Ast_SelectStmt(enum Ast_SelectStmt::select_opts select_opts, 
    Ast_SelectExprList *select_expr_list, Ast_TableReferences *table_references, Ast_OptWhere *opt_where,
    Ast_OptGroupBy *opt_groupby, Ast_OptHaving *opt_having, Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit,
    Ast_OptIntoList *opt_into_list) 
    : select_type(Ast_SelectStmt::SELECT_TYPE_TABLE),
        stmt(new Ast_SelectStmt::TableSelectStmt(
            select_opts, select_expr_list, table_references, opt_where, opt_groupby, opt_having,
            opt_orderby, opt_limit, opt_into_list))
{
}

Ast_SelectStmt::~Ast_SelectStmt() {
    switch (this->select_type)
    {
    case Ast_SelectStmt::SELECT_TYPE_TABLELESS:
        delete this->stmt.tableless;
        break;
    case Ast_SelectStmt::SELECT_TYPE_TABLE:
        delete this->stmt.table;
        break;
    default:
        break;
    }
}

const char * Ast_SelectStmt::selectOptsName(Ast_SelectStmt::select_opts select_opts) {
    static const char names[8][32] = {
        "ALL",
        "DISTINCT",
        "DISTINCT ROW",
        "HIGH PRIORITY",
        "STRAIGHT JOIN",
        "SQL SMALL RESULT",
        "SQL BIG RESULT",
        "SQL CALC FOUND ROWS"
    };
    return names[select_opts-1];
}

void Ast_SelectStmt::illustrate() {
    switch (this->select_type)
    {
    case Ast_SelectStmt::SELECT_TYPE_TABLELESS:
        this->putLine("SELECT STMT %s", this->selectOptsName(this->stmt.tableless->select_opts));
        this->incLevel();
        this->stmt.tableless->select_expr_list->illustrate();
        this->decLevel();
        break;
    case Ast_SelectStmt::SELECT_TYPE_TABLE:
        this->putLine("SELECT STMT %s", this->selectOptsName(this->stmt.table->select_opts));
        this->incLevel();
        this->stmt.table->select_expr_list->illustrate();
        this->stmt.table->table_references->illustrate();
        this->stmt.table->opt_where->illustrate();
        this->stmt.table->opt_groupby->illustrate();
        this->stmt.table->opt_having->illustrate();
        this->stmt.table->opt_orderby->illustrate();
        this->stmt.table->opt_limit->illustrate();
        this->stmt.table->opt_into_list->illustrate();
        this->decLevel();
        break;
    default:
        break;
    }
}
