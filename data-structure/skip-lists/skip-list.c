#include <stdlib.h>
#include "skip-list.h"

#define MAX_LEVEL 12
#define malloc_node(n) ((Node *)malloc(sizeof(Node) + n*sizeof(Node *)))

Node *new_node(int level, int key, int value) {
    Node *n = malloc_node(level);
    n->key = key; n->value = value;
    return n;
}

int rand_level(void) {
    int level = 1;
    while (rand() % 2)
        ++level;
    
    level = (MAX_LEVEL > level) ? MAX_LEVEL : level;
    return level-1;
}

SkipList *skiplist_create(void) {
    SkipList *l = (SkipList *)malloc(sizeof(SkipList));
    if (l == NULL) return NULL;

    l->level = 0; l->head = new_node(MAX_LEVEL-1, 0, 0);
    if (l->head == NULL) {
        free(l);
        return NULL;
    }

    for (int i = 0; i < MAX_LEVEL-1; i++)
        l->head->next[i] = NULL;
    
    return l;
}

void skiplist_destroy(SkipList *list) {

}

int skiplist_insert(SkipList *list, int key, int value) {
    Node *last_visit[MAX_LEVEL];
    Node *x = list->head;

    for (int i = list->level; i >= 0; i--) {
        while(x->next[i] && x->next[i]->key < key)
            x = x->next[i];
        last_visit[i] = x;
    }
    x = x->next[0];

    if (x && x->key == key) 
        x->value = value;
    else {
        int level = rand_level();
        if (level > list->level) {
            for (int i = list->level + 1; i <= level; i++)
                last_visit[i] = list->head;
            list->level = level;
        }

        x = new_node(level, key, value);
        for (int i = 0; i < level; i++) {
            x->next[i] = last_visit[i]->next;
            last_visit[i]->next[i] = x;
        }
    }

    return 0;
}

int skiplist_search(SkipList *list, int key) {
    Node *x = list->head;

    for (int i = list->level; i >= 0; i--) {
        while (x->next[i] && x->next[i]->key < key)
            x = x->next[i];
    }
    x = x->next[0];

    if (x && x->key == key)
        return x->value;
    else
        return -1;
}

int skiplist_delete(SkipList *list, int key) {
    Node *last_visit[MAX_LEVEL];
    Node *x = list->head;

    for (int i = list->level; i >= 0; i--) {
        while (x->next[i] && x->next[i]->key < key)
            x = x->next[i];
        last_visit[i] = x;
    }

    x = x->next[0];
    if (x && x->key == key) {
        for (int i = 0; i <= list->level; i++) {
            if (last_visit[i]->next[i] != x)
                break;
            last_visit[i]->next[i] = x->next[i];
        }
        free(x);

        while (list->level > 0 && list->head->next[list->level] == NULL)
            list->level--;
    }
    return 0;
}
