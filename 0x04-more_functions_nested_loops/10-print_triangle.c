#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: checks the height
 * Return: Always 0.
 */
void print_triangle(int size)
{
int row;
int col;
int sp;

if (size <= 0)
{
putchar('\n');
}
else
{
for (row = 0; row < size; row++)
{
for (col = size - 1; col > row; col--)
putchar(' ');
{
for (sp = 0; sp <= col; sp++)
putchar(35);
}
putchar('\n');
}
}
}
