#include "holberton.h"
/**
* jack_bauer - all hours and minutes of a day
* @h1 @h2 @m1 @m2  : the integer to print the last digit of
*
* Return: Null
*/

void jack_bauer(void)
{
	int h1;
	int h2;
	int m;
	int s;

	for (h1 = 0; h1 <= 2; h1++)
	{
		h2 = 0;
		for (h2 = 0; h2 <= 9; h2++)
		{
			m = 0;
			if (h1 == 2 && h2 > 3)
			{
				break;
			}
			for (m = 0; m <= 5; m++)
			{
				s = 0;
				for (s = 0; s <= 9; s++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(s + '0');
					_putchar('\n');
				}
			}
		}
	}
}
