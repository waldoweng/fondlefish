#ifndef FONDLE_FISH_MYSQL_AST_OPT_INTOLIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_INTOLIST_H_INCLUDED

#include "ast_base.h"

class Ast_ColumnList;

class Ast_OptIntoList {
public:
    explicit Ast_OptIntoList(Ast_ColumnList *column_list);
    virtual ~Ast_OptIntoList();

public:
    virtual void illustrate();

private:
    Ast_ColumnList *column_list;
};

#endif