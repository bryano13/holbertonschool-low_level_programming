#include "holberton.h"

/**
 *print_alphabet 10x -prints alpahbet in lower case 10 times
 *
 *return: Always 0 (Success).
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
