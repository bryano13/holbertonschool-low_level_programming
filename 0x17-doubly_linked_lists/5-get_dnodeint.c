#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node
 * @head: pointer to head of sll
 * @index: node index
 * Return: node found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tranv = NULL;
	size_t count = 0;

	if (head == NULL)
		return (NULL);

	tranv = head;
	while (tranv->next != NULL)
	{
		if (count == index)
			return (tranv);
		tranv = tranv->next;
		count++;
	}
	return (NULL);
}
