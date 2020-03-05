#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Function that returns malloc for int b.
 * @b: space reserved trough malloc.
 * Return: a pointer to the new space created.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
