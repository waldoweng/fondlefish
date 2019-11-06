#include "include/ast/ast_base.h"

int Ast_Base::next_ast_id = 0;

Ast_Base::Ast_Base() : node_id(next_ast_id++) {}

Ast_Base::~Ast_Base() {}

int Ast_Base::getID() const {return node_id;}
