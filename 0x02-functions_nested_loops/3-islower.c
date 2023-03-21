#include <stdio.h>

/**
 * _islower - checks if lower
 *@a: char entered
 * Return: return 1 if lower or 0
 */
int _islower(int a)
{
	if (a >= 'a' && a < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
