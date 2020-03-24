#include "lists.h"

/**
 * add_nodeint - Adds a new node to the Sinle Listed List.
 * @head: Pointer to the location of the pointer head.
 * @n: Cosntant integer.
 *
 * Return: Pointer to the first node of the list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
