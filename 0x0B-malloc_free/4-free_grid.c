#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free memory grid
 * @grid: pointer to pointer (int **)
 * @height: height (int)
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(*(grid + i++));

	free(grid);
}
