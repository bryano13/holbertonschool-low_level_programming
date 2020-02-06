#include <stdio.h>

/**
*main - prints hexadecimal base 0123456789abcdef, using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	int number = '0';
	int letter = 'a';

	while (number <= '9') /*print 0-9*/
	{
	putchar(number);
	number++;
	}

	while (letter <= 'f') /*print a-f to finish hexbase*/
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
