#ifndef FONDLE_FISH_MYSQL_AST_CREATE_TABLE_STMT_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_CREATE_TABLE_STMT_H_INCLUDED

#include <map>
#include <string>
#include <vector>
#include "ast_base.h"

class Ast_ColumnList;
class Ast_SelectStmt;

class Ast_OptCSC {
public:
    enum csc_type {
        CHARSET = 0,
        COLLATE = 1
    };
public:
    Ast_OptCSC(csc_type csc_type, std::string value);
    virtual ~Ast_OptCSC();

private:
    csc_type csc_type;
    std::string value;
};

class Ast_EnumList : public Ast_Base {
public:
    Ast_EnumList(std::string);
    virtual ~Ast_EnumList();

public:
    virtual void illustrate() const;

public:
    void addEnum(std::string);

private:
    std::vector<std::string> enum_list;
};

class Ast_DataType : public Ast_Base {
public:
    enum data_type {
        BIT         = 0x00000001,
        TINYINT     = 0x00000002,
        SAMLLINT    = 0x00000004,
        MEDIUMINT   = 0x00000008,
        INTEGER     = 0x00000010,
        BIGINT      = 0x00000020,
        REAL        = 0x00000040,
        DOUBLE      = 0x00000080,
        FLOAT       = 0x00000100,
        DECIMAL     = 0x00000200,
        DATE        = 0x00000400,
        TIME        = 0x00000800,
        TIMESTAMP   = 0x00001000,
        DATETIME    = 0x00002000,
        YEAR        = 0x00004000,
        CHAR        = 0x00008000,
        VARCHAR     = 0x00010000,
        BINARY      = 0x00020000,
        VARBINARY   = 0x00040000,
        TINYBLOB    = 0x00080000,
        BLOB        = 0x00100000,
        MEDIUMBLOB  = 0x00200000,
        LONGBLOB    = 0x00400000,
        TINYTEXT    = 0x00800000,
        TEXT        = 0x01000000,
        MEDIUMTEXT  = 0x02000000,
        LONGTEXT    = 0x04000000,
        ENUM        = 0x08000000,
        SET         = 0x10000000
    };

    struct NumericType {
        uint32_t length;
        bool unsigned_flag;
        bool zerofill_flag;
    };

    struct StringType {
        uint32_t length;
        bool binary_flag;
        std::string charset;
        std::string collate;
    };

    struct CompondType {
        Ast_EnumList *enum_list;
        std::string charset;
        std::string collate;
    };

public:
    Ast_DataType(data_type data_type);
    Ast_DataType(data_type data_type, uint32_t length, bool unsigned_flag, bool zerofill_flag);
    Ast_DataType(data_type data_type, uint32_t length, bool binary_flag, Ast_OptCSC *opt_csc);
    Ast_DataType(data_type data_type, Ast_EnumList *enum_list, Ast_OptCSC *opt_csc);
    virtual ~Ast_DataType();

public:
    virtual void illustrate() const;

private:
    data_type data_type;
    union _type {
        NumericType numeric;
        StringType str;
        CompondType compond;
    } type_detail;
};

class Ast_ColumnAttrs : public Ast_Base {
public:
    enum mask{
        NOT_NULL            = 0x0001,
        DEFAULT_STRING      = 0x0002,
        DEFAULT_INTNUM      = 0x0004,
        DEFAULT_APPROXNUM   = 0x0008,
        DEFAULT_BOOL        = 0x0010,
        AUTO_INCREMENT      = 0x0020,
        UNIQ                = 0x0040,
        UNIQ_KEY            = 0x0080,
        PRIMARY_KEY         = 0x0100,
        INDEX_KEY           = 0x0200,
        COMMENT             = 0x0400
    };

    union _attr {
        std::string str_attr;
        uint32_t int_attr;
        double float_attr;
        Ast_ColumnList *column_list;
    };

public:
    Ast_ColumnAttrs();
    virtual ~Ast_ColumnAttrs();

public:
    virtual void illustrate() const;

public:
    void addAttr(mask mask);
    void addAttr(mask mask, uint32_t attr);
    void addAttr(mask mask, double attr);
    void addAttr(mask mask, std::string attr);
    void addAttr(mask mask, bool attr);
    void addAttr(mask mask, Ast_ColumnList *column_list);

private:
    uint32_t attr_mask; 
    std::map<mask, Ast_ColumnAttrs::_attr> attrs;
};

class Ast_CreateDefinition : public Ast_Base {
public:
    enum key_type {
        KEY = 0,
        PRIMARY_KEY = 1,
        FULLTEXT_KEY = 2
    };

public:
    Ast_CreateDefinition(key_type type, Ast_ColumnList *column_list);
    Ast_CreateDefinition(std::string name, Ast_DataType data_type, Ast_ColumnAttrs *column_attr);
    virtual ~Ast_CreateDefinition();

public:
    virtual void illustrate() const;

private:

};

class Ast_CreateColList : public Ast_Base {
public:
    Ast_CreateColList(Ast_CreateDefinition *create_definition);
    virtual ~Ast_CreateColList();

public:
    virtual void illustrate() const;

public:
    void addCreateDefinition(Ast_CreateDefinition *create_definition);

private:
    std::vector<Ast_CreateDefinition *> definitions;
};

class Ast_CreateSelectStmt : public Ast_Base {
public:
    enum opt_ignore_replace {
        DEFAULT = 0,
        IGNORE  = 1,
        REPLACE = 2
    };
public:
    Ast_CreateSelectStmt(opt_ignore_replace opt_ignore_replace, Ast_SelectStmt *select_stmt);
    virtual ~Ast_CreateSelectStmt();

public:
    virtual void illustrate() const;

private:
};

class Ast_CreateTableStmt : public Ast_Base {
public:
    Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, std::string name, 
        Ast_CreateColList *create_col_list);
    Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, 
        std::string database_name, std::string name, Ast_CreateColList *create_col_list);
    Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists,
        std::string name, Ast_CreateColList *create_col_list, Ast_CreateSelectStmt *create_select_stmt);
    Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, std::string name, 
        Ast_CreateSelectStmt *create_select_stmt);
    Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, std::string database_name,
        std::string name, Ast_CreateColList *create_col_list, Ast_CreateSelectStmt *create_select_stmt);
    Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, std::string database_name,
        std::string name, Ast_CreateSelectStmt *create_select_stmt);
    virtual ~Ast_CreateTableStmt();

public:
    virtual void illustrate() const;

private:
};

#endif