#include "lists.h"

/**
 * list_len - counts the nodes in a single list linked list.
 * @h: pointer to head node.
 *
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
