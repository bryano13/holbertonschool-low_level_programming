#include "search_algos.h"
/**
  * interpolation_search - search the first ocurrency of a value in the array
  * @array: set of numbers
  * @size: size of the array
  * @value: value to search
  * Return: return the first index located, otherwise -1
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, pos = 0;

	if (!array)
		return (-1);
	pos = left + (((double)(right - left) / (array[right] - array[left]))
					 * (value - array[left]));
	if (pos >= size)
		printf("Value checked array[%d] is out of range\n", (int)pos);
	while ((array[right] != array[left]) && (value >= array[left])
			 && (value <= array[right]))
	{
		pos = left + (((double)(right - left) / (array[right] - array[left]))
						 * (value - array[left]));
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] < value)
			left = pos + 1;
		else if (array[pos] > value)
			right = pos - 1;
		else
			return (pos);
	}
	if (array[left] == value)
		return (left);
	return (-1);
}
