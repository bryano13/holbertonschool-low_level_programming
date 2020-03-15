#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print n number of strins
 * @n: number of strings parameters
 * Return: 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list comodin;

	unsigned int i;
	char *str;

	/*initialize comodin for num of arguments*/
	va_start(comodin, n);
	if (separator)
	{
		/*access all the arguments assigned to comodin*/
		for (i = 0; i < n; i++)
		{
			str = va_arg(comodin, char*);
			if (str)
			{
				printf("%s", str);
				if (i < n -1)
					printf("%s", separator);
			}
		}
		printf("\n");
		va_end(comodin);
	}
}
