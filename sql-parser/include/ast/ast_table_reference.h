#ifndef FONDLE_FISH_MYSQL_AST_TABLE_REFERENCE_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_TABLE_REFERENCE_H_INCLUDED

#include <string>
#include <vector>
#include "ast_base.h"

class Ast_IndexHint;
class Ast_TableSubquery;

class Ast_TableFactor : public Ast_Base {
public:
    explicit Ast_TableFactor(std::string name, std::string alias, Ast_IndexHint *index_hint);
    explicit Ast_TableFactor(std::string tablename, std::string name, std::string alias,
        Ast_IndexHint *index_hint);
    explicit Ast_TableFactor(Ast_TableSubquery *sub_query, std::string name);
    explicit Ast_TableFactor(Ast_TableReferences *references);
    virtual ~Ast_TableFactor();

public:
    virtual void illustrate() const;

private:
};

class Ast_JoinCondition;
class Ast_Expr;
class Ast_TableReference;

class Ast_JoinTable : public Ast_Base {
public:
    enum {
        JOIN_TABLE_INNER = 0,
        JOIN_TABLE_CROSS = 1,
        JOIN_TABLE_LEFT_OUTER = 2,
        JOIN_TABLE_RIGHT_OUTER = 3
    };

public:
    explicit Ast_JoinTable(Ast_TableReference *reference, uint32_t join_type, Ast_TableFactor *table_factor, Ast_JoinCondition *join_condition);
    explicit Ast_JoinTable(Ast_TableReference *reference, Ast_TableFactor *table_factor);
    explicit Ast_JoinTable(Ast_TableReference *reference, uint32_t join_type, Ast_TableFactor *table_factor, Ast_Expr *expr);
    explicit Ast_JoinTable(Ast_TableReference *reference, uint32_t join_type, Ast_TableFactor *table_factor);
    virtual ~Ast_JoinTable();

public:
    virtual void illustrate() const;

private:
};

class Ast_TableReference : public Ast_Base {
public:
    explicit Ast_TableReference(Ast_TableFactor *table_factor);
    explicit Ast_TableReference(Ast_JoinTable *join_table);
    virtual ~Ast_TableReference();

public:
    virtual void illustrate() const;

private:
    Ast_TableFactor *table_factor;
    Ast_JoinTable *join_table;
};

class Ast_TableReferences : public Ast_Base{
public:
    explicit Ast_TableReferences(Ast_TableReference *reference);
    virtual ~Ast_TableReferences();

public:
    virtual void illustrate() const;

public:
    void addTableReference(Ast_TableReference *reference);

private:
    std::vector<Ast_TableReference *> references;
};

#endif