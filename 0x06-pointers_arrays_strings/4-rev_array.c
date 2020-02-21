#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - Compare two strings, output int based on comparison
 * @a: First string to compare
 * @n: Second string to compare
 *
 * Return: nothing:
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	tmp = i = 0;
	n--;
	for (i = 0; i < n; i++, n--)
	{											
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}

