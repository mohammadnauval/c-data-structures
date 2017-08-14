#include <stdlib.h>
#include "linkedlist.h"

#include <stdio.h>
#include <stdbool.h>

void list_create(struct list *self) {
    self->first = NULL;
}

void list_destroy(struct list *self) {
    if (self->first == NULL) {
        return;
    }
    struct list_node *node = self->first;
    while (node != NULL) {
        struct list_node *tmp = node;
        node = node->next;
        free(tmp);
    }       
}

bool list_is_empty(const struct list *self) {
   return self->first == NULL;
} 

size_t list_size(const struct list *self) {
    if (self->first == NULL) {
        return 0;
    }
    size_t size = 0;
    struct list_node *node = self->first;
    while (node != NULL) {
        size = size + 1;
        node = node->next;
    }
    return size;
}

void list_insert_front(struct list *self, int data) {
    struct list_node *new = malloc(sizeof(struct list_node));
    struct list_node *node = self->first;
    new->data = data;
    new->next = node;
    self->first = new;
}

void list_insert_back(struct list *self, int data) {
    struct list_node *new = malloc(sizeof(struct list_node));
    new->data = data;
    new->next = NULL;
    if (list_is_empty(self)) {
        self->first = new;
        return;
    }
    struct list_node *node = self->first;
    while(node->next != NULL) {
        node = node->next;
    }
    node->next = new;
}

void list_print(struct list *self) {
    struct list_node *node = self->first;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
