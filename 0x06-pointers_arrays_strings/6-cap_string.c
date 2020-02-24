/**
 * cap_string - Program that capitalizes a string
 * @c: given string
 * Return: String cap
 */
char *cap_string(char *c)
{
	int upper;
	int i;
	int j;
	char s[] = {" \t\n,;.!?\"(){}"};

	i = 0;
	upper = 1;
	while (c[i] != '\0')
	{
		if ((c[i] >= 97 && c[i] <= 122) && upper == 1)
		{
			c[i] = c[i] - 32;
		}
		upper = 0;
		for (j = 0; j < 12; j++)
		{
			if (c[i] == s[j])
			{
				upper = 1;
			}
		}
		i++;
	}
	return (c);
}
