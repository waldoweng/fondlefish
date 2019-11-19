#include <time.h>
#include "ast_expr.h"
#include "ast_select_stmt.h"
#include "ast_val_list.h"
#include "ast_interval_exp.h"
#include "ast_case_list.h"

Ast_Expr::Ast_Expr() {}

Ast_Expr::~Ast_Expr() {}

void Ast_Expr::illustrate() {}

Ast_Expr Ast_Expr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_LiteralExpr::Ast_LiteralExpr(enum Ast_LiteralExpr::literal_type literal_type)
    : literal_type(literal_type)
{
}

Ast_LiteralExpr::Ast_LiteralExpr(enum Ast_LiteralExpr::literal_type literal_type, 
    const char *first, const char *second)
    : literal_type(literal_type)
{
    this->name.first = first ? first : "";
    this->name.second = second;
}

Ast_LiteralExpr::Ast_LiteralExpr(int int_var)
    : literal_type(Ast_LiteralExpr::LiteralTypeIntNum), int_var(int_var)
{
}

Ast_LiteralExpr::Ast_LiteralExpr(double float_var)
    : literal_type(Ast_LiteralExpr::LiteralTypeApproxNum), float_var(float_var)
{
}

Ast_LiteralExpr::Ast_LiteralExpr(bool bool_var)
    : literal_type(Ast_LiteralExpr::LiteralTypeBool), bool_var(bool_var)
{
}

Ast_LiteralExpr::~Ast_LiteralExpr() {}

void Ast_LiteralExpr::illustrate() {
    switch (this->literal_type)
    {
    case Ast_LiteralExpr::LiteralTypeName:
    case Ast_LiteralExpr::LiteralTypeDetailName:
        if (this->name.first.empty())
            this->putLine("%s.%s", this->name.first.c_str(), this->name.second.c_str());
        else
            this->putLine("%s", this->name.second.c_str());
        break;
    case Ast_LiteralExpr::LiteralTypeString:
        this->putLine("%s", this->name.second.c_str());
        break;
    case Ast_LiteralExpr::LiteralTypeUserVar:
        this->putLine("@%s", this->name.second.c_str());
        break;
    case Ast_LiteralExpr::LiteralTypeIntNum:
        this->putLine("%d", this->int_var);
        break;
    case Ast_LiteralExpr::LiteralTypeApproxNum:
        this->putLine("%lf", this->float_var);
        break;
    case Ast_LiteralExpr::LiteralTypeBool:
        this->putLine(this->bool_var ? "true" : "false");
        break;
    case Ast_LiteralExpr::LiteralTypeCurTs:
        this->putLine("CURRENT TIMESTAMP(%d)", time(NULL));
        break;
    case Ast_LiteralExpr::LiteralTypeCurDate:
        this->putLine("CURRENT DATE");
        break;
    case Ast_LiteralExpr::LiteralTypeCurTime:
        this->putLine("CURRENT TIME");
        break;
    default:
        break;
    }
}

Ast_Expr Ast_LiteralExpr::eval() const {
    return Ast_LiteralExpr(0);
}

Ast_ArithmeticExpr::Ast_ArithmeticExpr(enum Ast_ArithmeticExpr::arithmetic_type arithmetic_type, Ast_Expr *expr)
    : arithmetic_type(arithmetic_type), inner_type(InnerTypeSingleOp), single_op(expr)
{
}

Ast_ArithmeticExpr::Ast_ArithmeticExpr(enum Ast_ArithmeticExpr::arithmetic_type arithmetic_type, 
    Ast_Expr *lhs, Ast_Expr *rhs)
    : arithmetic_type(arithmetic_type), inner_type(Ast_ArithmeticExpr::InnerTypeBinaryOp),
        lhs(lhs), rhs(rhs)
{
}

Ast_ArithmeticExpr::~Ast_ArithmeticExpr() {
    if (this->inner_type == Ast_ArithmeticExpr::InnerTypeSingleOp)
        delete this->single_op;
    else {
        delete this->lhs;
        delete this->rhs;
    }
}

