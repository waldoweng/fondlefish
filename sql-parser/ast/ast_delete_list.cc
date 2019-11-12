#include <cstdio>
#include "ast_delete_list.h"

Ast_DeleteList::Ast_DeleteList(const char *name) {
    names.push_back(name);
}

Ast_DeleteList::~Ast_DeleteList() {}

void Ast_DeleteList::illustrate() {
    this->putLine("DeleteList [");
    
    std::string tmp;
    for (std::vector<std::string>::iterator it = names.begin();
        it != names.end();
        it ++)
        tmp += (*it + ' ');
    
    this->putLine(tmp.c_str());

    this->putLine("]");
}

void Ast_DeleteList::addName(const char *name) {
    names.push_back(name);
}