#include "holberton.h"

/**
  * more_numbers - prints 10 times the numbers, from 0 to 14.
  *
  * Return: always 0.
  *
  */

void more_numbers(void)
{
	int lines;
	int n;

	for (lines = 0; lines < 10; lines++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n <= 9)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
