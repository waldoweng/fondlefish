#include <map>
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
    static const std::map<int, std::string> names = {
        {Ast_SelectStmt::SELECT_OPTS_ALL, "ALL "},
        {Ast_SelectStmt::SELECT_OPTS_DISTINCT, "DISTINCT "},
        {Ast_SelectStmt::SELECT_OPTS_DISTINCTROW, "DISTINCT ROW "},
        {Ast_SelectStmt::SELECT_OPTS_HIGH_PRIORITY, "HIGH PRIORITY "},
        {Ast_SelectStmt::SELECT_OPTS_STRAIGHT_JOIN, "STRAIGHT JOIN "},
        {Ast_SelectStmt::SELECT_OPTS_SQL_SMALL_RESULT, "SQL SMALL RESULT "},
        {Ast_SelectStmt::SELECT_OPTS_SQL_BIG_RESULT, "SQL BIG RESULT "},
        {Ast_SelectStmt::SELECT_OPTS_SQL_CALC_FOUND_ROWS, "SQL CALC FOUND ROWS "}
    };
    
    static std::string s;
    s.clear();

    for (std::map<int, std::string>::const_iterator it = names.begin();
        it != names.end();
        ++ it)
    {
        if (select_opts & it->first)
            s += (it->second);
    }
    
    return s.c_str();
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
        if (this->stmt.table->opt_where) this->stmt.table->opt_where->illustrate();
        if (this->stmt.table->opt_groupby) this->stmt.table->opt_groupby->illustrate();
        if (this->stmt.table->opt_having) this->stmt.table->opt_having->illustrate();
        if (this->stmt.table->opt_orderby) this->stmt.table->opt_orderby->illustrate();
        if (this->stmt.table->opt_limit) this->stmt.table->opt_limit->illustrate();
        if (this->stmt.table->opt_into_list) this->stmt.table->opt_into_list->illustrate();
        this->decLevel();
        break;
    default:
        break;
    }
}
