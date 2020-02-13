#include "holberton.h"

/**
  * print_line - draws a straight line in the terminal.
  * Return: always 0.
  * @n: number of lines printed.
  */

void print_line(int n)
{
	int line;

	for (line = 0; line <= n; line++)
	{
		if (n > 0)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