const char * Ast_ArithmeticExpr::arithmeticTypeName(enum Ast_ArithmeticExpr::arithmetic_type arithmetic_type) {
    static const char names[22][32] = {
        "ADD",
        "SUB",
        "MUL",
        "DIV",
        "MOD",
        "NEG",
        "AND",
        "OR",
        "XOR",
        "BITOR",
        "BITAND",
        "BITXOR",
        "LEFT SHIFT",
        "RIGHT SHIFT",
        "NOT",
        "COMPARE EQUAL",
        "COMPARE NULL SAFE EQUAL",
        "COMPARE GREATER EQUAL",
        "COMPARE GREATER THAN",
        "COMPARE LESSER EQUAL",
        "COMPARE LESSER THAN",
        "COMPARE NOT EQUAL"
    };
    return names[arithmetic_type];
}

void Ast_ArithmeticExpr::illustrate() {
    this->putLine("%s Expr", this->arithmeticTypeName(this->arithmetic_type));

    this->incLevel();
    if (this->inner_type == Ast_ArithmeticExpr::InnerTypeSingleOp)
        this->single_op->illustrate();
    else {
        this->lhs->illustrate();
        this->rhs->illustrate();
    }
    this->decLevel();
}

Ast_Expr Ast_ArithmeticExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_CompareExpr::Ast_CompareExpr(enum Ast_CompareExpr::compare_type compare_type, 
    Ast_Expr *lhs, Ast_SelectStmt *rhs)
    : compare_type(compare_type), compare_subtype(Ast_CompareExpr::CompareSubTypeNone),
        lhs(lhs), rhs(rhs)
{
}

Ast_CompareExpr::Ast_CompareExpr(enum Ast_CompareExpr::compare_type compare_type, 
    enum Ast_CompareExpr::compare_subtype compare_subtype, Ast_Expr *lhs, Ast_SelectStmt *rhs)
    : compare_type(compare_type), compare_subtype(compare_subtype), lhs(lhs), rhs(rhs)
{
}

Ast_CompareExpr::~Ast_CompareExpr() {
    if (lhs) delete lhs;
    if (rhs) delete rhs;
}

const char * Ast_CompareExpr::compareTypeName(enum Ast_CompareExpr::compare_type compare_type) {
    static const char names[7][32] = {
        "COMPARE EQUAL",
        "COMPARE NULL SAFE EQUAL",
        "COMPARE GREATER EQUAL",
        "COMPARE GREATER THAN",
        "COMPARE LESSER EQUAL",
        "COMPARE LESSER THAN",
        "COMPARE NOT EQUAL"
    };
    return names[compare_type];
}

const char * Ast_CompareExpr::compareSubTypeName(enum Ast_CompareExpr::compare_subtype compare_subtype) {
    static const char names[4][32] = {
        "",
        "ANY",
        "SOME",
        "ALL",
    };
    return names[compare_subtype];
}

void Ast_CompareExpr::illustrate() {
    this->putLine("%s %s",
        this->compareTypeName(this->compare_type),
        this->compareSubTypeName(this->compare_subtype)
    );
    this->lhs->illustrate();
    this->rhs->illustrate();
}

Ast_Expr Ast_CompareExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_IsExpr::Ast_IsExpr(enum Ast_IsExpr::is_type is_type, Ast_Expr *lhs)
    : is_type(is_type), is_null(lhs)
{
}

Ast_IsExpr::Ast_IsExpr(enum Ast_IsExpr::is_type is_type, Ast_Expr *lhs, bool bool_var)
    : is_type(is_type), lhs(lhs), bool_var(bool_var)
{
}

Ast_IsExpr::~Ast_IsExpr() {
    switch (this->is_type)
    {
    case Ast_IsExpr::CompoundTypeIsNull:
    case Ast_IsExpr::CompoundTypeIsNotNull:
        delete this->is_null;
        break;
    case Ast_IsExpr::CompoundTypeIsBool:
    case Ast_IsExpr::CompoundTypeIsNotBool:
        delete this->lhs;
        break;
    default:
        break;
    }
}

