#include <stdio.h>

/**
 * _pow_recursion - power
 *
 * @x:the number
 * @y:Factor to be raised by
 *
 * Return: always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
