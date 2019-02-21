#include <string.h>
#include "util.h"

typedef struct tree *T_tree;

struct tree {
    T_tree left;
    string key;
    void *binding;
    T_tree right;
};

T_tree Tree(T_tree l, string k, void *b, T_tree r) {
    T_tree t = check_malloc(sizeof(*t));
    t->left = l;
    t->key = k;
    t->binding = b;
    t->right = r;
    return t;
}

T_tree insert(string key, void *binding, T_tree t) {
    if (t == NULL)
        return Tree(NULL, key, binding, NULL);
    else if (strcmp(key, t->key) < 0)
        return Tree(insert(key, binding, t->left), t->key, t->binding, t->right);
    else if (strcmp(key, t->key) > 0)
        return Tree(t->left, t->key, t->binding, insert(key, binding, t->right));
    else
        return Tree(t->left, key, binding, t->right);
}

bool member(string key, T_tree t) {
    if (t == NULL)
        return FALSE;
    else if (strcmp(key, t->key) < 0)
        return member(key, t->left);
    else if (strcmp(key, t->right) > 0)
        return member(key, t->right);
    else
        return TRUE;
}

void *lookup(string key, T_tree t) {
    if (t == NULL)
        return NULL;
    else if (strcmp(key, t->key) < 0)
        return lookup(key, t->left);
    else if (strcmp(key, t->key) > 0)
        return lookup(key, t->right);
    else
        return t->binding;
}
