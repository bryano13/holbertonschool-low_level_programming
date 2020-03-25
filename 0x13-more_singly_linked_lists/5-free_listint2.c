#include "lists.h"

/**
 * free_listint2 - Frees a SLL.
 * @head: double pointer.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head != NULL)
		return;

	while (*head != NULL)
	{
		tmp  = *head;
		*head = tmp->next;
		free(tmp);
	}
}
