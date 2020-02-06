#include <stdio.h>

/**
*main - print lowercase a-z
*Return: Always 0 (Success)
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'A')
	{
		putchar(upper);
		upper++;
	putchar('\n');
	return (0);
}
