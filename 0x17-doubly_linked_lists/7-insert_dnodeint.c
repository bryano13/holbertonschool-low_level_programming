#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node in position n
 * @h: double pointer to head
 * @idx: index
 * @n: position of insertion
 * Return: new node inserted.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tranv = NULL;
	dlistint_t *new = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	tranv = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (tranv != NULL && idx > 0)
	{
		if (count == idx - 1)
		{
			new->next = tranv->next;
			new->prev = tranv;
			tranv->next->prev = new;
			tranv->next = new;
			return (new);
		}
		tranv = tranv->next;
		count++;
	}
	return (NULL);
}
