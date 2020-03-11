#include <stdio.h>

/**
 * array_iterator - prints all the numbers inside an array.
 * @array: Array of numbers to be printed.
 * @size:  Size of the array.
 * action: Function pointer.
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /*unsigned int is the same as saying size_t*/

	if (array == NULL || size <= 0 || action == NULL)
		return;
	/* Iterate inside a for loop to be able to print all numbers of the array*/
	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
