#include <stdio.h>

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
int di;
int x;

if (n > 0)
{
for (x = 0; x < n; x++)
{
for (di = 0; di < x; di++)
{
putchar(' ');
}
putchar(92);
putchar('\n');
}
}
else
{
putchar('\n');
}
}