void Ast_IsExpr::illustrate() {
    switch (this->is_type)
    {
    case Ast_IsExpr::CompoundTypeIsNull:
        this->putLine("IS NULL");
        this->incLevel();
        this->is_null->illustrate();
        this->decLevel();
    case Ast_IsExpr::CompoundTypeIsNotNull:
        this->putLine("IS NOT NULL");
        this->incLevel();
        this->is_null->illustrate();
        this->decLevel();
        break;
    case Ast_IsExpr::CompoundTypeIsBool:
        this->putLine("IS %s", this->bool_var ? "TRUE" : "FALSE");
        this->incLevel();
        this->lhs->illustrate();
        this->decLevel();
        break;
    case Ast_IsExpr::CompoundTypeIsNotBool:
        this->putLine("IS NOT %s", this->bool_var ? "TRUE" : "FALSE");
        this->incLevel();
        this->lhs->illustrate();
        this->decLevel();
        break;
    default:
        break;
    }
}

Ast_Expr Ast_IsExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_AsgnExpr::Ast_AsgnExpr(const char *name, Ast_Expr *expr)
    : name(name), expr(expr)
{
}

Ast_AsgnExpr::~Ast_AsgnExpr() {
    if (expr) delete expr;
}

void Ast_AsgnExpr::illustrate() {
    this->putLine("%s = ", this->name.c_str());
    this->incLevel();
    this->expr->illustrate();
    this->decLevel();
}

Ast_Expr Ast_AsgnExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_BetweenExpr::Ast_BetweenExpr(Ast_Expr *expr, Ast_Expr *low, Ast_Expr *high) 
    : expr(expr), low(low), high(high)
{
}
Ast_BetweenExpr::~Ast_BetweenExpr() {
    if (expr) delete expr;
    if (low) delete low;
    if (high) delete high;
}

void Ast_BetweenExpr::illustrate() {
    if (expr)
        this->expr->illustrate();
    this->putLine("BETWEEN");
    this->incLevel();
    this->low->illustrate();
    this->high->illustrate();
    this->decLevel();
}

Ast_Expr Ast_BetweenExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_InExpr::Ast_InExpr(enum Ast_InExpr::in_type in_type, Ast_Expr *expr, Ast_ValList *val_list)
    : in_type(in_type), inner_type(Ast_InExpr::InnerTypeOptWithValList), 
        expr(expr), val_list(val_list)
{
}

Ast_InExpr::Ast_InExpr(enum Ast_InExpr::in_type in_type, Ast_Expr *expr, Ast_SelectStmt *select)
    : in_type(in_type), inner_type(Ast_InExpr::InnerTypeOptWithSelect),
        expr(expr), select(select)
{
}

Ast_InExpr::~Ast_InExpr() {
    if (expr) delete expr;
    switch (this->inner_type)
    {
    case Ast_InExpr::InnerTypeOptWithValList:
        delete this->val_list;
        break;
    case Ast_InExpr::InnerTypeOptWithSelect:
        delete this->select;
        break;
    default:
        break;
    }
}

void Ast_InExpr::illustrate() {
    if (expr)
        this->expr->illustrate();
    
    switch (this->in_type)
    {
    case Ast_InExpr::CompoundTypeIn:
        this->putLine("IN");
        break;
    case Ast_InExpr::CompoundTypeNotIn:
        this->putLine("NOT IN");
        break;
    default:
        break;
    }
    
    this->incLevel();
    switch (this->inner_type)
    {
    case Ast_InExpr::InnerTypeOptWithValList:
        this->val_list->illustrate();
        break;
    case Ast_InExpr::InnerTypeOptWithSelect:
        this->select->illustrate();
        break;
    default:
        break;
    }
    this->decLevel();
}

Ast_Expr Ast_InExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_ExistExpr::Ast_ExistExpr(enum Ast_ExistExpr::exist_type exist_type, Ast_SelectStmt *stmt)
    : exist_type(exist_type), stmt(stmt)
{
}

Ast_ExistExpr::~Ast_ExistExpr() {
    if (stmt) delete stmt;
}

void Ast_ExistExpr::illustrate() {
    this->putLine(this->exist_type ? "EXISTS" : "NOT EXISTS");
    this->incLevel();
    this->stmt->illustrate();
    this->decLevel();
}

