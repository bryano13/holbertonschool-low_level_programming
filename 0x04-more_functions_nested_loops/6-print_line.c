#include "holberton.h"

/**
  * print_line - draws a straight line in the terminal.
  * .
  * @n: number of lines printed.
  * Return: Nothing.
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
