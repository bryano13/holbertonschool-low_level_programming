#include <stdio.h>
/**
 * is_palindrome - returns if a string is palindrome
 * @s: given string
 * valida - validates if a string is palindrome
 * Return: 1=palindrome 0= not
 */
int  _strlen_recursion(char *s);
int valida(int i, int l, char *s);

int is_palindrome(char *s)
{
	int i;
	int len;

	i = len = 0;

	len = _strlen_recursion(s);
	i = valida(0, len - 1, s);
	return (i);
}
/**
  * _strlen_recursion - size of string
  * @s: given string
  * Return: Size of string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		len = len + _strlen_recursion(s + len);
		return (len);
	}
	else
		return (0);
}
/**
 * valida - validates a string is palindrome
 * Return: 1 - palindrome 0 - not
 * @i: initial position
 * @l: final position
 * @s: string
 */

int valida(int i, int l, char *s)
{
	if (i >= l)
	{
		return (1);
	}
	else if (s[i] != s[l])
	{
		return (0);
	}
	else if (s[i] == s[l])
	{
		return (valida((i + 1), (l - 1), s));
	}
	return (1);
}
