#include "lists.h"

/**
 * free_dlistint - free sll
 * @head: head pointer
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head->next);
	free(head);
}
