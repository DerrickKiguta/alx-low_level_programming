#include<stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a:The number
 * Return: the last didgin of the number
 */
int print_last_digit(int a)
{
int last = a % 10;
if (last < 0)
{
last = last * -1;
_putchar(last + '0');
return (last);
}
else
{
_putchar(last + '0');
return (last);
}
return (last);
}
