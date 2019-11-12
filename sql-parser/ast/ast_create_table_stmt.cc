#include <cstdio>

#include "ast_create_table_stmt.h"
#include "ast_column_list.h"
#include "ast_select_stmt.h"

Ast_OptCSC::Ast_OptCSC(enum Ast_OptCSC::csc_type csc_type, const char *value) 
    : csc_type(csc_type), value(value) {}

Ast_OptCSC::~Ast_OptCSC() {}


Ast_EnumList::Ast_EnumList(const char *name) {
    enum_list.push_back(name);
}

Ast_EnumList::~Ast_EnumList() {}

void Ast_EnumList::addEnum(const char *name) {
    enum_list.push_back(name);
}

void Ast_EnumList::illustrate() {
    this->putLine("EnumList: [");
    for (std::vector<std::string>::iterator it = enum_list.begin();
        it != enum_list.end();
        it ++)
    {
        printf("%s ", it->c_str());
    }
    this->putLine("]");
}


Ast_DataType::Ast_DataType(enum Ast_DataType::data_type data_type)
    : data_type(data_type) {}

Ast_DataType::Ast_DataType(
    enum Ast_DataType::data_type data_type, 
    uint32_t length, 
    bool unsigned_flag, 
    bool zerofill_flag
)
    : data_type(data_type)
{
    switch (data_type)
    {
    case Ast_DataType::DATA_TYPE_BIT:
    case Ast_DataType::DATA_TYPE_TINYINT:
    case Ast_DataType::DATA_TYPE_SMALLINT:
    case Ast_DataType::DATA_TYPE_MEDIUMINT:
    case Ast_DataType::DATA_TYPE_INTEGER:
    case Ast_DataType::DATA_TYPE_BIGINT:
    case Ast_DataType::DATA_TYPE_REAL:
    case Ast_DataType::DATA_TYPE_DOUBLE:
    case Ast_DataType::DATA_TYPE_FLOAT:
    case Ast_DataType::DATA_TYPE_DECIMAL:
        type_detail.numeric = new Ast_DataType::NumericType();
        type_detail.numeric->length = length;
        type_detail.numeric->unsigned_flag = unsigned_flag;
        type_detail.numeric->zerofill_flag = zerofill_flag;
        break;
    default:
        break;
    }
}

Ast_DataType::Ast_DataType(
    enum Ast_DataType::data_type data_type,
    uint32_t length,
    bool binary_flag,
    Ast_OptCSC *opt_csc
)
    : data_type(data_type) 
{
    switch (data_type)
    {
    case Ast_DataType::DATA_TYPE_CHAR:
    case Ast_DataType::DATA_TYPE_VARCHAR:
    case Ast_DataType::DATA_TYPE_BINARY:
    case Ast_DataType::DATA_TYPE_VARBINARY:
    case Ast_DataType::DATA_TYPE_TINYTEXT:
    case Ast_DataType::DATA_TYPE_TEXT:
    case Ast_DataType::DATA_TYPE_MEDIUMTEXT:
    case Ast_DataType::DATA_TYPE_LONGTEXT:
        type_detail.str = new Ast_DataType::StringType();
        type_detail.str->length = length;
        type_detail.str->binary_flag = binary_flag;
        type_detail.str->charset = (opt_csc->csc_type == Ast_OptCSC::CSC_TYPE_CHARSET) ? opt_csc->value : "";
        type_detail.str->collate = (opt_csc->csc_type == Ast_OptCSC::CSC_TYPE_COLLATE) ? opt_csc->value : "";
        break;
    default:
        break;
    }
}

Ast_DataType::Ast_DataType(
    enum Ast_DataType::data_type data_type,
    Ast_EnumList *enum_list,
    Ast_OptCSC *opt_csc
)
    : data_type(data_type)
{
    switch (data_type)
    {
    case Ast_DataType::DATA_TYPE_ENUM:
    case Ast_DataType::DATA_TYPE_SET:
        type_detail.compond = new Ast_DataType::CompondType();
        type_detail.compond->enum_list = enum_list;
        type_detail.compond->charset = (opt_csc->csc_type == Ast_OptCSC::CSC_TYPE_CHARSET) ? opt_csc->value : "";
        type_detail.compond->collate = (opt_csc->csc_type == Ast_OptCSC::CSC_TYPE_COLLATE) ? opt_csc->value : "";
        break;
    default:
        break;
    }
}

