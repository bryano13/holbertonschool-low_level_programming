#include "holberton.h"

/**
  * print_diagonal - draws a diagonal line on the terminal.
  *
  * @n: number of diagonal lines.
  * Return: always 0.
  */

void print_diagonal(int n)
{
	int space;
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space <= line; space++)
			{
				if (line == space)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}	
	}
	else
	{
		_putchar('\n');
	}
}
