#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/*Prototype of the function strcopy*/
char *_strcopy(char *dest, char *str);
/**
* new_dog - function that creates a new dog.
* @name: new name
* @age: new age
* @owner: new owner
* Return: dog named willy.
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *willy;
	char *cpname;
	char *cpowner;
	int ln = 0;
	int lo = 0; /*lengths of both strings (name and owner).*/

	/*Calculates the string lenght of the strings*/
	for (ln = 0; name[ln] != '\0'; ln++)
		;
	for (lo = 0; owner[lo] != '\0'; lo++)
		;
	/*Creating copies of the two strings given in the heap*/
	cpname = malloc(ln + 1);
	if (cpname == NULL)
		return (NULL);
	cpowner = malloc(lo + 1);
	if (cpowner == NULL)
	{
		free(cpname);
		return (NULL);
	}
	/*Creating space on the heap for the new struct*/
	willy = malloc(sizeof(dog_t));
	if (willy == NULL)
	{
		free(cpname);
		free(cpowner);
		return (NULL);
	}
	_strcopy(cpname, name);
	_strcopy(cpowner, owner);

	willy->name = cpname;
	willy->age = age;
	willy->owner = cpowner;

	return (willy);

}
/**
  * _strcopy- function that copies a given string.
  * @dest: copy of string str.
  * @str: string that gets copied in dest.
  * Return: dest.
  */
char *_strcopy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	dest[i] = str[i];
	return (dest);
}
