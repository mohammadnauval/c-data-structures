#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

#include <stdbool.h>

struct list_node {
    int data;
    struct list_node *next;
};

struct list {
    struct list_node *first;
};

void list_create(struct list *self);
void list_destroy(struct list *self);
bool list_is_empty(const struct list *self);
size_t list_size(const struct list *self);
void list_insert_front(struct list *self, int data);
void list_insert_back(struct list *self, int data);
void list_print(struct list *self);

#endif
