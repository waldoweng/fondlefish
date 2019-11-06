#ifndef FONDLE_FISH_MYSQL_AST_DELETE_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_DELETE_STMT_H_INCLUDED

#include <stdint.h>
#include "ast_base.h"

class Ast_DeleteList;
class Ast_OptWhere;
class Ast_OptOrderBy;
class Ast_OptLimit;
class Ast_TableReferences;

class Ast_DeleteStmt : public Ast_Base {
public:
    const static uint32_t LOW_PRIORITY = 1;
    const static uint32_t QUICK = (1 << 1);
    const static uint32_t IGNORE = (1 << 2);
public:
    Ast_DeleteStmt(uint32_t delete_opts, const char *name, Ast_OptWhere *opt_where,
        Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit);
    Ast_DeleteStmt(uint32_t delete_opts, Ast_DeleteList *delete_list, 
        Ast_TableReferences *table_references, Ast_OptWhere *opt_where);
    Ast_DeleteStmt(uint32_t delete_opts, Ast_DeleteList *delete_list, 
        Ast_TableReferences *table_references, Ast_OptWhere *opt_where);
};

#endif