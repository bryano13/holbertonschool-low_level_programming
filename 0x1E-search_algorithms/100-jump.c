#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the value, -1 if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, step = sqrt(size);

	if (!array)
		return (-1);

	while (array[idx] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx += step;
		if (idx >= size)
			break;
	}
	idx -= step;
	printf("Value found between indexes [%d] and [%d]\n",
							 (int)idx, (int)(idx + step));

	while (array[idx] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx++;
		if (idx == size)
			return (-1);
	}

	if (array[idx] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		return (idx);
	}

	return (-1);
}
