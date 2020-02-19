#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
*/

void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = i; s[j] >= 0; j--)
	{
		tmp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tmp;
	}
}
