#include <stdlib.h>

int strlength(char *s1);
/**
 * *str_concat - concantenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Null on failure a new string otherwise
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int length1;
	int length2;
	int length_conc;
	char *concat;

	if (s1 == NULL)
	{
		length1 = 1;
	}
	else
	{
		length1 = strlength(s1);
	}
	if (s2 == NULL)
	{
		length2 = 1;
	}
	else
	{
	length2 = strlength(s2);
	}
	length_conc = (length1 + 1) + (length2);
	concat = malloc(sizeof(char) * length_conc);
	if (concat == 0)
	{
		return (0);
	}
	for (i = 0; i <= length1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0, i = length1; j <= length2; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[length_conc] = '\0';
	return (concat);
}
/**
 * strlength - checks length of string
 *
 * @s1:string of interest
 *
 * Return: length
 */
int strlength(char *s1)
{
	int length;
	int i;

	length = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