Ast_Expr Ast_ExistExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_RegularFunctionExpr::Ast_RegularFunctionExpr(const char *func_name, Ast_ValList *params)
    : func_name(func_name), params(params)
{
}

Ast_RegularFunctionExpr::~Ast_RegularFunctionExpr() {
    if (params) delete params;
}

void Ast_RegularFunctionExpr::illustrate() {
    this->putLine("%s()", this->func_name.c_str());
    this->incLevel();
    this->params->illustrate();
    this->decLevel();
}

Ast_Expr Ast_RegularFunctionExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_CountFuncExpr::Ast_CountFuncExpr(Ast_Expr *expr)
    : expr(expr)
{
}

Ast_CountFuncExpr::~Ast_CountFuncExpr() {
    if (expr) delete expr;
}

void Ast_CountFuncExpr::illustrate() {
    if (expr) {
        this->putLine("COUNT()");
        this->incLevel();
        this->expr->illustrate();
        this->decLevel();
    } else {
        this->putLine("COUNT(*)");
    }
}

Ast_Expr Ast_CountFuncExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_SubtringFuncExpr::Ast_SubtringFuncExpr(Ast_ValList *val_list)
    : inner_type(Ast_SubtringFuncExpr::InnerTypeOptWithValList), val_list(val_list)
{
}

Ast_SubtringFuncExpr::Ast_SubtringFuncExpr(Ast_Expr *str, Ast_Expr *begin, Ast_Expr *length)
    : inner_type(Ast_SubtringFuncExpr::InnerTypeOptWithExpr),
        str(str), begin(begin), length(length)
{
}

Ast_SubtringFuncExpr::~Ast_SubtringFuncExpr() {
    switch (this->inner_type)
    {
    case Ast_SubtringFuncExpr::InnerTypeOptWithExpr:
        if (this->str) delete this->str;
        if (this->begin) delete this->begin;
        if (this->length) delete this->length;
        break;
    case Ast_SubtringFuncExpr::InnerTypeOptWithValList:
        if (this->val_list) delete this->val_list;
        break;
    default:
        break;
    }
}

void Ast_SubtringFuncExpr::illustrate() {
    this->putLine("SUBSTR()");
    switch (this->inner_type)
    {
    case Ast_SubtringFuncExpr::InnerTypeOptWithExpr:
        if (this->str) this->str->illustrate();
        if (this->begin) this->begin->illustrate();
        if (this->length) this->length->illustrate();
        break;
    case Ast_SubtringFuncExpr::InnerTypeOptWithValList:
        if (this->val_list) this->val_list->illustrate();
        break;
    default:
        break;
    }
}

Ast_Expr Ast_SubtringFuncExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_TrimFuncExpr::Ast_TrimFuncExpr(Ast_ValList *val_list)
    : val_list(val_list), pattern(nullptr)
{
}

Ast_TrimFuncExpr::Ast_TrimFuncExpr(enum Ast_TrimFuncExpr::trim_ltb trim_ltb,
    Ast_Expr *pattern, Ast_ValList *val_list)
    : val_list(val_list), _trim_ltb(trim_ltb), pattern(pattern) 
{
}

Ast_TrimFuncExpr::~Ast_TrimFuncExpr() {
    if (this->val_list) delete this->val_list;
    if (this->pattern) delete this->pattern;
}

const char * Ast_TrimFuncExpr::trimLtbName(enum Ast_TrimFuncExpr::trim_ltb trim_ltb) {
    static const char names[3][32] = {
        "LEADING",
        "TRAILING",
        "BOTH"
    };
    return names[trim_ltb-1];
}

void Ast_TrimFuncExpr::illustrate() {
    this->putLine("TRIM()");
    this->incLevel();
    if (this->pattern) {
        this->putLine("%s", this->trimLtbName(this->_trim_ltb));
        this->pattern->illustrate();
    }
    this->val_list->illustrate();
    this->decLevel();
}

