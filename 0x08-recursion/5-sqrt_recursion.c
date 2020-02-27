/**
 * _sqrt_recursion - Return natural square of number
 * @n: given number
 * @i: aux integer
 * Return: natural square
 */
int verifica(int n, int i);

int _sqrt_recursion(int n)
{
	int i;

	i = verifica(n, 1);
	return (i);
}

/**
 * verifica - verifies a number is square
 * @n: given number
 * @i: number to verify
 * Return: Natural square, -1 non square
 */

int verifica(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i > n)
	{
		return (-1);
	}
	else
		return (verifica(n, i + 1));
}
