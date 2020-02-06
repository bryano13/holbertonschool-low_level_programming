#include <stdio.h>

/**
*main - print 0-9 separated with commas, using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	int j = '0';
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (!(i == '9' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
