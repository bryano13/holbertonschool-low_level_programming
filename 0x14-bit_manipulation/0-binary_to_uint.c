#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: the converted number, or 0 in case of fail
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
