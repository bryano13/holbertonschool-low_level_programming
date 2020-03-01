#include "holberton.h"
/**
**_strcpy-function that copy an array
*@dest: variable that copy the array
*@src: array to copy
*Return: the array copied
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