Ast_DataType::~Ast_DataType() {
    switch (data_type)
    {
    case Ast_DataType::DATA_TYPE_BIT:
    case Ast_DataType::DATA_TYPE_TINYINT:
    case Ast_DataType::DATA_TYPE_SMALLINT:
    case Ast_DataType::DATA_TYPE_MEDIUMINT:
    case Ast_DataType::DATA_TYPE_INTEGER:
    case Ast_DataType::DATA_TYPE_BIGINT:
    case Ast_DataType::DATA_TYPE_REAL:
    case Ast_DataType::DATA_TYPE_DOUBLE:
    case Ast_DataType::DATA_TYPE_FLOAT:
    case Ast_DataType::DATA_TYPE_DECIMAL:
        delete type_detail.numeric;
        break;
    case Ast_DataType::DATA_TYPE_CHAR:
    case Ast_DataType::DATA_TYPE_VARCHAR:
    case Ast_DataType::DATA_TYPE_BINARY:
    case Ast_DataType::DATA_TYPE_VARBINARY:
    case Ast_DataType::DATA_TYPE_TINYTEXT:
    case Ast_DataType::DATA_TYPE_TEXT:
    case Ast_DataType::DATA_TYPE_MEDIUMTEXT:
    case Ast_DataType::DATA_TYPE_LONGTEXT:
        delete type_detail.str;
        break;
    case Ast_DataType::DATA_TYPE_ENUM:
    case Ast_DataType::DATA_TYPE_SET:
        delete type_detail.compond->enum_list;
        delete type_detail.compond;
        break;
    default:
        break;
    }
}

const char * Ast_DataType::typeName(enum Ast_DataType::data_type data_type) {
    static const char names[30][32] = {
        "BIT",
        "TINYINT",
        "SMALLINT",
        "MEDIUMINT",
        "INTEGER",
        "BIGINT",
        "REAL",
        "DOUBLE",
        "FLOAT",
        "DECIMAL",
        "DATE",
        "TIME",
        "TIMESTAMP",
        "DATETIME",
        "YEAR",
        "CHAR",
        "VARCHAR",
        "BINARY",
        "VARBINARY",
        "TINYBLOB",
        "BLOB",
        "MEDIUMBLOB",
        "LONGBLOB",
        "TINYTEXT",
        "TEXT",
        "MEDIUMTEXT",
        "LONGTEXT",
        "ENUM",
        "SET"
    };

    return names[data_type-1];
}

void Ast_DataType::illustrate(enum Ast_DataType::data_type data_type) {
    this->putLine("DataType %s", typeName(data_type));
}

void Ast_DataType::illustrate(enum Ast_DataType::data_type data_type, Ast_DataType::NumericType numeric) {
    this->putLine("DataType %s [LENGTH:%d %s %s]", 
        typeName(data_type),
        numeric.length,
        numeric.unsigned_flag ? "UNSIGNED" : "",
        numeric.zerofill_flag ? "ZEROFILL" : ""
    );
}

void Ast_DataType::illustrate(enum Ast_DataType::data_type data_type, Ast_DataType::StringType str) {
    this->putLine("DataType %s [LENGTH:%d %s %s %s]",
        typeName(data_type),
        str.length,
        str.binary_flag ? "BINARY" : "",
        str.charset.empty() ? str.charset.c_str() : "",
        str.collate.empty() ? str.collate.c_str() : ""
    );
}

void Ast_DataType::illustrate(enum Ast_DataType::data_type data_type, Ast_DataType::CompondType compond) {
    this->putLine("DataType %s [%s %s]",
        typeName(data_type),
        compond.charset.empty() ? compond.charset.c_str() : "",
        compond.collate.empty() ? compond.collate.c_str() : ""
    );
    this->incLevel();
    compond.enum_list->illustrate();
    this->decLevel();
}

