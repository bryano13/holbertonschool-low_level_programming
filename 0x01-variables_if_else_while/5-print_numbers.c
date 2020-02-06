#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Prints number 0-9
*
*Return: Always 0 (Sucess)
*
*/
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
