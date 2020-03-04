#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Function that concatenates two string.
 * @s1: String to concatenate.
 * @s2: String to concatenate.
 * Return: Pointer to an string.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *la;

	if (s1)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2)
	{
		while (s2[j] != '\0')
			j++;
		j++;
	}

	la = malloc((i + j) * sizeof(char)); /*reserve the space of memory*/

	if (!la)
		return (NULL);

	for (k = 0; k < (i + j); k++)
	{
		if (k < i)
			la[k] = s1[k];
		else if (k >= i && k < (i + j))
		{
			la[k] = s2[k - i];
		}
	}
	la[k] = '\0';
	return (la);
}
