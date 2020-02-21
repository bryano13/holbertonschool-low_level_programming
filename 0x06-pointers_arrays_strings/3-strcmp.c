#include "holberton.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: is a parameter
 * @s2: is a parameter
 * Return: the value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
