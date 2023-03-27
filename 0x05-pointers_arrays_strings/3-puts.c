#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 *@str: string parameter
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str = str + 1;
}
putchar ('\n');
}
