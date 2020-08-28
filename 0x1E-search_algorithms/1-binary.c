#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the value. -1 if the array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int begin = 0, mid, end = size - 1, i;

	if (!array)
		return (-1);

	while (begin <= end)
	{
		printf("Searching in array: ");
		for (i = begin; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		mid = (begin + end) / 2;

		if (value > array[mid])
			begin = mid + 1;
		else if (value < array[mid])
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
