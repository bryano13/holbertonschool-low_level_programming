#include "holberton.h"

/**
 * create_array - an array of char c.
 * @size: size of array.
 * @c: a char.
 * Return: a char.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
        unsigned int i;

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	else
		return (NULL);
	return (str);

}
