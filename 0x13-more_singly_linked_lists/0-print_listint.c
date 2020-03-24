#include "lists.h"

/**
 * print_listint - Prints the integer values of each node.
 * @h: Pointer to the first node which iterates between all the nodes.
 * Return: Number of nodes in the Single Listed List.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for ( ; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
