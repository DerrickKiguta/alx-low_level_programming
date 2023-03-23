#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n *= -1;
    }

    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    print_number(12345);
    _putchar('\n');
    return (0);
}
