#include "holberton.h"

/**
 * _strncat - This function appends the src string to the dest string.
 * @dest: is a parameter
 * @src: is a parameter
 * @n: is a parameter
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	if (n >= 15)
	{
		n = 15;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n;  j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
