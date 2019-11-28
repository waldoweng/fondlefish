#include "ast.h"
#include "pmysql.hh"
#include "pmysql.tab.hh"


int sqlparse(const char *str) {
    yy_scan_string(str);
    if (yyparse())
        printf("SQL parse failed for sql [%s]", str);
}

int main(int argc, char *argv[]) {
    sqlparse("select * from abc");
    sqlparse("select * from abc where a = 1 and b = 'c'");
    return 0;
}