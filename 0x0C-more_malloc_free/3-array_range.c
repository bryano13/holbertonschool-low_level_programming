#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers from min to max.
 * @min: lowest number.
 * @max: highest number.
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int j;
	int *ar;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (j = 0 ; min <= max; min++, j++)
	{
		ar[j] = min;
	}
	return (ar);
}
