#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: first element of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temporal;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temporal = *head;
		*head = temporal->next;
		free(temporal);
	}
}
