#include<stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @a: integer entered
 * Return: the absolute value
 */
int _abs(int a)
{
if (a < 0)
{
return (a * -1);
}
else
{
return (a);
}
}
