#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints nill if null
 * @d: pointer to the structure addresss
 * Return: void
 */
void print_dog(struct dog *d)
{

	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nill)\n");
		if (d->age)
			printf("Age: %s\n", d->age);
		else
			printf("Age: (nill)\n");
		if (d->Owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nill)\n");
	}
}
