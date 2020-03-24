#include "lists.h"

/**
 * add_nodeint_end -
 *
 * Return: 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;
		tail = new;
	}
	new->n = n;
	new->next = NULL;
	tail->next = new;
	tail = new;
	
	return (*head);
}
