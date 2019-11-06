#ifndef FONDLE_FISH_MYSQL_AST_UPDATE_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_UPDATE_STMT_H_INCLUDED

#include <cstdint>
#include <string>
#include <vector>
#include "ast_base.h"

class Ast_Expr;
class Ast_TableReferences;
class Ast_OptWhere;
class Ast_OptOrderBy;
class Ast_OptLimit;

class Ast_UpdateAsgnList : public Ast_Base {
public:
    struct Ast_UpdateAsgn {
    public:
        Ast_UpdateAsgn();
        ~Ast_UpdateAsgn();
    public:
        std::string tablename;
        std::string name;
        Ast_Expr *expr;
    };
public:
    Ast_UpdateAsgnList(std::string name, Ast_Expr *expr);
    Ast_UpdateAsgnList(std::string tablename, std::string name, Ast_Expr *expr);
    ~Ast_UpdateAsgnList();

public:
    virtual void illustrate() const;

public:
    void AddUpdateAsgn(std::string name, Ast_Expr *expr);
    void AddUpdateAsgn(std::string tablename, std::string name, Ast_Expr *expr);

private:
    std::vector<Ast_UpdateAsgn> update_asgn_list;
};

class Ast_UpdateStmt : public Ast_Base {
public:
    const static uint32_t LOW_PRIORITY = 1;
    const static uint32_t IGNORE = (1 << 1);
public:
    Ast_UpdateStmt(uint32_t update_opts, Ast_TableReferences *table_reference,
        Ast_UpdateAsgnList *update_asgn_list, Ast_OptWhere *opt_where,
        Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit);
    Ast_UpdateStmt(uint32_t update_opts);
    virtual ~Ast_UpdateStmt();
public:
public:
private:

};

#endif