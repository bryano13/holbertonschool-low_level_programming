#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - From malloc creates a calloc function.
 * @nmemb: Multiplier
 * @size: size of the type.
 * Return: str
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if ((size || nmemb) == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		str[i] = 0;
	}
	return (str);
}
