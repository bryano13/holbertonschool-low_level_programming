#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings in a newly created in the heap.
 * @n: máx. size of the sring 2.
 * @s1: String 1.
 * @s2: String 2.
 * Return: the string concatenated if success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* First step is to count the strlen of s1*/
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	/* if n is lower than j, trim s2 to be the size of n*/
	if (n < j)
		j = n;
	/* Reserve me some space for my new string on the dynamic memory (heap)*/
	concat = malloc((j + i) * sizeof(char));
	{
		for (sum = 0; sum < i; sum++)
		{
			concat[sum] = s1[sum];
		}
		/*sum++;*/
		for (k = 0; k <= j; k++, sum++)
			concat[sum] = s2[k];
		concat[sum + 1] = '\0';
	}
	return (concat);
}
