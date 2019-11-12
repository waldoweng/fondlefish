#ifndef FONDLE_FISH_MYSQL_AST_INTERVAL_EXP_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_INTERVAL_EXP_H_INCLUDED

#include "ast_base.h"

class Ast_Expr;

class Ast_IntervalExp : public Ast_Base {
public:
    enum {
        INTERVAL_DAY_HOUR = 1,
        INTERVAL_DAY_MICROSECOND = 2,
        INTERVAL_DAY_MINUTE = 3,
        INTERVAL_DAY_SECOND = 4,
        INTERVAL_YEAR_MONTH = 5,
        INTERVAL_YEAR = 6,
        INTERVAL_HOUR_MICROSECOND = 7,
        INTERVAL_HOUR_MINUTE = 8,
        INTERVAL_HOUR_SECOND = 9,
    };

public:
    explicit Ast_IntervalExp(Ast_Expr *expr, int type);
    virtual ~Ast_IntervalExp();

public:
    virtual void illustrate();

private:
    int m_type;
    Ast_Expr *expr;
};

#endif
