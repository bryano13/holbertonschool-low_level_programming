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

void print_integers(va_list str_numbers)
{
	printf("%d", va_arg(str_numbers, int));
}

void print_floats(va_list str_numbers)
{
	printf("%f", va_arg(str_numbers, double));
}

void print_string(va_list str_numbers)
{
	printf("%s", va_arg(str_numbers, char *));
}


void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list str_numbers;

	f_t formats[] = {
		{"c", print_chars},
		{"i", print_integers},
		{"f", print_floats},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(str_numbers, format);

	while (format[i] != '\0' && format)
	{
		j = 0;
		while (formats[j].symbol != NULL)
		{
			if (formats[j].symbol[0] == format[i])
			{
				formats[j].p(str_numbers);
				if (formats[j + 1].symbol != NULL)
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(str_numbers);
}
