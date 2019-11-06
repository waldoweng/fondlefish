#ifndef FONDLE_FISH_MYSQL_AST_OPT_VALLIST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_OPT_VALLIST_H_INCLUDED

#include "ast_base.h"

class Ast_ValList;

class Ast_OptValList {
    Ast_OptValList(Ast_ValList *val_list);
};

#endif