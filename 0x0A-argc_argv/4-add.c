#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int number(char *s);
/**
  * main - adds positive numbers
  * @argc: number of inputs
  * @argv: positive numbers
  *
  * Return: 0 or 1.
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (number(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
  * number - validate if a string is number
  * @s: string
  * Return: 1 if true, 0 if false
  **/
int number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