void Ast_DataType::illustrate() {
    switch (data_type)
    {
    case Ast_DataType::DATA_TYPE_BIT:
    case Ast_DataType::DATA_TYPE_TINYINT:
    case Ast_DataType::DATA_TYPE_SMALLINT:
    case Ast_DataType::DATA_TYPE_MEDIUMINT:
    case Ast_DataType::DATA_TYPE_INTEGER:
    case Ast_DataType::DATA_TYPE_BIGINT:
    case Ast_DataType::DATA_TYPE_REAL:
    case Ast_DataType::DATA_TYPE_DOUBLE:
    case Ast_DataType::DATA_TYPE_FLOAT:
    case Ast_DataType::DATA_TYPE_DECIMAL:
        this->illustrate(data_type, *(this->type_detail.numeric));
        break;
    case Ast_DataType::DATA_TYPE_CHAR:
    case Ast_DataType::DATA_TYPE_VARCHAR:
    case Ast_DataType::DATA_TYPE_BINARY:
    case Ast_DataType::DATA_TYPE_VARBINARY:
    case Ast_DataType::DATA_TYPE_TINYTEXT:
    case Ast_DataType::DATA_TYPE_TEXT:
    case Ast_DataType::DATA_TYPE_MEDIUMTEXT:
    case Ast_DataType::DATA_TYPE_LONGTEXT:
        this->illustrate(data_type, *(this->type_detail.str));
        break;
    case Ast_DataType::DATA_TYPE_ENUM:
    case Ast_DataType::DATA_TYPE_SET:
        this->illustrate(data_type, *(this->type_detail.compond));
        break;
    default:
        this->illustrate(data_type);
        break;
    }
}


Ast_ColumnAttrs::Ast_ColumnAttrs() {}

Ast_ColumnAttrs::~Ast_ColumnAttrs() {
    for (std::map<enum Ast_ColumnAttrs::mask, union Ast_ColumnAttrs::_attr>::iterator it = attrs.begin();
        it != attrs.end();
        it ++) 
    {
        switch (it->first)
        {
        case ATTR_NOT_NULL:
        case ATTR_DEFAULT_INTNUM:
        case ATTR_DEFAULT_APPROXNUM:
        case ATTR_DEFAULT_BOOL:
        case ATTR_AUTO_INCREMENT:
        case ATTR_UNIQ_KEY:
        case ATTR_PRIMARY_KEY:
        case ATTR_INDEX_KEY:
            break;
        case ATTR_UNIQ:
            delete it->second.column_list;
            break;
        case ATTR_DEFAULT_STRING:
        case ATTR_COMMENT:
            free(it->second.str_attr);
        default:
            break;
        }
    }
}

void Ast_ColumnAttrs::addAttr(enum Ast_ColumnAttrs::mask mask) {
    attr_mask |= mask;
}

void Ast_ColumnAttrs::addUInt32Attr(enum Ast_ColumnAttrs::mask mask, uint32_t attr) {
    attr_mask |= mask;
    Ast_ColumnAttrs::_attr _attr;
    _attr.int_attr = attr;
    attrs[mask] = _attr;
}

void Ast_ColumnAttrs::addDoubleAttr(enum Ast_ColumnAttrs::mask mask, double attr) {
    attr_mask |= mask;
    Ast_ColumnAttrs::_attr _attr;
    _attr.float_attr = attr;
    attrs[mask] = _attr;
}

void Ast_ColumnAttrs::addAttr(enum Ast_ColumnAttrs::mask mask, char *attr) {
    attr_mask |= mask;
    Ast_ColumnAttrs::_attr _attr;
    _attr.str_attr = attr;
    attrs[mask] = _attr;
}

void Ast_ColumnAttrs::addBoolAttr(enum Ast_ColumnAttrs::mask mask, bool attr) {
    attr_mask |= mask;
    Ast_ColumnAttrs::_attr _attr;
    _attr.int_attr = attr;
    attrs[mask] = _attr;
}

void Ast_ColumnAttrs::addAttr(enum Ast_ColumnAttrs::mask mask, Ast_ColumnList *column_list) {
    attr_mask |= mask;
    Ast_ColumnAttrs::_attr _attr;
    _attr.column_list = column_list;
    attrs[mask] = _attr;
}

