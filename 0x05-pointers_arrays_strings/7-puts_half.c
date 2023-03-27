#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of the string
 * @str: input string to print
 * Return: nothing
 */
void puts_half(char *str)
{
int midlen;
int len;

len = strlen(str);
midlen = len / 2;
if (len % 2 == 1)
{
midlen++;
}
while (midlen < len)
{
putchar(str[midlen]);
midlen++;
}
putchar('\n');
}
