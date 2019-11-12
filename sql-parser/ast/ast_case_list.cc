#include <cstdio>
#include "ast_case_list.h"
#include "ast_expr.h"

Ast_CaseList::Ast_CaseList(Ast_Expr *when, Ast_Expr *then) {
    case_item item;
    item.when_expr = when;
    item.then_expr = then;
    cases.push_back(item);
}

Ast_CaseList::~Ast_CaseList() {
    for (std::vector<Ast_CaseList::case_item>::iterator it = cases.begin(); 
        it != cases.end();
        it ++) 
    {
        if (it->when_expr)
            delete it->when_expr;
        if (it->then_expr)
            delete it->then_expr;
    }
}

void Ast_CaseList::addCase(Ast_Expr *when, Ast_Expr *then) {
    case_item item;
    item.when_expr = when;
    item.then_expr = then;
    cases.push_back(item);
}

void Ast_CaseList::illustrate() {
    for (int i = 0; i < this->getLevel(); i++)
        printf("\t");
    printf("CaseList:\n");
    
    this->incLevel();
    for (std::vector<Ast_CaseList::case_item>::iterator it = cases.begin();
        it != cases.end();
        it ++) 
    {
        if (it->when_expr)
            it->when_expr->illustrate();
        if (it->then_expr)
            it->then_expr->illustrate();
    }
    this->decLevel();
}
