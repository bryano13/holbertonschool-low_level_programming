#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two numbers.
 * @argc: Args counter
 * @argv: Args array
 * Return: 1=Success  0=Error
 */
int main(int argc, char **argv)
{
	int times;
	int i;
	int x;

	times = i = x = 1;
	if (argc == 3)
	{
		times = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", times);
		return (EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
}
