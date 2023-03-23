#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor of n
 */
long largest_prime_factor(long n)
{
    long i;

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            n /= i;
            i--;
        }
    }

    return i;
}

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
    long n = 612852475143;

    printf("%ld\n", largest_prime_factor(n));

    return 0;
}
