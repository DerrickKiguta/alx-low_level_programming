#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints in reverse
 * @s: string to reverse
 * Return: none
 */
void print_rev(char *s)
{
int x = 0;

while (s[x] != '\0')
{
x++;
}

for (x = x - 1; x >= 0; x--)
{
putchar(s[x]);
}
putchar('\n');
}
