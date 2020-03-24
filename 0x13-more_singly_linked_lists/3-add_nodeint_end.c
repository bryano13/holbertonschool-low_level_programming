#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of the list.
 * @n: integer value.
 * @head: Pointer to the head of the node.
 *
 * Return: Pointer to first node of the list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		tail = new;
	}
	tail->next = new;
	tail = new;

	return (*head);
}
