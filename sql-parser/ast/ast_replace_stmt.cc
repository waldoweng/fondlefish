#include "ast_replace_stmt.h"
#include "ast_opts.h"
#include "ast_insert_val_list.h"
#include "ast_insert_asgn_list.h"
#include "ast_select_stmt.h"

Ast_ReplaceStmt::ReplaceStmtValList::ReplaceStmtValList(enum Ast_ReplaceStmt::replace_opts replace_opts, 
    const char *name, Ast_OptColNames *opt_col_names, Ast_InsertValList *replace_val_list, 
    Ast_OptOnDupUpdate *opt_dupupdate)
    : replace_opts(replace_opts), name(name), opt_col_names(opt_col_names),  
        insert_val_list(replace_val_list), opt_dupupdate(opt_dupupdate)
{
}

Ast_ReplaceStmt::ReplaceStmtValList::~ReplaceStmtValList() {
    if (opt_col_names) delete opt_col_names;
    if (insert_val_list) delete insert_val_list;
    if (opt_dupupdate) delete opt_dupupdate;
}

Ast_ReplaceStmt::ReplaceStmtAsgnList::ReplaceStmtAsgnList(enum Ast_ReplaceStmt::replace_opts replace_opts, 
    const char *name, Ast_InsertAsgnList *insert_asgn_list, Ast_OptOnDupUpdate *opt_ondupupdate)
    : replace_opts(replace_opts), name(name), insert_asgn_list(insert_asgn_list),
        opt_ondupupdate(opt_ondupupdate)
{
}

Ast_ReplaceStmt::ReplaceStmtAsgnList::~ReplaceStmtAsgnList() {
    if (insert_asgn_list) delete insert_asgn_list;
    if (opt_ondupupdate) delete opt_ondupupdate;
}

Ast_ReplaceStmt::ReplaceStmtSelect::ReplaceStmtSelect(enum Ast_ReplaceStmt::replace_opts replace_opts, 
    const char *name, Ast_OptColNames *opt_col_names, Ast_SelectStmt *select_stmt, 
    Ast_OptOnDupUpdate *opt_ondupupdate)
    : replace_opts(replace_opts), name(name), opt_col_names(opt_col_names),
        select_stmt(select_stmt), opt_ondupupdate(opt_ondupupdate)
{
}

Ast_ReplaceStmt::ReplaceStmtSelect::~ReplaceStmtSelect() {
    if (opt_col_names) delete opt_col_names;
    if (select_stmt) delete select_stmt;
    if (opt_ondupupdate) delete opt_ondupupdate;
}

Ast_ReplaceStmt::ReplaceStmt::ReplaceStmt(Ast_ReplaceStmt::ReplaceStmtValList *_val_list)
    : _val_list(_val_list)
{
}

Ast_ReplaceStmt::ReplaceStmt::ReplaceStmt(Ast_ReplaceStmt::ReplaceStmtAsgnList *_asgn_list)
    : _asgn_list(_asgn_list)
{
}

Ast_ReplaceStmt::ReplaceStmt::ReplaceStmt(Ast_ReplaceStmt::ReplaceStmtSelect *_select)
    : _select(_select)
{
}

Ast_ReplaceStmt::ReplaceStmt::~ReplaceStmt() 
{
}

Ast_ReplaceStmt::Ast_ReplaceStmt(enum Ast_ReplaceStmt::replace_opts replace_opts, const char *name, 
    Ast_OptColNames *opt_col_names, Ast_InsertValList *replace_val_list, Ast_OptOnDupUpdate *opt_dupupdate)
    : replace_type(Ast_ReplaceStmt::REPLACE_TYPE_VALLIST),
        stmt(new Ast_ReplaceStmt::ReplaceStmtValList(replace_opts, name, opt_col_names, replace_val_list, opt_dupupdate))
{
}

Ast_ReplaceStmt::Ast_ReplaceStmt(enum Ast_ReplaceStmt::replace_opts replace_opts, const char *name,
    Ast_InsertAsgnList *insert_asgn_list, Ast_OptOnDupUpdate *opt_ondupupdate)
    : replace_type(Ast_ReplaceStmt::REPLACE_TYPE_ASGNLIST),
        stmt(new Ast_ReplaceStmt::ReplaceStmtAsgnList(replace_opts, name, insert_asgn_list, opt_ondupupdate))
{
}

Ast_ReplaceStmt::Ast_ReplaceStmt(enum Ast_ReplaceStmt::replace_opts replace_opts, const char *name, 
    Ast_OptColNames *opt_col_names, Ast_SelectStmt *select_stmt, Ast_OptOnDupUpdate *opt_ondupupdate)
    : replace_type(Ast_ReplaceStmt::REPLACE_TYPE_SELECT),
        stmt(new Ast_ReplaceStmt::ReplaceStmtSelect(replace_opts, name, opt_col_names, select_stmt, opt_ondupupdate))
{
}

Ast_ReplaceStmt::~Ast_ReplaceStmt() {
    switch (replace_type)
    {
    case Ast_ReplaceStmt::REPLACE_TYPE_VALLIST:
        delete this->stmt._val_list;
        break;
    case Ast_ReplaceStmt::REPLACE_TYPE_ASGNLIST:
        delete this->stmt._asgn_list;
        break;
    case Ast_ReplaceStmt::REPLACE_TYPE_SELECT:
        delete this->stmt._select;
        break;
    default:
        break;
    }
}

const char * Ast_ReplaceStmt::replaceOptName(enum Ast_ReplaceStmt::replace_opts replace_opts) {
    static const char names[4][32] = {
        "LOW PRIORITY",
        "DELAYED",
        "HIGH PRIORITY",
        "IGNORE"
    };
    return names[replace_opts-1];
}

void Ast_ReplaceStmt::illustrate() {
    switch (this->replace_type)
    {
    case Ast_ReplaceStmt::REPLACE_TYPE_VALLIST:
        this->putLine("REPLACE STMT %s %s", 
            this->replaceOptName(this->stmt._val_list->replace_opts), 
            this->stmt._val_list->name.c_str());
        this->incLevel();
        this->stmt._val_list->opt_col_names->illustrate();
        this->stmt._val_list->insert_val_list->illustrate();
        this->stmt._val_list->opt_dupupdate->illustrate();
        this->decLevel();
        break;
    case Ast_ReplaceStmt::REPLACE_TYPE_ASGNLIST:
        this->putLine("REPLACE STMT %s %s", 
            this->replaceOptName(this->stmt._asgn_list->replace_opts),
            this->stmt._asgn_list->name.c_str());
        this->incLevel();
        this->stmt._asgn_list->insert_asgn_list->illustrate();
        this->stmt._asgn_list->opt_ondupupdate->illustrate();
        this->decLevel();
        break;
    case Ast_ReplaceStmt::REPLACE_TYPE_SELECT:
        this->putLine("REPLACE STMT %s %s", 
            this->replaceOptName(this->stmt._select->replace_opts),
            this->stmt._select->name.c_str());
        this->incLevel();
        this->stmt._select->opt_col_names->illustrate();
        this->stmt._select->select_stmt->illustrate();
        this->stmt._select->opt_ondupupdate->illustrate();
        this->decLevel();
        break;
    default:
        break;
    }
}
