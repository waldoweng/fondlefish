#ifndef FONDLE_FISH_MYSQL_AST_TABLE_REFERENCE_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_TABLE_REFERENCE_H_INCLUDED

#include <string>
#include <vector>
#include "ast_base.h"

class Ast_IndexHint;
class Ast_TableSubQuery;

class Ast_TableFactor : public Ast_Base {
public:
    Ast_TableFactor(std::string name, std::string alias, Ast_IndexHint *index_hint);
    Ast_TableFactor(std::string tablename, std::string name, std::string alias,
        Ast_IndexHint *index_hint);
    Ast_TableFactor(Ast_TableSubQuery *sub_query, std::string name);
    Ast_TableFactor(Ast_TableReferences *references);
    ~Ast_TableFactor();

public:
    virtual void illustrate() const;

private:
};

class Ast_JoinCondition;
class Ast_Expr;

class Ast_JoinTable : public Ast_Base {
public:
    const static uint32_t INNER = 0;
    const static uint32_t CROSS = 1;
    const static uint32_t LEFT_OUTER = 2;
    const static uint32_t RIGHT_OUTER = 3;

public:
    Ast_JoinTable(Ast_TableReference *reference, uint32_t join_type, Ast_TableFactor *table_factor, Ast_JoinCondition *opt_join_condition);
    Ast_JoinTable(Ast_TableReference *reference, Ast_TableFactor *table_factor);
    Ast_JoinTable(Ast_TableReference *reference, Ast_TableFactor *table_factor, Ast_Expr *expr);
    Ast_JoinTable(Ast_TableReference *reference, uint32_t join_type, Ast_TableFactor *table_factor, Ast_JoinCondition *join_condition);
    Ast_JoinTable(Ast_TableReference *reference, uint32_t join_type, Ast_TableFactor *table_factor);
    virtual ~Ast_JoinTable();

public:
    virtual void illustrate() const;

private:
};

class Ast_TableReference : public Ast_Base {
public:
    Ast_TableReference(Ast_TableFactor *table_factor);
    Ast_TableReference(Ast_JoinTable *join_table);
    virtual ~Ast_TableReference();

public:
    virtual void illustrate() const;

private:
    Ast_TableFactor *table_factor;
    Ast_JoinTable *join_table;
};

class Ast_TableReferences : public Ast_Base{
public:
    Ast_TableReferences(Ast_TableReference *reference);
    virtual ~Ast_TableReferences();

public:
    virtual void illustrate() const;

public:
    void addTableReference(Ast_TableReference *reference);

private:
    std::vector<Ast_TableReference *> references;
};

#endif