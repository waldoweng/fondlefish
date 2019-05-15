#ifndef FONDLE_FISH_MYSQL_AST_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_H_INCLUDED


class Ast_Stmt;
class Ast_SelectStmt;
class Ast_Expr;
class Ast_ValList;
class Ast_OptValList;
class Ast_TrimLtb;

class Ast_Stmt {
public:
    const static unsigned char SELECT_STMT = 0;
    const static unsigned char UPDATE_STMT = 1;
    const static unsigned char DELETE_STMT = 2;
    const static unsigned char INSERT_STMT = 3;
    const static unsigned char CREATE_STMT = 4;
public:
    Ast_Stmt(Ast_SelectStmt *stmt);
    Ast_Stmt(Ast_UpdateStmt *stmt);
    Ast_Stmt(Ast_DeleteStmt *stmt);
    Ast_Stmt(Ast_InsertStmt *stmt);
    Ast_Stmt(Ast_CreateStmt *stmt);
    ~Ast_Stmt();
private:
    int m_stmt_type;
    union _stmt
    {
        Ast_SelectStmt *select_stmt;
        Ast_UpdateStmt *update_stmt;
        Ast_DeleteStmt *delete_stmt;
        Ast_InsertStmt *insert_stmt;
        Ast_CreateStmt *create_stmt;
    } m_stmt;
};

class Ast_StmtList {
public:
    Ast_StmtList(Ast_Stmt *stmt);
    Ast_StmtList(Ast_StmtList *stmt_list, Ast_Stmt *stmt);
    ~Ast_StmtList();
};

class Ast_ValList {
public:
    Ast_ValList(Ast_Expr *expr);
    Ast_ValList(Ast_Expr *expr, Ast_ValList *val_list);
};

class Ast_OptValList {
    Ast_OptValList(Ast_ValList *val_list);
};


class Ast_TrimTlb {

};

class Ast_IntervalExp {

};

class Ast_CaseList {

};

class Ast_Expr {
public:
    const static int NAME = 0; // NAME
    const static int NAME2 = 1; // NAME . NAME
    const static int USERVAR = 2; // USERVAR
    const static int STRING = 3; // STRING
    const static int INTNUM = 4;
    const static int APPROXNUM = 5;
    const static int BOOL = 6;

    const static int ADD = 10;
    const static int MINUS = 11;
    const static int MUL = 12;
    const static int DIV = 13;
    const static int MOD = 14;
    const static int NEG = 15;
    const static int AND = 16;
    const static int OR = 17;
    const static int XOR = 18;
    const static int BITOR = 19;
    const static int BITAND = 20;
    const static int BITXOR = 21;
    const static int LEFT_SHIFT = 22;
    const static int RIGHT_SHIFT = 23;
    const static int NOT = 24;

    const static int CMP_BASE = 30;

    const static int IS_NULL = 200;
    const static int IS_NOT_NULL = 201;
    const static int IS_BOOL = 202;
    const static int IS_NOT_BOOL = 203;

public:
    Ast_Expr(const char *strval, int type);
    Ast_Expr(const char *strval1, const char *strval2, int type);
    Ast_Expr(int intval, int type);
    Ast_Expr(double floatval, int type);
    Ast_Expr(int type);

    Ast_Expr(Ast_Expr *expr, int type);
    Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, int type);
    Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, Ast_Expr *expr3, int type);

    Ast_Expr(Ast_ValList *val_list);
    Ast_Expr(Ast_Expr *expr, int bool_val, int type);
    Ast_Expr(const char *strval, Ast_Expr *expr, int type);
    Ast_Expr(Ast_Expr *expr, Ast_ValList *val_list, int type);

    Ast_Expr(Ast_SelectStmt *stmt, int type);
    Ast_Expr(Ast_Expr *expr, Ast_SelectStmt *stmt, int type);

    Ast_Expr(const char *strval, Ast_OptValList *opt_val_list, int type);
    Ast_Expr(Ast_TrimLtb *trim_ltb, Ast_Expr *expr, Ast_ValList *val_list);
    Ast_Expr(Ast_Expr *expr, Ast_IntervalExp *interval_expr, int type);
    Ast_Expr(Ast_Expr *expr, Ast_CaseList *case_list, int type);
    Ast_Expr(Ast_Expr *expr1, Ast_Expr *expr2, Ast_CaseList *case_list, int type);
};

class Ast_SelectOpts {

};

class Ast_SelectExprList {

};

class Ast_TableReferences {

};

class Ast_OptWhere {

};

class Ast_OptGroupBy {

};

class Ast_OptHaving {

};

class Ast_OptOrderBy {

};

class Ast_OptLimit {

};

class Ast_OptIntoList {

};

class Ast_SelectStmt {
public:
    Ast_SelectStmt(Ast_SelectOpts *select_opts, Ast_SelectExprList *select_expr_list);
    Ast_SelectStmt(Ast_SelectOpts *select_opts, Ast_SelectExprList *select_expr_list,
        Ast_TableReferences *table_references, Ast_OptWhere *opt_where, Ast_OptGroupBy *opt_groupby,
        Ast_OptHaving *opt_having, Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit,
        Ast_OptIntoList *opt_into_list);
};

class Ast_DeleteOpts {

};

class Ast_DeleteList {

};

class Ast_DeleteStmt {
public:
    Ast_DeleteStmt(Ast_DeleteOpts *delete_opts, const char *name, Ast_OptWhere *opt_where,
        Ast_OptOrderBy *opt_orderby, Ast_OptLimit *opt_limit);
    Ast_DeleteStmt(Ast_DeleteOpts *delete_opts, Ast_DeleteList *delete_list, 
        Ast_TableReferences *table_references, Ast_OptWhere *opt_where, int type);
};

class Ast_InsertOpts {

};

class Ast_OptInto {

};

class Ast_OptColNames {

};

class Ast_OptInsertValList {

};

class Ast_OptOnDupUpdate {

};

class Ast_InsertAsgnList {

};

class Ast_InsertStmt {
public:
    Ast_InsertStmt(Ast_InsertOpts *insert_opts, Ast_OptInto *opt_into, Ast_OptColNames *opt_col_names,
        Ast_OptInsertValList *insert_val_list, Ast_OptOnDupUpdate *opt_dupupdate);
    Ast_InsertStmt(Ast_InsertOpts *insert_opts, Ast_OptInto *opt_into, Ast_InsertAsgnList *insert_asgn_list,
        Ast_OptOnDupUpdate *opt_ondupupdate);
    Ast_InsertStmt(Ast_InsertOpts *insert_opts, Ast_OptInto *opt_into, Ast_OptColNames *opt_col_names,
        Ast_SelectStmt *select_stmt, Ast_OptOnDupUpdate *opt_ondupupdate);
};

class Ast_ReplaceStmt {

};


class Ast_UpdateStmt {

};

class Ast_CreateStmt {

};

#endif