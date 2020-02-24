/**
 * _memcpy - fucntion that copies memory area.
 * @dest: given strint
 * @src: string to copy
 * @n: number of char to copy
 * Return: string dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[src] = s[dest];
	}
	return (dest);
}

