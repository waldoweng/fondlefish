#include "ast_table_reference.h"
#include "ast_expr.h"
#include "ast_select_stmt.h"
#include "ast_column_list.h"

Ast_IndexList::Ast_IndexList(const char *name) {
    names.push_back(name);
}

Ast_IndexList::~Ast_IndexList() {}

void Ast_IndexList::illustrate() {
    std::string tmp;
    for (std::vector<std::string>::iterator it = names.begin();
        it != names.end();
        it ++)
    {
        tmp += (*it + ", ");
    }

    this->putLine(tmp.c_str());
}

void Ast_IndexList::addName(const char *name) {
    names.push_back(name);
}

Ast_IndexHint::Ast_IndexHint(bool use, bool for_join, Ast_IndexList *index_list) 
    : use(use), for_join(for_join), index_list(index_list)
{
}

Ast_IndexHint::~Ast_IndexHint() {
    if (index_list) delete index_list;
}

void Ast_IndexHint::illustrate() {
    this->putLine("INDEX HINT %s %s", 
        this->use ? " USE " : "",
        this->for_join ? " FOR JOIN " : ""
    );
    this->incLevel();
    this->index_list->illustrate();
    this->decLevel();
}

Ast_JoinCondition::Ast_JoinCondition(Ast_Expr *expr) 
    : expr(expr), column_list(NULL)
{
}

Ast_JoinCondition::Ast_JoinCondition(Ast_ColumnList *column_list)
    : expr(NULL), column_list(column_list)
{
}

Ast_JoinCondition::~Ast_JoinCondition() {
    if (expr) delete expr;
    if (column_list) delete column_list;
}

void Ast_JoinCondition::illustrate() {
    this->putLine("JOIN ON");
    this->incLevel();
    if (expr) this->expr->illustrate();
    if (column_list) this->column_list->illustrate();
    this->decLevel();
}


Ast_TableSubquery::Ast_TableSubquery(Ast_SelectStmt *select_stmt)
    : select_stmt(select_stmt)
{
}

Ast_TableSubquery::~Ast_TableSubquery()
{
    if (select_stmt) delete select_stmt;
}

void Ast_TableSubquery::illustrate() {
    this->putLine("SUBQUERY");
    this->incLevel();
    this->select_stmt->illustrate();
    this->decLevel();
}

Ast_TableFactor::TableFactorNormal::TableFactorNormal(const char *database_name, 
    const char *name, const char *alias, Ast_IndexHint *index_hint)
    : database_name(database_name), name(name), alias(alias), index_hint(index_hint)
{
}

Ast_TableFactor::TableFactorNormal::~TableFactorNormal()
{
    if (this->index_hint) delete index_hint;
}

Ast_TableFactor::TableFactorSubquery::TableFactorSubquery(Ast_TableSubquery *subquery, const char *name)
    : subquery(subquery), name(name)
{
}

Ast_TableFactor::TableFactorSubquery::~TableFactorSubquery() 
{
    if (this->subquery) delete this->subquery;
}

Ast_TableFactor::TableFactorReferences::TableFactorReferences(Ast_TableReferences *references)
    : references(references)
{
}

Ast_TableFactor::TableFactorReferences::~TableFactorReferences()
{
    if (this->references) delete this->references;
}

Ast_TableFactor::TableFactor::TableFactor(Ast_TableFactor::TableFactorNormal *normal)
    : normal(normal)
{
}

Ast_TableFactor::TableFactor::TableFactor(Ast_TableFactor::TableFactorSubquery *subquery)
    : subquery(subquery)
{
}

Ast_TableFactor::TableFactor::TableFactor(Ast_TableFactor::TableFactorReferences *references)
    : references(references)
{
}

Ast_TableFactor::TableFactor::~TableFactor() {}

Ast_TableFactor::Ast_TableFactor(const char *name, const char *alias, Ast_IndexHint *index_hint)
    : factor_type(Ast_TableFactor::FACTOR_TYPE_NORMAL),
        factor(new TableFactorNormal("", name, alias ? alias : "", index_hint))
{
}

Ast_TableFactor::Ast_TableFactor(const char *database_name, const char *name, 
    const char *alias, Ast_IndexHint *index_hint)
    : factor_type(Ast_TableFactor::FACTOR_TYPE_NORMAL),
        factor(new TableFactorNormal(database_name, name, alias ? alias : "", index_hint))
{
}

Ast_TableFactor::Ast_TableFactor(Ast_TableSubquery *subquery, const char *name)
    : factor_type(Ast_TableFactor::FACTOR_TYPE_SUBQUERY),
        factor(new TableFactorSubquery(subquery, name))
{
}

Ast_TableFactor::Ast_TableFactor(Ast_TableReferences *references)
    : factor_type(Ast_TableFactor::FACTOR_TYPE_REFERENCES),
        factor(new TableFactorReferences(references))
{
}

