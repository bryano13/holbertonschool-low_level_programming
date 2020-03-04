#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all the arguments of the program.
 * @ac: The size of the array.
 * @av: The array.
 *
 * Return: a pointer.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, cont = 0;
	char *la;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cont++;
		cont++;
	}
	cont++;
	la = malloc(cont * sizeof(char));
	if (la == NULL)
	{
		free(la);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			la[k] = av[i][j];
		la[k] = '\n';
		k++;
	}
	la[k] = '\0';
	return (la);
}
