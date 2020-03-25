#include "lists.h"

/**
 * pop_listint -
 *
 * Return: 
 */
int pop_listint(listint_t **head)
{
	/*Extract the integer value from the head node and then delete that first node*/

	listint_t *tmp;
	int n;

	if (head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
