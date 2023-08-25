#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *h) {
    size_t count = 0;  // Initialize a counter to keep track of the number of nodes

    while (h != NULL) {
        printf("[%d] ", h->len);  // Print the length of the string
        
        if (h->str == NULL) {
            printf("(nil)\n");  // Print (nil) if the string is NULL
        } else {
            printf("%s\n", h->str);  // Print the string
        }

        h = h->next;  // Move to the next node
        count++;      // Increment the counter
    }

    return count;  // Return the total number of nodes
}
