#include <stdio.h>

/**
 * puts2 - writes every other character
 * @str: input string to print
 * Return: nothing
 */
void puts2(char *str)
{
int x;

x = 0;
while (str[x] != '\0')
{
if (x % 2 == 0)
putchar(str[x]);
x++;
}
putchar('\n');
}
