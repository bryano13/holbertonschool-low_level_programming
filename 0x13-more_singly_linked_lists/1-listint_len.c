#include "lists.h"

/**
 * listint_len - counts the number of nodes in SLL.
 * @h: pointer to a node.
 *
 * Return: count.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = (*h).next, count++)
	{
	}
	return (count);
}
