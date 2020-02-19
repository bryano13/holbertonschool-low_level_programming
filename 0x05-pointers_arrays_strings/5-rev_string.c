#include "holberton.h"

/**
 * rev_string - prints an string in reverse
 * @s: input string to print reverse
 * Return: none
 */

void rev_string(char *s)
{
	char tmp;
	int i;
	int j;
	int k;

	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1; /*Here is stored the second last position of the array*/

	while (j < k)
	{
		tmp = s[j];
		s[j] = s[k];
		s[k] = tmp;
		j++;
		k--;
	}
}
