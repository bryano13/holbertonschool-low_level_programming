#include "holberton.h"
unsigned int size_s1(char *s1);
unsigned int size_s2(char *s2);
/**
 * str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: concat pointer if succes otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, k;
	char *concat;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	size1 = size_s1(s1);
	size2 = size_s2(s2);
	concat = malloc(sizeof(char) * (size1 + size2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < (size1 + size2 + 1); k++)
		{
			if (k < size1)
			{
				concat[k] = s1[k];
			}
			else if (k < (size1 + size2))
			{
				concat[k] = s2[k - size1];
			}
			else
			{
				concat[k] = '\0';
			}
		}
		return (concat);
	}
}
/**
 * size_s1 - find the size of string 1
 * @s1: first string
 * Return: size of string (i)
 */
unsigned int size_s1(char *s1)
{
	unsigned int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * size_s2 - find the size of string 2
 * @s2: second string
 * Return: size of string (j)
 */
unsigned int size_s2(char *s2)
{
	unsigned int j;

	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	return (j);
}
