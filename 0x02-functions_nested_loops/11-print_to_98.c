#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: number to be printed to 98
 * Return: all numbers to 98
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
