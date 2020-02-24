/**
 * _memset - function that fill memory with a constant type
 * @s: given string
 * @b: given char to fill
 * @n: given integer to print n times
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
