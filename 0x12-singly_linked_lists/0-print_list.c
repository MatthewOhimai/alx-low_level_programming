#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *h) {
    size_t count = 0;  

    while (h != NULL) {
        printf("[%d] ", h->len);  
        
        if (h->str == NULL) {
            printf("(nil)\n");  
        } else {
            printf("%s\n", h->str);  
        }

        h = h->next;  
        count++;      
    }

    return count;  
}
