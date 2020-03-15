#include "variadic_functions.h"
/**
 * print_numbers - prints numbers received as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;
	int number;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(numbers, int);
		printf("%d", number);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
