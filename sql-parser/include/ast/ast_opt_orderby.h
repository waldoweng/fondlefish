#ifndef FONDLE_FISH_MYSQL_AST_OPT_ORDERBY_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_ORDERBY_H_INCLUDED

#include "ast_base.h"

class Ast_GroupByList;

class Ast_OptOrderBy : public Ast_Base {
public:
    Ast_OptOrderBy(Ast_GroupByList *orderby_list);
    ~Ast_OptOrderBy();
    
public:
    virtual void illustrate() const;

private:
    Ast_GroupByList *orderby_list;
};

#endif