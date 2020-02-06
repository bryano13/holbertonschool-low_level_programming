#include <stdio.h>

/**
*main - print 0123456789 using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
