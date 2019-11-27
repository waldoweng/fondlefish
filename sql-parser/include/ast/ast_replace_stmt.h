#ifndef FONDLE_FISH_MYSQL_AST_REPLACE_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_REPLACE_STMT_H_INCLUDED

#include <cstdint>
#include <string>
#include "ast_base.h"

class Ast_OptColNames;
class Ast_InsertValList;
class Ast_OptOnDupUpdate;
class Ast_InsertAsgnList;
class Ast_SelectStmt;

class Ast_ReplaceStmt : public Ast_Base {
public:
    enum replace_opts {
        REPLACE_OPTS_LOW_PRIORITY    = 1 << 0,
        REPLACE_OPTS_DELAYED         = 1 << 2,
        REPLACE_OPTS_HIGH_PRIORITY   = 1 << 3,
        REPLACE_OPTS_IGNORE          = 1 << 4
    };
    enum replace_type {
        REPLACE_TYPE_VALLIST     = 0,
        REPLACE_TYPE_ASGNLIST    = 1,
        REPLACE_TYPE_SELECT      = 2
    };

public:
    class ReplaceStmtValList {
    public:
        explicit ReplaceStmtValList(replace_opts insert_opts, const char *name, Ast_OptColNames *opt_col_names,
            Ast_InsertValList *insert_val_list, Ast_OptOnDupUpdate *opt_dupupdate);
        ~ReplaceStmtValList();
    public:
        replace_opts replace_opts;
        std::string name;
        Ast_OptColNames *opt_col_names;
        Ast_InsertValList *insert_val_list;
        Ast_OptOnDupUpdate *opt_dupupdate;
    };

    class ReplaceStmtAsgnList {
    public:
        explicit ReplaceStmtAsgnList(replace_opts insert_opts, const char *name, 
            Ast_InsertAsgnList *insert_asgn_list, Ast_OptOnDupUpdate *opt_ondupupdate);
        ~ReplaceStmtAsgnList();
    public:
        replace_opts replace_opts;
        std::string name; 
        Ast_InsertAsgnList *insert_asgn_list;
        Ast_OptOnDupUpdate *opt_ondupupdate;
    };

    class ReplaceStmtSelect {
    public:
        explicit ReplaceStmtSelect(replace_opts insert_opts, const char *name, Ast_OptColNames *opt_col_names,
            Ast_SelectStmt *select_stmt, Ast_OptOnDupUpdate *opt_ondupupdate);
        virtual ~ReplaceStmtSelect();
    public:
        replace_opts replace_opts;
        std::string name;
        Ast_OptColNames *opt_col_names;
        Ast_SelectStmt *select_stmt;
        Ast_OptOnDupUpdate *opt_ondupupdate;
    };

    union ReplaceStmt {
    public:
        explicit ReplaceStmt(ReplaceStmtValList *_val_list);
        explicit ReplaceStmt(ReplaceStmtAsgnList *_asgn_list);
        explicit ReplaceStmt(ReplaceStmtSelect *_select);
        ~ReplaceStmt();
    public:
        ReplaceStmtValList *_val_list;
        ReplaceStmtAsgnList *_asgn_list;
        ReplaceStmtSelect *_select;
    };

public:
    explicit Ast_ReplaceStmt(replace_opts insert_opts, const char *name, Ast_OptColNames *opt_col_names,
        Ast_InsertValList *insert_vals_list, Ast_OptOnDupUpdate *opt_ondupupdate);
    explicit Ast_ReplaceStmt(replace_opts insert_opts, const char *name, Ast_InsertAsgnList *insert_asgn_list,
        Ast_OptOnDupUpdate *opt_ondupupdate);
    explicit Ast_ReplaceStmt(replace_opts insert_opts, const char *name, Ast_OptColNames *opt_col_names,
        Ast_SelectStmt *select_stmt, Ast_OptOnDupUpdate *opt_ondupupdate);
    virtual ~Ast_ReplaceStmt();

public:
    virtual std::string format();

private:
    std::string replaceOptName(replace_opts insert_opts);

private:
    replace_type replace_type;
    ReplaceStmt stmt;

};

#endif