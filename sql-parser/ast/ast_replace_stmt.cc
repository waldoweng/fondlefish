#include <map>
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

std::string Ast_ReplaceStmt::replaceOptName(enum Ast_ReplaceStmt::replace_opts replace_opts) {
    const static std::map<int, std::string> names = {
        {1 << 0, "LOW PRIORITY"},
        {1 << 1, "DELAYED"},
        {1 << 2, "HIGH PRIORITY"},
        {1 << 3, "IGNORE"}
    };

    std::string str;
    for (std::map<int, std::string>::const_iterator it = names.begin();
        it != names.end();
        ++it) {
            if (replace_opts & it->first) {
                str += it->second;
            }
        }

    return str;
}



std::string Ast_ReplaceStmt::format() {
    switch (this->replace_type)
    {
    case Ast_ReplaceStmt::REPLACE_TYPE_VALLIST:
        return this->rawf("REPLACE %s INTO %s %s VALUES %s %s", 
            this->replaceOptName(this->stmt._val_list->replace_opts).c_str(), 
            this->stmt._val_list->name.c_str(),
            this->stmt._val_list->opt_col_names->format().c_str(),
            this->stmt._val_list->insert_val_list->format().c_str(),
            this->stmt._val_list->opt_dupupdate->format().c_str()
        );
    case Ast_ReplaceStmt::REPLACE_TYPE_ASGNLIST:
        return this->rawf("REPLACE %s INTO %s SET %s %s", 
            this->replaceOptName(this->stmt._asgn_list->replace_opts).c_str(),
            this->stmt._asgn_list->name.c_str(),
            this->stmt._asgn_list->insert_asgn_list->format().c_str(),
            this->stmt._asgn_list->opt_ondupupdate->format().c_str()
        );
    case Ast_ReplaceStmt::REPLACE_TYPE_SELECT:
        return this->rawf("REPLACE %s INTO %s %s %s", 
            this->replaceOptName(this->stmt._select->replace_opts).c_str(),
            this->stmt._select->name.c_str(),
            this->stmt._select->opt_col_names->format().c_str(),
            this->stmt._select->select_stmt->format().c_str(),
            this->stmt._select->opt_ondupupdate->format().c_str()
        );
    default:
        return "";
    }
}
