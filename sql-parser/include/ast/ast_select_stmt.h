#ifndef FONDLE_FISH_MYSQL_AST_SELECT_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_SELECT_STMT_H_INCLUDED

#include "ast_base.h"
#include <cstdint>

class Ast_SelectExprList;
class Ast_TableReferences;
class Ast_OptWhere;
class Ast_OptGroupBy;
class Ast_OptHaving;
class Ast_OptOrderBy;
class Ast_OptLimit;
class Ast_OptIntoList;

class Ast_SelectOpts {
    enum {
        SELECT_OPTS_ALL = 1,
        SELECT_OPTS_DISTINCT = (1 << 1),
        SELECT_OPTS_DISTINCTROW = (1 << 2),
        SELECT_OPTS_HIGH_PRIORITY = (1 << 3),
        SELECT_OPTS_STRAIGHT_JOIN = (1 << 4),
        SELECT_OPTS_SQL_SMALL_RESULT = (1 << 5),
        SELECT_OPTS_SQL_BIG_RESULT = (1 << 6),
        SELECT_OPTS_SQL_CALC_FOUND_ROWS = (1 << 7)
    };
};

class Ast_SelectStmt : public Ast_Base {
public:
    explicit Ast_SelectStmt(uint32_t select_opts, Ast_SelectExprList *select_expr_list);
    explicit Ast_SelectStmt(uint32_t select_opts, Ast_SelectExprList *select_expr_list,
        Ast_TableReferences *table_references, Ast_OptWhere *opt_where, Ast_OptGroupBy *opt_groupby,
        Ast_OptHaving *opt_having, Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit,
        Ast_OptIntoList *opt_into_list);
    virtual ~Ast_SelectStmt();

public:
    virtual void illustrate() const;

private:
};

#endif