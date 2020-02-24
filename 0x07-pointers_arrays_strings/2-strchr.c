/**
 * *_strchr - find and cut
 * @s: array in
 * @c: char to search
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (i == c)
			return (s + i);
		else
			return (NULL);
	}
}