void Ast_ColumnAttrs::illustrate() {
    this->putLine("Attrs: [");
    for (std::map<enum Ast_ColumnAttrs::mask, union Ast_ColumnAttrs::_attr>::iterator it = attrs.begin();
        it != attrs.end();
        it ++) 
    {
        switch (it->first)
        {
        case ATTR_NOT_NULL:
            printf(" NOT NULL ");
            break;
        case ATTR_DEFAULT_INTNUM:
            printf(" DEFAULT %d ", it->second.int_attr);
            break;
        case ATTR_DEFAULT_APPROXNUM:
            printf(" DEFAULT %lf ", it->second.float_attr);
            break;
        case ATTR_DEFAULT_BOOL:
            printf(it->second.int_attr ? " DEFAULT TRUE " : " DEFAULT FALSE ");
            break;
        case ATTR_AUTO_INCREMENT:
            printf(" AUTO INCREMENT ");
            break;
        case ATTR_UNIQ_KEY:
            printf(" UNIQUE KEY ");
            break;
        case ATTR_PRIMARY_KEY:
            printf(" PRIMARY KEY ");
            break;
        case ATTR_INDEX_KEY:
            printf(" INDEX ");
            break;
        case ATTR_UNIQ:
            printf(" UNIQUE KEY(\n");
            this->incLevel();
            it->second.column_list->illustrate();
            this->decLevel();
            printf(") ");
            break;
        case ATTR_DEFAULT_STRING:
            printf(" DEFAULT %s ", it->second.str_attr);
            break;
        case ATTR_COMMENT:
            printf(" COMMENT %s ", it->second.str_attr);
            break;
        default:
            break;
        }
    }
    this->putLine("]\n");
}

Ast_CreateDefinition::DataDefinition::DataDefinition(
    const char *name, Ast_DataType *data_type, Ast_ColumnAttrs *attrs)
    : name(name), data_type(data_type), column_attrs(attrs) {}

Ast_CreateDefinition::DataDefinition::~DataDefinition() {
    if (data_type)
        delete data_type;
    if (column_attrs)
        delete column_attrs;
}

Ast_CreateDefinition::IndexDefinition::IndexDefinition(
    Ast_CreateDefinition::key_type key_type, Ast_ColumnList *column_list)
    : key_type(key_type), column_list(column_list) {}

Ast_CreateDefinition::IndexDefinition::~IndexDefinition() {
    if (column_list)
        delete column_list;
}

Ast_CreateDefinition::Ast_CreateDefinition(Ast_CreateDefinition::key_type type, Ast_ColumnList *column_list)
    : def_type(Ast_CreateDefinition::INDEX_DEFINITION)
{
    def_detail.index_def = new Ast_CreateDefinition::IndexDefinition(type, column_list);
}

Ast_CreateDefinition::Ast_CreateDefinition(const char *name, Ast_DataType *data_type, Ast_ColumnAttrs *column_attr)
    : def_type(Ast_CreateDefinition::DATA_DEFINITION)
{
    def_detail.data_def = new Ast_CreateDefinition::DataDefinition(name, data_type, column_attr);
}

Ast_CreateDefinition::~Ast_CreateDefinition() {
    switch (def_type)
    {
    case Ast_CreateDefinition::INDEX_DEFINITION:
        delete this->def_detail.index_def;
        break;
    case Ast_CreateDefinition::DATA_DEFINITION:
        delete this->def_detail.data_def;
        break;
    default:
        break;
    }
}

const char *Ast_CreateDefinition::keyTypeName(enum Ast_CreateDefinition::key_type key_type) {
    static const char names[3][32] = {
        "KEY",
        "PRIMARY KEY",
        "FULLTEXT KEY"
    };

    return names[key_type];
}

void Ast_CreateDefinition::illustrate() {
    switch (def_type)
    {
    case Ast_CreateDefinition::INDEX_DEFINITION:
        this->putLine("CreateDefinition INDEX %s [", this->keyTypeName(this->def_detail.index_def->key_type));
        this->incLevel();
        this->def_detail.index_def->column_list->illustrate();
        this->decLevel();
        this->putLine("]");
        break;
    case Ast_CreateDefinition::DATA_DEFINITION:
        this->putLine("CreateDefinition DATA %s [", this->def_detail.data_def->name.c_str());
        this->incLevel();
        this->def_detail.data_def->data_type->illustrate();
        this->def_detail.data_def->column_attrs->illustrate();
        this->decLevel();
        this->putLine("]");
        break;
    default:
        break;
    }
}


