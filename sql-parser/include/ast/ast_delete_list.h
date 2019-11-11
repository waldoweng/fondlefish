#ifndef FONDLE_FISH_MYSQL_AST_DELETE_LIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_DELETE_LIST_H_INCLUDED

#include <string>
#include <vector>
#include "ast_base.h"

class Ast_DeleteList : public Ast_Base {
public:
    explicit Ast_DeleteList(std::string name);
    virtual ~Ast_DeleteList();

public:
    virtual void illustrate() const;

public:
    void addName(const char *name);

private:
    std::vector<std::string> names;
};

#endif