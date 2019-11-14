#include "ast_opt_limit.h"
#include "ast_expr.h"

Ast_OptLimit::Ast_OptLimit(Ast_Expr *limit) 
    : offset(nullptr), limit(limit)
{
}

Ast_OptLimit::Ast_OptLimit(Ast_Expr *offset, Ast_Expr *limit) 
    : offset(offset), limit(limit)
{
}

Ast_OptLimit::~Ast_OptLimit() 
{
    if (offset) delete offset;
    if (limit) delete limit;
}

void Ast_OptLimit::illustrate() {
    if (offset) {
        this->putLine("OFFSET");
        this->incLevel();
        this->offset->illustrate();
        this->decLevel();
    }
    if (limit) {
        this->putLine("LIMIT");
        this->incLevel();
        this->limit->illustrate();
        this->decLevel();
    }
}

