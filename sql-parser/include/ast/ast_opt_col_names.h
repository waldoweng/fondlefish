#ifndef FONDLE_FISH_MYSQL_AST_OPT_COL_NAMES_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_COL_NAMES_H_INCLUDED

#include "ast_base.h"

class Ast_ColumnList;

class Ast_OptColNames : public Ast_Base {
public:
    explicit Ast_OptColNames(Ast_ColumnList *column_list);
    virtual ~Ast_OptColNames();

public:
    virtual void illustrate() const;

private:
    Ast_ColumnList *column_list;
};

#endif