#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it.
 * @argc: Args counter
 * @argv: Args array
 * Return: 1
 */
int main(int argc, char **argv __attribute__((unused)))
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (EXIT_SUCCESS);
}
