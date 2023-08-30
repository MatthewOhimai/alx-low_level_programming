#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *prev_node = NULL;
    unsigned int i = 0;

    if (head == NULL)
        return NULL;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    prev_node = *head;
    while (prev_node != NULL && i < idx - 1)
    {
        prev_node = prev_node->next;
        i++;
    }

    if (prev_node == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->next = prev_node->next;
    prev_node->next = new_node;

    return new_node;
}
