#include <stdio.h>
#include "lists.h"
size_t list_len(const list_t *h) {
    size_t count = 0;  /*Initialize a counter to keep track of the number of nodes*/
    while (h != NULL) {
        h = h->next;  /*Move to the next node*/
        count++;      /*Increment the counter*/
    }
    return count;  /*Return the total number of nodes*/
}
