#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function to get the type of operator
 * @s: operator
 * Return: pointer to operation function
 */

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

int (*get_op_func(char *s))(int, int)
{
	int i;

	for (i = 0; i < 5 && *s != *ops[i].op; i++)
	{
		/*stops i when the one of the characters is found*/
	}
	if (s == NULL || s[1] != '\0' || *s != *ops[i].op)
	{
		printf("Error\n");
		exit(99);
	}
	return (ops[i].f);
}
