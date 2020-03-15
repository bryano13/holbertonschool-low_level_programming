#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_chars - prints characters
 * @str_numbers: parameter
 * Return: void
 */
void print_chars(va_list str_numbers)
{
	printf("%c", va_arg(str_numbers, int));
}
/**
 * print_integers - prints integers
 * @str_numbers: parameter
 * Return: void
 */
void print_integers(va_list str_numbers)
{
	printf("%d", va_arg(str_numbers, int));
}
/**
 * print_floats - prints floats
 * @str_numbers: parameter
 * Return: void
 */
void print_floats(va_list str_numbers)
{
	printf("%f", va_arg(str_numbers, double));
}
/**
 * print_string - prints strings
 * @str_numbers: parameter
 * @str_numbers: parameter
 */
void print_string(va_list str_numbers)
{
	char *str = va_arg(str_numbers, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: constant pointer
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;

	f_t formats[] = {
		{"c", print_chars},
		{"i", print_integers},
		{"f", print_floats},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list str_numbers;
	char *separate = "";

	va_start(str_numbers, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (formats[j].symbol != NULL)
		{
			if (formats[j].symbol[0] == format[i])
			{
				printf("%s", separate);
				formats[j].p(str_numbers);
				separate = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(str_numbers);
}
