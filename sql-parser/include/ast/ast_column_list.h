#ifndef FONDLE_FISH_MYSQL_AST_OPT_LIMIT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_LIMIT_H_INCLUDED

#include <string>
#include <vector>
#include "ast_base.h"

class Ast_ColumnList : public Ast_Base{
public:
    Ast_ColumnList(std::string *name);
    ~Ast_ColumnList();

public:
    virtual void illustrate() const;

public:
    void addName(std::string);

private:
    std::vector<std::string> names;
};

#endif