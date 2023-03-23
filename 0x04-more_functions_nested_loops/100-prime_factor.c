#include <stdio.h>

/**
 * largest_prime_factor - finds and returns the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor of n
 */
long largest_prime_factor(long n)
{
    long i;

    for (i = 2; i <= n; i++)
    {
        while (n % i == 0 && n != i)
            n /= i;
    }

    return n;
}
