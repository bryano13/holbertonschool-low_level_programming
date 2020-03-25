#include "lists.h"

/**
 * pop_listint - Delete the first node after extracting its value.
 * @head: Pointer to the first node.
 * Return: value from first node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
