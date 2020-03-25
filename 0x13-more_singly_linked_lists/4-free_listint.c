#include "lists.h"

/**
 * free_listint - frees all the list node by node.
 * @head: pointer to the first node of the SLL.
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *store;

	tmp = head;

	while (tmp != NULL)
	{
		store = tmp->next;
		free(tmp);
		tmp = store;
	}
}
