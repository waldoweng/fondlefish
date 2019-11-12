#ifndef FONDLE_FISH_MYSQL_AST_JOIN_CONDITION_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_JOIN_CONDITION_H_INCLUDED

#include "ast_base.h"

class Ast_Expr;
class Ast_ColumnList;

class Ast_JoinCondition : public Ast_Base {
public:

public:
    explicit Ast_JoinCondition(Ast_Expr *expr);
    explicit Ast_JoinCondition(Ast_ColumnList *column_list);
    virtual ~Ast_JoinCondition();

public:
    virtual void illustrate();

private:
    Ast_Expr *expr;
    Ast_ColumnList *column_list;
};

#endif
