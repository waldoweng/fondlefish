#include "util.h"
#include <stdlib.h>

void *check_malloc(int len) {
    void *p = malloc(len);
    assert(p);
    return p;
}