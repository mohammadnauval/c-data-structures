#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main() {
    struct list *self = malloc(sizeof(struct list));
    list_create(self);
    list_insert_front(self, 3);
    list_insert_front(self, 4);
    list_insert_back(self, 10);
    printf("size of list: %zu\n", list_size(self));
    list_print(self);
}
