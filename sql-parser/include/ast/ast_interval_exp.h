#ifndef FONDLE_FISH_MYSQL_AST_INTERVAL_EXP_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_INTERVAL_EXP_H_INCLUDED

#include "ast_base.h"

class Ast_Expr;

class Ast_IntervalExp : public Ast_Base {
public:
    const static int DAY_HOUR = 1;
    const static int DAY_MICROSECOND = 2;
    const static int DAY_MINUTE = 3;
    const static int DAY_SECOND = 4;
    const static int YEAR_MONTH = 5;
    const static int YEAR = 6;
    const static int HOUR_MICROSECOND = 7;
    const static int HOUR_MINUTE = 8;
    const static int HOUR_SECOND = 9;

public:
    Ast_IntervalExp(Ast_Expr *expr, int type);
    virtual ~Ast_IntervalExp();

public:
    virtual void illustrate() const;

private:
    int m_type;
    Ast_Expr *expr;
};

#endif
