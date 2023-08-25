#include <stdio.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
    while (head != NULL)
    {
        list_t *temp = head;
        head = head->next;
        free(temp->str);  // Free the strdup'ed string
        free(temp);       // Free the node itself
    }
}
