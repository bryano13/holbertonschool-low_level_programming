/**
* _strchr - function that locates a char in string
* @s: given string
* @c: character to locate on string
* Return: return pointer to points a position of char
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}
