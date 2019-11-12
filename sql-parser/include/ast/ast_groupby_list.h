#ifndef FONDLE_FISH_MYSQL_AST_GROUPBY_LIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_GROUPBY_LIST_H_INCLUDED

#include <vector>
#include "ast_base.h"

class Ast_Expr;

class Ast_GroupByList : public Ast_Base {
public:
    explicit Ast_GroupByList(Ast_Expr *expr, bool asc);
    virtual ~Ast_GroupByList();

public:
    class GroupByItem {
    public:
        GroupByItem(Ast_Expr *expr, bool asc);
        ~GroupByItem();
    public:
        Ast_Expr *expr;
        bool asc;
    };

public:
    void addGroupBy(Ast_Expr *expr, bool asc);

public:
    virtual void illustrate();

private:
    std::vector<GroupByItem> groupby_list;
};

#endif