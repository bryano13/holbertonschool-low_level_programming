#include "holberton.h"

/**
 *print_alphabet -prints alpahbet in lower case
 *
 *return: Always 0 (Success).
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
