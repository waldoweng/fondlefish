#include <cstdio>
#include <cstdarg>
#include "ast_base.h"

int Ast_Base::next_ast_id = 0;
int Ast_Base::level = 0;

Ast_Base::Ast_Base() : node_id(next_ast_id++) {}

Ast_Base::~Ast_Base() {}

int Ast_Base::getID() const {return node_id;}

int Ast_Base::getLevel() const { return level; }
void Ast_Base::incLevel() { level ++; }
void Ast_Base::decLevel() { level --; }

void Ast_Base::putLine(const char *fmt, ...) 
{
    for (int i = 0; i < this->getLevel(); i++)
        putchar('\t');
    
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
    
    putchar('\n');
}
