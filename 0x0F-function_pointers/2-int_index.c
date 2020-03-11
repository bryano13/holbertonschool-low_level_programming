#include <stdio.h>

/**
 * int_index - Counts the number of matches for each fucntion
 * @cmp: Function pointer
 * @size: size of the array
 * @array: an array of integers
 * Return: -1 or another integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	/*Count how many times the functions return a value different than cero*/

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			/*Count all the matches*/
			index++;
		}
	}
	return (index);

}
