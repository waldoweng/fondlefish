#ifndef FONDLE_FISH_MYSQL_AST_OPT_ON_DUP_UPDATE_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_ON_DUP_UPDATE_H_INCLUDED

#include "ast_base.h"

class Ast_InsertAsgnList;

class Ast_OptOnDupUpdate : public Ast_Base {
public:
    explicit Ast_OptOnDupUpdate(Ast_InsertAsgnList *insert_asgn_list);
    virtual ~Ast_OptOnDupUpdate();

public:
    virtual void illustrate();

private:
    Ast_InsertAsgnList *insert_asgn_list;
};

#endif