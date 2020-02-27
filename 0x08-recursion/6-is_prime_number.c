/**
 * is_prime_number - returns if a number is prime or not
 * @p: given number
 * @i: number to evaluate
 * Return: 1 = prime  0 =  not prime
 */

int verifica(int p, int i);


int is_prime_number(int n)
{
	int i;

	if (n == 1)
	{
		return (0);
	}
	else if (n <= 0)
	{
		return (0);
	}
	else
	{
		i = verifica(n, 2);
		return (i);
	}
}
/**
* verifica - verify is a number p is prime of i
* @p: given number
* @i: number to evaluate is module of i
* Return: 1=prime 0 = not prime
 **/
int verifica(int p, int i)
{
	if (p % i == 0 && i < p)
	{
		return (0);
	}
	else if (i == p)
	{
		return (1);
	}
	else
	{
		return (verifica(p, i + 1));
	}
}
