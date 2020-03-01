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
	int sw;

	i = j = count = 0, sw = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		sw = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				sw = 1;
			}
		}
		if (sw == 0)
			break;
	}

	return (count);
}
