#ifndef __SKIP_LIST_H__
#define __SKIP_LIST_H__

typedef struct NodeTag {
    int key;
    int value;
    struct NodeTag *next[1];
} Node;

typedef struct SkipListTag {
    int level;
    Node *head;
} SkipList;

SkipList *skiplist_create(void);
void skiplist_destroy(SkipList *list);

int skiplist_insert(SkipList *list, int key, int value);
int skiplist_set(SkipList *list, int key, int value);
int skiplist_search(SkipList *list, int key);
int skiplist_delete(SkipList *list, int key);

#endif