#include "main.h"
#include <string.h>

/**
 * _strpbrk - get the length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be evaluated
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
