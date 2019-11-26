#include "ast_insert_stmt.h"
#include "ast_opt_col_names.h"
#include "ast_insert_val_list.h"
#include "ast_opt_on_dup_update.h"
#include "ast_insert_asgn_list.h"
#include "ast_select_stmt.h"

Ast_InsertStmt::InsertStmtValList::InsertStmtValList(enum Ast_InsertStmt::insert_opts insert_opts, 
    const char *name, Ast_OptColNames *opt_col_names, Ast_InsertValList *insert_val_list, 
    Ast_OptOnDupUpdate *opt_dupupdate)
    : insert_opts(insert_opts), name(name), opt_col_names(opt_col_names),  
        insert_val_list(insert_val_list), opt_dupupdate(opt_dupupdate)
{
}

Ast_InsertStmt::InsertStmtValList::~InsertStmtValList() {
    if (opt_col_names) delete opt_col_names;
    if (insert_val_list) delete insert_val_list;
    if (opt_dupupdate) delete opt_dupupdate;
}

Ast_InsertStmt::InsertStmtAsgnList::InsertStmtAsgnList(enum Ast_InsertStmt::insert_opts insert_opts, 
    const char *name, Ast_InsertAsgnList *insert_asgn_list, Ast_OptOnDupUpdate *opt_ondupupdate)
    : insert_opts(insert_opts), name(name), insert_asgn_list(insert_asgn_list),
        opt_ondupupdate(opt_ondupupdate)
{
}

Ast_InsertStmt::InsertStmtAsgnList::~InsertStmtAsgnList() {
    if (insert_asgn_list) delete insert_asgn_list;
    if (opt_ondupupdate) delete opt_ondupupdate;
}

Ast_InsertStmt::InsertStmtSelect::InsertStmtSelect(enum Ast_InsertStmt::insert_opts insert_opts, 
    const char *name, Ast_OptColNames *opt_col_names, Ast_SelectStmt *select_stmt, 
    Ast_OptOnDupUpdate *opt_ondupupdate)
    : insert_opts(insert_opts), name(name), opt_col_names(opt_col_names),
        select_stmt(select_stmt), opt_ondupupdate(opt_ondupupdate)
{
}

Ast_InsertStmt::InsertStmtSelect::~InsertStmtSelect() {
    if (opt_col_names) delete opt_col_names;
    if (select_stmt) delete select_stmt;
    if (opt_ondupupdate) delete opt_ondupupdate;
}

Ast_InsertStmt::InsertStmt::InsertStmt(Ast_InsertStmt::InsertStmtValList *_val_list)
    : _val_list(_val_list)
{
}

Ast_InsertStmt::InsertStmt::InsertStmt(Ast_InsertStmt::InsertStmtAsgnList *_asgn_list)
    : _asgn_list(_asgn_list)
{
}

Ast_InsertStmt::InsertStmt::InsertStmt(Ast_InsertStmt::InsertStmtSelect *_select)
    : _select(_select)
{
}

Ast_InsertStmt::InsertStmt::~InsertStmt() 
{
}

Ast_InsertStmt::Ast_InsertStmt(enum Ast_InsertStmt::insert_opts insert_opts, const char *name, 
    Ast_OptColNames *opt_col_names, Ast_InsertValList *insert_val_list, Ast_OptOnDupUpdate *opt_dupupdate)
    : insert_type(Ast_InsertStmt::INSERT_TYPE_VALLIST),
        stmt(new Ast_InsertStmt::InsertStmtValList(insert_opts, name, opt_col_names, insert_val_list, opt_dupupdate))
{
}

Ast_InsertStmt::Ast_InsertStmt(enum Ast_InsertStmt::insert_opts insert_opts, const char *name,
    Ast_InsertAsgnList *insert_asgn_list, Ast_OptOnDupUpdate *opt_ondupupdate)
    : insert_type(Ast_InsertStmt::INSERT_TYPE_ASGNLIST),
        stmt(new Ast_InsertStmt::InsertStmtAsgnList(insert_opts, name, insert_asgn_list, opt_ondupupdate))
{
}

Ast_InsertStmt::Ast_InsertStmt(enum Ast_InsertStmt::insert_opts insert_opts, const char *name, 
    Ast_OptColNames *opt_col_names, Ast_SelectStmt *select_stmt, Ast_OptOnDupUpdate *opt_ondupupdate)
    : insert_type(Ast_InsertStmt::INSERT_TYPE_SELECT),
        stmt(new Ast_InsertStmt::InsertStmtSelect(insert_opts, name, opt_col_names, select_stmt, opt_ondupupdate))
{
}

Ast_InsertStmt::~Ast_InsertStmt() {
    switch (insert_type)
    {
    case Ast_InsertStmt::INSERT_TYPE_VALLIST:
        delete this->stmt._val_list;
        break;
    case Ast_InsertStmt::INSERT_TYPE_ASGNLIST:
        delete this->stmt._asgn_list;
        break;
    case Ast_InsertStmt::INSERT_TYPE_SELECT:
        delete this->stmt._select;
        break;
    default:
        break;
    }
}

const char * Ast_InsertStmt::insertOptName(enum Ast_InsertStmt::insert_opts insert_opts) {
    static const char names[4][32] = {
        "LOW PRIORITY",
        "DELAYED",
        "HIGH PRIORITY",
        "IGNORE"
    };
    return names[insert_opts-1];
}

void Ast_InsertStmt::illustrate() {
    switch (this->insert_type)
    {
    case Ast_InsertStmt::INSERT_TYPE_VALLIST:
        this->putLine("INSERT STMT %s %s", 
            this->insertOptName(this->stmt._val_list->insert_opts), 
            this->stmt._val_list->name.c_str());
        this->incLevel();
        this->stmt._val_list->opt_col_names->illustrate();
        this->stmt._val_list->insert_val_list->illustrate();
        this->stmt._val_list->opt_dupupdate->illustrate();
        this->decLevel();
        break;
    case Ast_InsertStmt::INSERT_TYPE_ASGNLIST:
        this->putLine("INSERT STMT %s %s", 
            this->insertOptName(this->stmt._asgn_list->insert_opts),
            this->stmt._asgn_list->name.c_str());
        this->incLevel();
        this->stmt._asgn_list->insert_asgn_list->illustrate();
        this->stmt._asgn_list->opt_ondupupdate->illustrate();
        this->decLevel();
        break;
    case Ast_InsertStmt::INSERT_TYPE_SELECT:
        this->putLine("INSERT STMT %s %s", 
            this->insertOptName(this->stmt._select->insert_opts),
            this->stmt._select->name.c_str());
        this->incLevel();
        this->stmt._select->opt_col_names->illustrate();
        this->stmt._select->select_stmt->illustrate();
        this->stmt._select->opt_ondupupdate->illustrate();
        this->decLevel();
        break;
    default:
        this->putLine("unrecognized insert type!");
        break;
    }
}
