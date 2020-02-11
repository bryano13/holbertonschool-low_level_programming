#include "holberton.h"
/**
*  _abs - program that computes the absolute value of an integer
* Return: n - absolute value of n
*  @n: number to check
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
