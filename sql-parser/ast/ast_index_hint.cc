#include "ast_index_hint.h"

Ast_IndexList::Ast_IndexList(const char *name) {
    names.push_back(name);
}

Ast_IndexList::~Ast_IndexList() {}

void Ast_IndexList::illustrate() {
    std::string tmp;
    for (std::vector<std::string>::iterator it = names.begin();
        it != names.end();
        it ++)
    {
        tmp += (*it + ", ");
    }

    this->putLine(tmp.c_str());
}

void Ast_IndexList::addName(const char *name) {
    names.push_back(name);
}

Ast_IndexHint::Ast_IndexHint(bool use, bool for_join, Ast_IndexList *index_list) 
    : use(use), for_join(for_join), index_list(index_list)
{
}

Ast_IndexHint::~Ast_IndexHint() {
    if (index_list) delete index_list;
}

void Ast_IndexHint::illustrate() {
    this->putLine("INDEX HINT %s %s", 
        this->use ? " USE " : "",
        this->for_join ? " FOR JOIN " : ""
    );
    this->incLevel();
    this->index_list->illustrate();
    this->decLevel();
}