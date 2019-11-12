#include <cstdio>
#include "ast_column_list.h"

Ast_ColumnList::Ast_ColumnList(const char *name) {
    names.push_back(name);
}

Ast_ColumnList::~Ast_ColumnList() {}

void Ast_ColumnList::addName(const char *name) {
    names.push_back(name);
}

void Ast_ColumnList::illustrate() {
    for (int i = 0; i < this->getLevel(); i++)
        printf("\t");
    
    printf("ColumnList: [");
    for (std::vector<std::string>::iterator it = names.begin();
        it != names.end();
        it ++)
    {
        printf("%s ", it->c_str());
    }
    printf("]\n");
}