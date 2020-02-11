#include "holberton.h"

/**
  *print_to_98 - prints number in order until 98.
  *
  * @n : checked int
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	}
	printf("%d\n", n);
}
