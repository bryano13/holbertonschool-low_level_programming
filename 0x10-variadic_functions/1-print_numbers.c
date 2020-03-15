#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints all number.
 *
 * Return: Void. 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list comodin;

	unsigned int i;
	int number = 0;
	
	/*initialize comodin for n number of arguments*/
	va_start(comodin, n);
	if (separator != NULL)
	{
		/*access all the arguments with assign to comodin*/
		for (i = 0; i < n; i++)
		{
			number = va_arg(comodin, int);
			printf("%d", number);
			if (i < n -1)
				printf("%c ", separator[0]);
		}
		printf("\n");
		/*clear memory reserved for comodin*/
		va_end(comodin);
	}
}
