#include "lists.h"
/**
 *reverse_listint - reverse connections of the list
 *@head: pointer to the first elements of the list
 *Return: 1 if SUCCESS, or -1 if it failed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next_node;

	if (*head != NULL)
	{
		previous = NULL;
		next_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		while (*head != NULL)
		{
			*head = next_node;
			if (*head != NULL)
			{
				next_node = (*head)->next;
				(*head)->next = previous;
				previous = *head;
				*head = next_node;
			}
		}
		*head = previous;
	}
	return (*head);
}
