#include <stdio.h>

/**
 * print_square -  prints a square, followed by a new line
 * @size: input number of times '#' should be printed
 * Return: a square
 */
void print_square(int size)
{
int sq;
int x;

if (size <= 0)
{
putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (sq = 0; sq < size; sq++)
{
putchar(35);
}
putchar('\n');
}
}
}
