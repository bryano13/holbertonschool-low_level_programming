#include "holberton.h"
/**
*  _isalpha - program that evaluates if a char is alphabetic
*  @c: Letter to check
* Return: 1 is alpha ; 0 not alpha
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
