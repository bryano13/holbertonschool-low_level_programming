#include "holberton.h"

/**
 * _islower - checks for lowercase letters.
 *
 *@c:int checked
 *
 * Return: 1 for success..
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
