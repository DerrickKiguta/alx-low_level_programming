#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check alphabetic character
 *@c: letter
 * Return: 1 id c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
