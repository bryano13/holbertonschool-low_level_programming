#include <stdio.h>

/**
 * _strstr - returns the pointer to a string.
 * @haystack: main string.
 * @needle: second string.
 * Return: pointer to a string at location j.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (k = j, i = 0; needle[i] != '\0'; k++, i++)
		{
			if (haystack[k] != needle[i] || haystack[j] == '\0')
				break;
		}
		if (needle[i] == '\0')
			return (haystack + j);
	}
	return (NULL);
}


