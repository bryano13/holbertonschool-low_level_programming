#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index given
 * @head: pointer to the first node
 * @index: index that refers to the node number
 * Return: 1 on success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *enter_node = NULL;

	if (head == NULL)
		return (-1);
	if (index == 0 && *head != NULL)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index && temp != NULL; i++)
	{
		if (i + 1 == index)
		{
			enter_node = temp->next;
			temp->next = enter_node->next;
			free(enter_node);
			break;
		}
		else
			temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	return (1);
}
