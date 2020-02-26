#include "holberton.h"

/**
  * _strlen_recursion - counts strlen.
  * @s: string.
  * Return: lenth of the string
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
