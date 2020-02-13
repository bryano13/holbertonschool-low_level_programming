#include "holberton.h"

/**
  * print_most_numbers - prints the numbers, from 0 to 9, excluding 2 and 4.
  *
  * Return: always 0.
  *
  */

void print_most_numbers(void)
{
	int n = 0;

	for(n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
}
