/**
 * _strchr - find and cut from c to null
 * @s: array in
 * @c: char to search
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	while (2)
	{
		if (s[j] == c)
			return (s + j);
		if (s[j] == '\0')
			return ('\0');
	j++;
	}
}
