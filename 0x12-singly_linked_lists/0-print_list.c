#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list_t list.
 * @h: head of the simple list.
 *
 * Return: Number of nodes in insode the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	h = h->next;
	}
	return (count);
}
