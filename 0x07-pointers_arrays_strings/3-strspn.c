/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: given string
 * @accept:  substring
 * Return: times letters repeat on string
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	i = j = count = 0;
	for (i = 0; (s[i] != '\0') && (s[i] != 32); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}

	return (count);
}
