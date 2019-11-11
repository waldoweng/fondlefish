#ifndef FONDLE_FISH_MYSQL_AST_DELETE_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_DELETE_STMT_H_INCLUDED

#include "ast_base.h"

class Ast_DeleteList;
class Ast_OptWhere;
class Ast_OptOrderBy;
class Ast_OptLimit;
class Ast_TableReferences;

class Ast_DeleteStmt : public Ast_Base {
public:
    enum delete_opts {
        DELETE_OPTS_LOW_PRIORITY = 1,
        DELETE_OPTS_QUICK = (1 << 1),
        DELETE_OPTS_IGNORE = (1 << 2)
    };
public:
    explicit Ast_DeleteStmt(uint32_t delete_opts, const char *name, Ast_OptWhere *opt_where,
        Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit);
    explicit Ast_DeleteStmt(uint32_t delete_opts, Ast_DeleteList *delete_list, 
        Ast_TableReferences *table_references, Ast_OptWhere *opt_where);
    virtual ~Ast_DeleteStmt();

public:
    virtual void illustrate() const;
};

#endif