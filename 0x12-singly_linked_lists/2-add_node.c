#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string
 * Return: length of string
 **/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * add_node - Add a new node to the beginning of the list.
 * @head: Pointer to the first array.
 * @str: an array.
 *
 * Return: the new node of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
