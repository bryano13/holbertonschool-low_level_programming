#include "lists.h"

/**
 *put_node - adds node at end of list and return
 *pointer to origin
 *@head: pointer to the pointer of the list
 *@new_node: str data to add
 *@old_clone: old data copy with original address
 *Return: none
 */
void put_node(list_t **head, list_t *new_node, list_t *old_clone)
{
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (*head != NULL)
		{
			if ((*head)->next == NULL)
			{
				(*head)->next = new_node;
				(*head) = old_clone;
				break;
			}
			*head = (*head)->next;
		}
	}
}
/**
 *add_node_end - adds new node at end of list
 *@head: pointer to the pointer of the list
 *@str: str data to add
 *Return: pointer to the new element of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len_str = 0;
	list_t *new_node, *old_clone;
	char *final = NULL;

	if (head == NULL)
		return (NULL);
	if (str != NULL)
	{
		final = strdup(str);
		if (final == NULL)
			return (NULL);
		while (final[len_str])
			len_str++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	old_clone = malloc(sizeof(list_t));
	if (old_clone == NULL)
		return (NULL);
	old_clone = *head;
	new_node->str = final;
	new_node->len = len_str;
	new_node->next = NULL;
	put_node(head, new_node, old_clone);
	return (new_node);
}
