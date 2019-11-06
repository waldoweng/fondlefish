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
    Ast_ReplaceStmt(uint32_t insert_opts, std::string name, Ast_OptColNames *opt_col_names,
        Ast_InsertValList *insert_vals_list, Ast_OptOnDupUpdate *opt_ondupupdate);
    Ast_ReplaceStmt(uint32_t insert_opts, std::string name, Ast_InsertAsgnList *insert_asgn_list,
        Ast_OptOnDupUpdate *opt_ondupupdate);
    Ast_ReplaceStmt(uint32_t insert_opts, std::string name, Ast_OptColNames *opt_col_names,
        Ast_SelectStmt *select_stmt, Ast_OptOnDupUpdate *opt_ondupupdate);
    virtual ~Ast_ReplaceStmt();
public:
    virtual void illustrate() const;
private:

};

#endif