#include "lists.h"
int _strlen(const char *s);

/**
 * add_node_end - function that adds a node at the end
 * @head: head of the list
 * @str: String of the instance
 * Return: new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temporal = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temporal->next !=  NULL)
		temporal = temporal->next;

	temporal->next = new;

	return (new);
}

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: length of string
 **/

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
