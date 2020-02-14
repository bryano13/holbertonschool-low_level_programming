#include "holberton.h"

/**
  * print_triangle - prints a triangle, followed by a new line.
  * @size: size of the triangle.
  * return: Always zero.
  */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ;  j <= size ; j++)
			{
				k = size - i;
				if (j <= k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
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
