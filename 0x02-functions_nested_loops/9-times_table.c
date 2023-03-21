#include<stdio.h>
#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 * Return: Always 0.
 */
void times_table(void)
{
int x, j, mult;

for (x = 0; x <= 9; x++)
{
putchar('0');
putchar(',');
putchar(' ');
for (j = 1; j <= 9; j++)
{
mult = x * j;
if ((mult / 10) > 0)
{
putchar((mult / 10) + '0');
}
else
{
putchar(' ');
}
putchar((mult % 10) + '0');
if (j < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
