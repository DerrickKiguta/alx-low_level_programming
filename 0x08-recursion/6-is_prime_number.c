#include <stdio.h>

int more_prime(int n, int c);
/**
 * is_prime_number - checks if its prime
 *
 * @n:number to be checked
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	return (more_prime(n, 2));
}
/**
 * more_prime - Itereates over and tries each combination
 * @n: The number being checked
 * @c: The counter
 *
 * Return: 1 if prime 0 otherwise
 */
int more_prime(int n, int c)
{
	if (n % c == 0)
	{
		return (0);
	}
	else if (c > n / 2)
	{
		return (1);
	}
	return (more_prime(n, c + 1));
}
