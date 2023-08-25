#include <stdlib.h>
#include <string.h>
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
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be duplicated and added to the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    if (str == NULL)
        return NULL;

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        list_t *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }

    return new_node;
}
