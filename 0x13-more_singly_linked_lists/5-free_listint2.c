#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Description: This function frees all nodes of a linked list and sets the head
 * to NULL.
 */
void free_listint2(listint_t **head)
{
    listint_t *current;

    if (head == NULL)
        return;

    while (*head != NULL)
    {
        current = *head;
        *head = (*head)->next;
        free(current);
    }
    *head = NULL;
}
