#include <string.h>
#include <stdio.h>
#include "util.h"

typedef struct tree *T_tree;

struct tree {
    T_tree left;
    string key;
    T_tree right;
};

T_tree Tree(T_tree l, string k, T_tree r) {
    T_tree t = check_malloc(sizeof(*t));
    t->left = l;
    t->key = k;
    t->right = r;
    return t;
}

T_tree insert(string key, T_tree t) {
    if (t == NULL)
        return Tree(NULL, key, NULL);
    else if (strcmp(key, t->key) < 0)
        return Tree(insert(key, t->left), t->key, t->right);
    else if (strcmp(key, t->key) > 0)
        return Tree(t->left, t->key, insert(key, t->right));
    else
        return Tree(t->left, key, t->right);
}

bool member(string key, T_tree t) {
    if (t == NULL)
        return FALSE;
    else if (strcmp(key, t->key) < 0)
        return member(key, t->left);
    else if (strcmp(key, t->key) > 0)
        return member(key, t->right);
    else
        return TRUE;
}

void demostrate_tree(T_tree t) {
    if (t == NULL)
        return;
    if (t->left) {
        printf("\t%s -> %s\n", t->key, t->left->key);
        demostrate_tree(t->left);
    }
    if (t->right) {
        printf("\t%s -> %s\n", t->key, t->right->key);
        demostrate_tree(t->right);
    }
}

void demostrate(T_tree t) {
    printf("digraph G {\n");
    demostrate_tree(t);
    printf("}\n");
}

int main() {
    T_tree t = NULL;
    t = insert("e", t);
    t = insert("c", t);
    t = insert("g", t);
    t = insert("b", t);
    t = insert("d", t);
    t = insert("a", t);
    t = insert("f", t);
    t = insert("h", t);
    t = insert("i", t);
    demostrate(t);
}