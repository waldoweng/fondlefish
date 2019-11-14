#include "ast_interval_exp.h"
#include "ast_expr.h"

Ast_IntervalExp::Ast_IntervalExp(enum Ast_IntervalExp::interval_type interval_type, Ast_Expr *expr)
    : interval_type(interval_type), expr(expr)
{
}

Ast_IntervalExp::~Ast_IntervalExp() {
    if (expr) delete expr;
}

const char * Ast_IntervalExp::intervalTypeName(enum Ast_IntervalExp::interval_type interval_type) {
    static const char names[9][32] = {
        "DAY HOUR",
        "DAY MICROSECOND",
        "DAY MINUTE",
        "DAY SECOND",
        "YEAR MONTH",
        "YEAR",
        "HOUR MICROSECOND",
        "HOUR MINUTE",
        "HOUR SECOND"
    };

    return names[interval_type-1];
}

void Ast_IntervalExp::illustrate() {
    this->putLine("INTERVAL %s", this->intervalTypeName(this->interval_type));
    this->incLevel();
    this->expr->illustrate();
    this->decLevel();
}