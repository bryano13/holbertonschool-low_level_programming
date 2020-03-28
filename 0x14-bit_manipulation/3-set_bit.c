#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: base 10 number
 * @index: index to insert
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int data;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	/*'1' moved index times*/
	data = 1 << index;
	*n = *n | data;
	return (1);
}
