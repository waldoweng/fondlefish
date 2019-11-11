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
        CSC_TYPE_CHARSET = 0,
        CSC_TYPE_COLLATE = 1
    };
public:
    explicit Ast_OptCSC(csc_type csc_type, std::string value);
    virtual ~Ast_OptCSC();

private:
    csc_type csc_type;
    std::string value;
};

class Ast_EnumList : public Ast_Base {
public:
    explicit Ast_EnumList(std::string);
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
        DATA_TYPE_BIT         = 0x00000001,
        DATA_TYPE_TINYINT     = 0x00000002,
        DATA_TYPE_SAMLLINT    = 0x00000004,
        DATA_TYPE_MEDIUMINT   = 0x00000008,
        DATA_TYPE_INTEGER     = 0x00000010,
        DATA_TYPE_BIGINT      = 0x00000020,
        DATA_TYPE_REAL        = 0x00000040,
        DATA_TYPE_DOUBLE      = 0x00000080,
        DATA_TYPE_FLOAT       = 0x00000100,
        DATA_TYPE_DECIMAL     = 0x00000200,
        DATA_TYPE_DATE        = 0x00000400,
        DATA_TYPE_TIME        = 0x00000800,
        DATA_TYPE_TIMESTAMP   = 0x00001000,
        DATA_TYPE_DATETIME    = 0x00002000,
        DATA_TYPE_YEAR        = 0x00004000,
        DATA_TYPE_CHAR        = 0x00008000,
        DATA_TYPE_VARCHAR     = 0x00010000,
        DATA_TYPE_BINARY      = 0x00020000,
        DATA_TYPE_VARBINARY   = 0x00040000,
        DATA_TYPE_TINYBLOB    = 0x00080000,
        DATA_TYPE_BLOB        = 0x00100000,
        DATA_TYPE_MEDIUMBLOB  = 0x00200000,
        DATA_TYPE_LONGBLOB    = 0x00400000,
        DATA_TYPE_TINYTEXT    = 0x00800000,
        DATA_TYPE_TEXT        = 0x01000000,
        DATA_TYPE_MEDIUMTEXT  = 0x02000000,
        DATA_TYPE_LONGTEXT    = 0x04000000,
        DATA_TYPE_ENUM        = 0x08000000,
        DATA_TYPE_SET         = 0x10000000
    };

    class NumericType {
        uint32_t length;
        bool unsigned_flag;
        bool zerofill_flag;
    };

    class StringType {
        uint32_t length;
        bool binary_flag;
        std::string charset;
        std::string collate;
    };

    class CompondType {
        Ast_EnumList *enum_list;
        std::string charset;
        std::string collate;
    };

public:
    explicit Ast_DataType(data_type data_type);
    explicit Ast_DataType(data_type data_type, uint32_t length, bool unsigned_flag, bool zerofill_flag);
    explicit Ast_DataType(data_type data_type, uint32_t length, bool binary_flag, Ast_OptCSC *opt_csc);
    explicit Ast_DataType(data_type data_type, Ast_EnumList *enum_list, Ast_OptCSC *opt_csc);
    virtual ~Ast_DataType();

public:
    virtual void illustrate() const;

private:
    data_type data_type;
    union _type {
        NumericType *numeric;
        StringType *str;
        CompondType *compond;
    } type_detail;
};

class Ast_ColumnAttrs : public Ast_Base {
public:
    enum mask{
        ATTR_NOT_NULL            = 0x0001,
        ATTR_DEFAULT_STRING      = 0x0002,
        ATTR_DEFAULT_INTNUM      = 0x0004,
        ATTR_DEFAULT_APPROXNUM   = 0x0008,
        ATTR_DEFAULT_BOOL        = 0x0010,
        ATTR_AUTO_INCREMENT      = 0x0020,
        ATTR_UNIQ                = 0x0040,
        ATTR_UNIQ_KEY            = 0x0080,
        ATTR_PRIMARY_KEY         = 0x0100,
        ATTR_INDEX_KEY           = 0x0200,
        ATTR_COMMENT             = 0x0400
    };

    union _attr {
        std::string *str_attr;
        uint32_t int_attr;
        double float_attr;
        Ast_ColumnList *column_list;
    };

public:
    explicit Ast_ColumnAttrs();
    virtual ~Ast_ColumnAttrs();

public:
    virtual void illustrate() const;

public:
    void addAttr(mask mask);
    void addUInt32Attr(mask mask, uint32_t attr);
    void addDoubleAttr(mask mask, double attr);
    void addAttr(mask mask, std::string attr);
    void addBoolAttr(mask mask, bool attr);
    void addAttr(mask mask, Ast_ColumnList *column_list);

private:
    uint32_t attr_mask; 
    std::map<mask, Ast_ColumnAttrs::_attr> attrs;
};

class Ast_CreateDefinition : public Ast_Base {
public:
    enum key_type {
        KEY_TYPE_KEY = 0,
        KEY_TYPE_PRIMARY_KEY = 1,
        KEY_TYPE_FULLTEXT_KEY = 2
    };

public:
    explicit Ast_CreateDefinition(key_type type, Ast_ColumnList *column_list);
    explicit Ast_CreateDefinition(std::string name, Ast_DataType *data_type, Ast_ColumnAttrs *column_attr);
    virtual ~Ast_CreateDefinition();

public:
    virtual void illustrate() const;

private:

};

class Ast_CreateColList : public Ast_Base {
public:
    explicit Ast_CreateColList(Ast_CreateDefinition *create_definition);
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
    enum {
        OPT_DEFAULT = 0,
        OPT_IGNORE  = 1,
        OPT_REPLACE = 2
    };
public:
    explicit Ast_CreateSelectStmt(uint32_t opt_ignore_replace, Ast_SelectStmt *select_stmt);
    virtual ~Ast_CreateSelectStmt();

public:
    virtual void illustrate() const;

private:
};

class Ast_CreateTableStmt : public Ast_Base {
public:
    explicit Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, std::string name, 
        Ast_CreateColList *create_col_list);
    explicit Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, 
        std::string database_name, std::string name, Ast_CreateColList *create_col_list);
    explicit Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists,
        std::string name, Ast_CreateColList *create_col_list, Ast_CreateSelectStmt *create_select_stmt);
    explicit Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, std::string name, 
        Ast_CreateSelectStmt *create_select_stmt);
    explicit Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, std::string database_name,
        std::string name, Ast_CreateColList *create_col_list, Ast_CreateSelectStmt *create_select_stmt);
    explicit Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, std::string database_name,
        std::string name, Ast_CreateSelectStmt *create_select_stmt);
    virtual ~Ast_CreateTableStmt();

public:
    virtual void illustrate() const;

private:
};

#endif