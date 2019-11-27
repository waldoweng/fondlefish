#include "ast_delete_stmt.h"
#include "ast_opts.h"
#include "ast_table_reference.h"

Ast_DeleteList::Ast_DeleteList(const char *name) {
    names.push_back(name);
}

Ast_DeleteList::~Ast_DeleteList() {}

void Ast_DeleteList::illustrate() {
    this->putLine("DeleteList [");
    
    std::string tmp;
    for (std::vector<std::string>::iterator it = names.begin();
        it != names.end();
        it ++)
        tmp += (*it + ' ');
    
    this->putLine(tmp.c_str());

    this->putLine("]");
}

void Ast_DeleteList::addName(const char *name) {
    names.push_back(name);
}

Ast_DeleteStmt::DeleteStmt::DeleteStmt(enum Ast_DeleteStmt::delete_opts delete_opts, const char *name, 
    Ast_OptWhere *opt_where, Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit) 
    : single_stmt(new Ast_DeleteStmt::SingleTableDeleteStmt(delete_opts, name, opt_where, opt_orderby, opt_limit))   
{
}

Ast_DeleteStmt::DeleteStmt::DeleteStmt(enum Ast_DeleteStmt::delete_opts delete_opts, 
    Ast_DeleteList *delete_list, Ast_TableReferences *table_references, Ast_OptWhere *opt_where)
    : multi_stmt(new Ast_DeleteStmt::MultipleTableDeleteStmt(delete_opts, delete_list, table_references, opt_where))
{
}

Ast_DeleteStmt::DeleteStmt::~DeleteStmt() 
{
}

Ast_DeleteStmt::SingleTableDeleteStmt::SingleTableDeleteStmt(enum Ast_DeleteStmt::delete_opts delete_opts, 
    const char *name, Ast_OptWhere *opt_where, Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit)
    : delete_opts(delete_opts), name(name), opt_where(opt_where), opt_orderby(opt_orderby),
        opt_limit(opt_limit)
{
}

Ast_DeleteStmt::SingleTableDeleteStmt::~SingleTableDeleteStmt()
{
    if (opt_where) delete opt_where;
    if (opt_orderby) delete opt_orderby;
    if (opt_limit) delete opt_limit;
}

Ast_DeleteStmt::MultipleTableDeleteStmt::MultipleTableDeleteStmt(enum Ast_DeleteStmt::delete_opts delete_opts, 
    Ast_DeleteList *delete_list, Ast_TableReferences *table_references, Ast_OptWhere *opt_where)
    : delete_opts(delete_opts), delete_list(delete_list), table_references(table_references),
        opt_where(opt_where)
{
}

Ast_DeleteStmt::MultipleTableDeleteStmt::~MultipleTableDeleteStmt()
{
    if (delete_list) delete delete_list;
    if (table_references) delete table_references;
    if (opt_where) delete opt_where;
}

Ast_DeleteStmt::Ast_DeleteStmt(enum Ast_DeleteStmt::delete_opts delete_opts, const char *name, 
    Ast_OptWhere *opt_where, Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit)
    : delete_type(Ast_DeleteStmt::SINGLE_TABLE),
        stmt(delete_opts, name, opt_where, opt_orderby, opt_limit)
{
}

Ast_DeleteStmt::Ast_DeleteStmt(enum Ast_DeleteStmt::delete_opts delete_opts, Ast_DeleteList *delete_list, 
    Ast_TableReferences *table_references, Ast_OptWhere *opt_where)
    : delete_type(Ast_DeleteStmt::MULTIPLE_TABLE),
        stmt(delete_opts, delete_list, table_references, opt_where)
{
}

Ast_DeleteStmt::~Ast_DeleteStmt() {
    switch (delete_type)
    {
    case Ast_DeleteStmt::SINGLE_TABLE:
        delete this->stmt.single_stmt;
        break;
    case Ast_DeleteStmt::MULTIPLE_TABLE:
        delete this->stmt.multi_stmt;
        break;
    default:
        break;
    }
}

const char * Ast_DeleteStmt::deleteOptName(enum Ast_DeleteStmt::delete_opts delete_opts) {
    static const char names[3][32] = {
        "LOW_PRIORITY",
        "QUICK",
        "IGNORE"
    };
    return names[delete_opts-1];
}

void Ast_DeleteStmt::illustrate() {
    switch (delete_type)
    {
    case Ast_DeleteStmt::SINGLE_TABLE:
        this->putLine("DELETE STMT %s %s", 
            this->deleteOptName(this->stmt.single_stmt->delete_opts),
            this->stmt.single_stmt->name.c_str());
        this->incLevel();
        this->stmt.single_stmt->opt_where->illustrate();
        this->stmt.single_stmt->opt_orderby->illustrate();
        this->stmt.single_stmt->opt_limit->illustrate();
        this->decLevel();
        break;
    case Ast_DeleteStmt::MULTIPLE_TABLE:
        this->putLine("DELETE STMT %s", this->deleteOptName(this->stmt.multi_stmt->delete_opts));
        this->incLevel();
        this->stmt.multi_stmt->delete_list->illustrate();
        this->stmt.multi_stmt->table_references->illustrate();
        this->stmt.multi_stmt->opt_where->illustrate();
        this->decLevel();
        break;
    default:
        break;
    }
}
