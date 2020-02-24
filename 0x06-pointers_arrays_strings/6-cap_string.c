/**
* cap_string - function that capitalizes all words of a string
* @a: string
* Return: string changed
**/

char *cap_string(char *a)
{
	int i, j;
	char ex[] = {' ', '\t', '\n', ',', ';',
			'.', '!', '?', '"', '(', ')', '{', '}'};

	if (a[0] >= 'a' && a[0] <= 'z')
	{
		a[0] -= 32;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (ex[j] == a[i])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				{
					a[i + 1] -= 32;
				}
			}
		}
	}
	return (a);
}
