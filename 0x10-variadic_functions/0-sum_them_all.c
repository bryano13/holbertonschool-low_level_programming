#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all the arguments together
 * @n: number of arguments that enter the function
 * Return: an integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list comodin;

	int sum = 0;
	unsigned int i;

	/*Initialize comodin for n number of arguments*/
	va_start(comodin, n);

	/*access all the arguments assiged to valist*/
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(comodin, int);
	}
	/*clear memory reserved for valist*/
	va_end(comodin);

	return (sum);
}
