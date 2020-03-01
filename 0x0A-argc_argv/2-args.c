#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: Args counter
 * @argv: Args array
 * Return: 1
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; argv[i] != '\0' ; i++)
		printf("%s\n", argv[i]);
	return (EXIT_SUCCESS);
}
