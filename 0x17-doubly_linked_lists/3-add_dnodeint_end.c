#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @n: int
 * @head: double pointer
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tranv = NULL;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	tranv = *head;
	while (tranv->next != NULL)
	{
		tranv = tranv->next;
	}
	new->prev = tranv;
	new->next = NULL;
	tranv->next = new;
	return (new);
}
