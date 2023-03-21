#include <stdio.h>
#include "main.h"
/**
 * print_sign - returns 1 and print + if n is greater than 0
 *
 * @n:  char entered
 *
 * Return: -1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
