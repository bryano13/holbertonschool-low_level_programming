#include "holberton.h"

/**
* _isupper - returns 1 if c is Uppercase.
* @c: uppercase letter.
* Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
