#include "ast_opt_on_dup_update.h"
#include "ast_insert_asgn_list.h"

Ast_OptOnDupUpdate::Ast_OptOnDupUpdate(Ast_InsertAsgnList *insert_asgn_list) 
    : insert_asgn_list(insert_asgn_list)
{
}

Ast_OptOnDupUpdate::~Ast_OptOnDupUpdate() {
    if (insert_asgn_list) delete insert_asgn_list;
}

void Ast_OptOnDupUpdate::illustrate() {
    if (this->insert_asgn_list) {
        this->putLine("ON DUPLICATE UPDATE");
        this->incLevel();
        this->insert_asgn_list->illustrate();
        this->decLevel();
    }
}