Ast_CreateColList::Ast_CreateColList(Ast_CreateDefinition *create_definition) {
    definitions.push_back(create_definition);
}

Ast_CreateColList::~Ast_CreateColList() {
    for (std::vector<Ast_CreateDefinition *>::iterator it = definitions.begin();
        it != definitions.end();
        it ++)
    {
        delete (*it);
    }
}

void Ast_CreateColList::addCreateDefinition(Ast_CreateDefinition *create_definition) {
    definitions.push_back(create_definition);
}

void Ast_CreateColList::illustrate() {
    for (std::vector<Ast_CreateDefinition *>::iterator it = definitions.begin();
        it != definitions.end();
        it ++)
    {
        (*it)->illustrate();
    }
}


Ast_CreateSelectStmt::Ast_CreateSelectStmt(uint32_t opt_ignore_replace, Ast_SelectStmt *select_stmt) 
    : opt_ignore_replace(opt_ignore_replace), select_stmt(select_stmt) {}

Ast_CreateSelectStmt::~Ast_CreateSelectStmt() {
    if (select_stmt)
        delete select_stmt;
}

const char *Ast_CreateSelectStmt::OptName(uint32_t opt_ignore_replace) {
    const static char names[3][32] = {
        "",
        "IGNORE",
        "REPLACE"
    };
    return names[opt_ignore_replace];
}

void Ast_CreateSelectStmt::illustrate() {
    this->putLine("Create Select Stmt: %s [", this->OptName(this->opt_ignore_replace));
    this->incLevel();
    this->select_stmt->illustrate();
    this->decLevel();
    this->putLine("]");
}


Ast_CreateTableStmt::Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, 
    const char *name, Ast_CreateColList *create_col_list)
    : opt_temporary(opt_temporary), opt_if_not_exists(opt_if_not_exists),
        name(name), create_col_list(create_col_list)
{
}

Ast_CreateTableStmt::Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists,
    const char *database_name, const char *name, Ast_CreateColList *create_col_list)
    : opt_temporary(opt_temporary), opt_if_not_exists(opt_if_not_exists),
        database_name(database_name), name(name), create_col_list(create_col_list)
{
}

Ast_CreateTableStmt::Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists,
    const char *name, Ast_CreateColList *create_col_list, Ast_CreateSelectStmt *create_select_stmt)
    : opt_temporary(opt_temporary), opt_if_not_exists(opt_if_not_exists), name(name),
        create_col_list(create_col_list), create_select_stmt(create_select_stmt)
{
}

Ast_CreateTableStmt::Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, 
    const char *name, Ast_CreateSelectStmt *create_select_stmt)
    : opt_temporary(opt_temporary), opt_if_not_exists(opt_if_not_exists), name(name),
        create_select_stmt(create_select_stmt)
{
}

Ast_CreateTableStmt::Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, 
    const char *database_name, const char * name, Ast_CreateColList *create_col_list, 
    Ast_CreateSelectStmt *create_select_stmt)
    : opt_temporary(opt_temporary), opt_if_not_exists(opt_if_not_exists), database_name(database_name),
        name(name), create_col_list(create_col_list), create_select_stmt(create_select_stmt)
{
}

Ast_CreateTableStmt::Ast_CreateTableStmt(bool opt_temporary, bool opt_if_not_exists, 
    const char *database_name, const char *name, Ast_CreateSelectStmt *create_select_stmt)
    : opt_temporary(opt_temporary), opt_if_not_exists(opt_if_not_exists), database_name(database_name),
        name(name), create_select_stmt(create_select_stmt)
{
}

Ast_CreateTableStmt::~Ast_CreateTableStmt() {
    if (create_col_list)
        delete create_col_list;

    if (create_select_stmt)
        delete create_select_stmt;
}

void Ast_CreateTableStmt::illustrate() {
    this->putLine("Create Table [%s.%s] %s %s",
        this->database_name.empty() ? "" : this->database_name.c_str(),
        this->name.empty() ? "" : this->name.c_str(),
        opt_temporary ? "TEMPORARY" : "",
        opt_if_not_exists ? "IF NOT EXISTS" : "");
    this->incLevel();
    if (this->create_col_list)
        this->create_col_list->illustrate();
    if (this->create_select_stmt)
        this->create_select_stmt->illustrate();
    this->decLevel();
}