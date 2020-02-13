#include "holberton.h"

/**
  * _isdigit - Checks if a digit in a number.
  *
  * @c: number o to 9
  * Return: Always 0.
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
