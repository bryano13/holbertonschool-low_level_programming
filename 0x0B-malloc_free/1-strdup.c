#include "holberton.h"

/**
 * _strdup - Copies a string.
 * @str: string.
 * Return: copy of the string.
 */
char *_strdup(char *str)
{
	int i, size;
	char *s;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{
	}
	if (size != 0)
	{
		s = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			s[i] = str[i];
		}
	}
	else
		return (NULL);
	return (s);
}



