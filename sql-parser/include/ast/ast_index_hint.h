#ifndef FONDLE_FISH_MYSQL_AST_INDEX_HINT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_INDEX_HINT_H_INCLUDED

#include <string>
#include <vector>
#include "ast_base.h"

class Ast_IndexList : public Ast_Base {
public:
    explicit Ast_IndexList(const char *name);
    virtual ~Ast_IndexList();

public:
    virtual void illustrate();

public:
    void addName(const char *name);

private:
    std::vector<std::string> names;
};

class Ast_IndexHint : public Ast_Base {
public:
    explicit Ast_IndexHint(bool use, bool for_join, Ast_IndexList *index_list);
    virtual ~Ast_IndexHint();

public:
    virtual void illustrate();

private:
    bool use;
    bool for_join;
    Ast_IndexList *index_list;
};

#endif