Ast_TableFactor::~Ast_TableFactor() {
    switch (this->factor_type)
    {
    case Ast_TableFactor::FACTOR_TYPE_NORMAL:
        delete this->factor.normal;
        break;
    case Ast_TableFactor::FACTOR_TYPE_SUBQUERY:
        delete this->factor.subquery;
        break;
    case Ast_TableFactor::FACTOR_TYPE_REFERENCES:
        delete this->factor.references;
        break;
    default:
        break;
    }
}

void Ast_TableFactor::illustrate() {
    switch (this->factor_type)
    {
    case Ast_TableFactor::FACTOR_TYPE_NORMAL:
        this->putLine("TABLE %s.%s as %s", 
            this->factor.normal->database_name.c_str(), 
            this->factor.normal->name.c_str(),
            this->factor.normal->alias.c_str());
        this->incLevel();
        if (this->factor.normal->index_hint) this->factor.normal->index_hint->illustrate();
        this->decLevel();
        break;
    case Ast_TableFactor::FACTOR_TYPE_SUBQUERY:
        this->putLine("SUBQUERY %s", this->factor.subquery->name.c_str());
        this->incLevel();
        this->factor.subquery->subquery->illustrate();
        this->decLevel();
        break;
    case Ast_TableFactor::FACTOR_TYPE_REFERENCES:
        this->putLine("TABLE REFERENCES");
        this->incLevel();
        this->factor.references->references->illustrate();
        this->decLevel();
    default:
        break;
    }
}

Ast_JoinTable::Ast_JoinTable(Ast_TableReference *reference, enum Ast_JoinTable::join_type join_type, 
    Ast_TableFactor *table_factor, Ast_JoinCondition *join_condition)
    : reference(reference), join_type(join_type), table_factor(table_factor), 
        join_condition(join_condition)
{
}

Ast_JoinTable::Ast_JoinTable(Ast_TableReference *reference, Ast_TableFactor *table_factor)
    : reference(reference), join_type(Ast_JoinTable::JOIN_TABLE_STRAIGHT_JOIN),
        table_factor(table_factor), join_condition(nullptr)
{
}

Ast_JoinTable::Ast_JoinTable(Ast_TableReference *reference, enum Ast_JoinTable::join_type join_type, 
    Ast_TableFactor *table_factor, Ast_Expr *expr)
    : reference(reference), join_type(join_type), table_factor(table_factor), 
        join_condition(new Ast_JoinCondition(expr))
{
}

Ast_JoinTable::Ast_JoinTable(Ast_TableReference *reference, enum Ast_JoinTable::join_type join_type, 
    Ast_TableFactor *table_factor)
    : reference(reference), join_type(join_type), table_factor(table_factor), join_condition(nullptr)
{
}

Ast_JoinTable::~Ast_JoinTable() {
    if (reference) delete reference;
    if (table_factor) delete table_factor;
    if (join_condition) delete join_condition;
}

const char * Ast_JoinTable::joinTypeName(enum Ast_JoinTable::join_type join_type) {
    static const char names[5][32] = {
        "INNER",
        "CROSS",
        "LEFT OUTER",
        "RIGHT OUTER",
        "STRAIGHT"
    };
    return names[join_type];
}

void Ast_JoinTable::illustrate() {
    this->putLine("%s JOIN", this->joinTypeName(this->join_type));
    this->incLevel();
    this->reference->illustrate();
    this->table_factor->illustrate();
    this->join_condition->illustrate();
    this->decLevel();
}

Ast_TableReference::Ast_TableReference(Ast_TableFactor *table_factor)
    : table_factor(table_factor), join_table(nullptr)
{
}

Ast_TableReference::Ast_TableReference(Ast_JoinTable *join_table)
    : table_factor(nullptr), join_table(join_table)
{
}

Ast_TableReference::~Ast_TableReference()
{
    if (this->table_factor) delete this->table_factor;
    if (this->join_table) delete this->join_table;
}

void Ast_TableReference::illustrate() {
    this->putLine("TABLE REFERENCE");
    this->incLevel();
    if (this->table_factor) this->table_factor->illustrate();
    if (this->join_table) this->join_table->illustrate();
    this->decLevel();
}

Ast_TableReferences::Ast_TableReferences(Ast_TableReference *reference) {
    this->references.push_back(reference);
}

Ast_TableReferences::~Ast_TableReferences() {
    for (std::vector<Ast_TableReference *>::iterator it = this->references.begin();
        it != this->references.end();
        it ++)
    {
        if (*it) delete (*it);
    }
}

void Ast_TableReferences::addTableReference(Ast_TableReference *reference) {
    this->references.push_back(reference);
}

void Ast_TableReferences::illustrate() {
    for (std::vector<Ast_TableReference *>::iterator it = this->references.begin();
        it != this->references.end();
        it ++)
    {
        if (*it) (*it)->illustrate();
    }
}
