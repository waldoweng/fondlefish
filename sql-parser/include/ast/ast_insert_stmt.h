#ifndef FONDLE_FISH_MYSQL_AST_INSERT_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_INSERT_STMT_H_INCLUDED

#include <cstdint>
#include <string>
#include "ast_base.h"

class Ast_OptColNames;
class Ast_InsertValList;
class Ast_OptOnDupUpdate;
class Ast_InsertAsgnList;
class Ast_SelectStmt;

class Ast_InsertStmt : public Ast_Base {
public:
    const static uint32_t LOW_PRIORITY = 1;
    const static uint32_t DELAYED = (1 << 1);
    const static uint32_t HIGH_PRIORITY = (1 << 2);
    const static uint32_t IGNORE = (1 << 3);

public:
    Ast_InsertStmt(uint32_t insert_opts, std::string name, Ast_OptColNames *opt_col_names,
        Ast_InsertValList *insert_val_list, Ast_OptOnDupUpdate *opt_dupupdate);
    Ast_InsertStmt(uint32_t insert_opts, std::string name, Ast_InsertAsgnList *insert_asgn_list,
        Ast_OptOnDupUpdate *opt_ondupupdate);
    Ast_InsertStmt(uint32_t insert_opts, std::string name, Ast_OptColNames *opt_col_names,
        Ast_SelectStmt *select_stmt, Ast_OptOnDupUpdate *opt_ondupupdate);
};

#endif