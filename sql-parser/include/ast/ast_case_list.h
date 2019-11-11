#ifndef FONDLE_FISH_MYSQL_AST_CASE_LIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_CASE_LIST_H_INCLUDED

#include <vector>
#include "ast_base.h"

class Ast_Expr;

struct case_item {
    Ast_Expr *whem_expr;
    Ast_Expr *then_expr;
};

class Ast_CaseList : public Ast_Base{
public:
    explicit Ast_CaseList(Ast_Expr *when, Ast_Expr *then);
    virtual ~Ast_CaseList();

public:
    void addCase(Ast_Expr *when, Ast_Expr *then);

public:
    virtual void illustrate() const;

private:
    std::vector<case_item> cases;
};

#endif