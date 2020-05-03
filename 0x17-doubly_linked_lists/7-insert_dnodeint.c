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

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	tranv = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (tranv != NULL && idx > 0)
	{
		if (count == idx - 1)
		{
			new->prev = tranv;
			if (tranv->next != NULL)
			{
				new->next = tranv->next;
				tranv->next->prev = new;
			}
			else
			{
				new->next = NULL;
			}
			tranv->next = new;
			return (new);
		}
		tranv = tranv->next;
		count++;
	}
	return (NULL);
}