Ast_Expr Ast_TrimFuncExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_DateFuncExpr::Ast_DateFuncExpr(enum Ast_DateFuncExpr::date_func_type date_func_type, 
    Ast_Expr *expr, Ast_IntervalExp *interval_exp)
    : date_func_type(date_func_type), expr(expr), interval_exp(interval_exp)
{
}

Ast_DateFuncExpr::~Ast_DateFuncExpr() {
    if (expr) delete expr;
    if (interval_exp) delete interval_exp;
}

void Ast_DateFuncExpr::illustrate() {
    switch (this->date_func_type)
    {
    case Ast_DateFuncExpr::CompoundTypeFuncDateAdd:
        this->putLine("DATE_ADD()");
        break;
    case Ast_DateFuncExpr::CompoundTypeFuncDateSub:
        this->putLine("DATE_SUB()");
        break;
    default:
        break;
    }

    this->incLevel();
    this->expr->illustrate();
    this->interval_exp->illustrate();
    this->decLevel();
}

Ast_Expr Ast_DateFuncExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_CaseExpr::Ast_CaseExpr(Ast_Expr *expr, Ast_CaseList *case_list, Ast_Expr *_else)
    : expr(expr), case_list(case_list), _else(_else)
{
}

Ast_CaseExpr::~Ast_CaseExpr() {
    if (this->expr) delete this->expr;
    if (this->case_list) delete this->case_list;
    if (this->_else) delete this->_else;
}

void Ast_CaseExpr::illustrate() {
    this->putLine("CASE");
    this->incLevel();
    if (this->expr) this->expr->illustrate();
    if (this->case_list) this->case_list->illustrate();
    if (this->_else) this->_else->illustrate();
    this->decLevel();
}

Ast_Expr Ast_CaseExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_LikeExpr::Ast_LikeExpr(enum Ast_LikeExpr::like_type like_type, Ast_Expr *lhs, Ast_Expr *rhs)
    : like_type(like_type), lhs(lhs), rhs(rhs)
{
}

Ast_LikeExpr::~Ast_LikeExpr() {
    if (this->lhs) delete this->lhs;
    if (this->rhs) delete this->rhs; 
}

void Ast_LikeExpr::illustrate() {
    switch (this->like_type)
    {
    case Ast_LikeExpr::CompoundTypeLike:
        this->putLine("LIKE");
        break;
    case Ast_LikeExpr::CompoundTypeNotLike:
        this->putLine("NOT LIKE");
        break;
    default:
        break;
    }

    this->incLevel();
    if (this->lhs) this->lhs->illustrate();
    if (this->rhs) this->rhs->illustrate();
    this->decLevel();
}

Ast_Expr Ast_LikeExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_RegexpExpr::Ast_RegexpExpr(enum Ast_RegexpExpr::regexp_type regexp_type, Ast_Expr *lhs, Ast_Expr *rhs)
    : regexp_type(regexp_type), lhs(lhs), rhs(rhs)
{
}

Ast_RegexpExpr::~Ast_RegexpExpr() {
    if (this->lhs) delete this->lhs;
    if (this->rhs) delete this->rhs; 
}

void Ast_RegexpExpr::illustrate() {
    switch (this->regexp_type)
    {
    case Ast_RegexpExpr::CompoundTypeRegexp:
        this->putLine("REGEXP");
        break;
    case Ast_RegexpExpr::CompoundTypeNotRegexp:
        this->putLine("NOT REGEXP");
        break;
    default:
        break;
    }

    this->incLevel();
    if (this->lhs) this->lhs->illustrate();
    if (this->rhs) this->rhs->illustrate();
    this->decLevel();
}

Ast_Expr Ast_RegexpExpr::eval() const {
    return Ast_LiteralExpr(0);
}


Ast_BinaryExpr::Ast_BinaryExpr(Ast_Expr *expr)
    : expr(expr)
{
}

Ast_BinaryExpr::~Ast_BinaryExpr() {
    if (this->expr) delete this->expr;
}

void Ast_BinaryExpr::illustrate() {
    this->putLine("BINARY");
    this->incLevel();
    if (this->expr) this->expr->illustrate();
    this->decLevel();
}

Ast_Expr Ast_BinaryExpr::eval() const {
    return Ast_LiteralExpr(0);
}
