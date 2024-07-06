#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted, starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	/* if the node to be deleted is the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* traverse to the node to be deleted */
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	/* if the node to be deleted doesn't exist */
	if (temp == NULL)
		return (-1);

	/* adjust the links */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
