#include "lists.h"

/**
 * get_nodeint_at_index - finds a node.
 * @index: number of the node to find.
 * @head: Pointer to the first node.
 *
 * Return: the node found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
		if (count == index)
		{
			if (tmp == NULL)
				return (NULL);
			return (tmp);
		}
	}
	return (NULL);
}
