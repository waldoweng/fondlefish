#include "ast_insert_asgn_list.h"
#include "ast_expr.h"

Ast_InsertAsgnList::InsertAsgn::InsertAsgn(const char *name, Ast_Expr *expr) 
    : name(name), expr(expr)
{
}

Ast_InsertAsgnList::InsertAsgn::~InsertAsgn() {
    if (expr) delete expr;
}

Ast_InsertAsgnList::Ast_InsertAsgnList(const char *name, Ast_Expr *expr) {
    asgn_list.push_back(
        new Ast_InsertAsgnList::InsertAsgn(name, expr)
    );
}

Ast_InsertAsgnList::~Ast_InsertAsgnList() {
    for (std::vector<Ast_InsertAsgnList::InsertAsgn *>::iterator it = asgn_list.begin();
        it != asgn_list.end();
        it ++) {
        delete *it;
    }
}

void Ast_InsertAsgnList::addInsertAsgn(const char *name, Ast_Expr *expr) {
    asgn_list.push_back(
        new Ast_InsertAsgnList::InsertAsgn(name, expr)
    );
}

void Ast_InsertAsgnList::illustrate() {
    this->putLine("INSERT ASGN LIST [");
    this->incLevel();

    for (std::vector<InsertAsgn *>::iterator it = asgn_list.begin();
        it != asgn_list.end();
        it ++)
    {
        this->putLine("NAME %s", (*it)->name.c_str());
        (*it)->expr->illustrate();
    }

    this->decLevel();
    this->putLine("]");
}
