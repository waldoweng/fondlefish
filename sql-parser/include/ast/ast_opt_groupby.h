#ifndef FONDLE_FISH_MYSQL_AST_OPT_GROUPBY_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_GROUPBY_H_INCLUDED

#include "ast_base.h"

class Ast_GroupByList;

class Ast_OptGroupBy : public Ast_Base {
public:
    Ast_OptGroupBy(Ast_GroupByList *groupby_list, bool opt_with_rollup);
    ~Ast_OptGroupBy();

public:
    virtual void illustrate() const;

private:
    Ast_GroupByList *groupby_list;
    bool opt_with_rollup;
};

#endif