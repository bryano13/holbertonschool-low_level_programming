#include "holberton.h"
/**
*print_last_digit - prints last digit of an int.
*
* @n : checked int
* Return: Always 0.
*/
int print_last_digit(int n)
{
	int module = 10 % n;

	if (module < 0)
	{
		module = module * -1;
	}
	_putchar = (module + '0');
	return (module);
}
