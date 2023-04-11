#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - program that adds positive number
 * @argc: argument numbers
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, total, length, h;

	if ((argc + 1) == 0)
	{
		printf("%d", 0);
	}
	else
	{
		total = 0;
		for (i = 1; i < argc; i++)
		{
			length = strlen(argv[i]);
			for (h = 0; h < length; h++)
			{
			if (isdigit(*(argv[i] + h)) == 0)
			{
			printf("Error\n");
			return (1);
			}
			}
			total += atoi(argv[i]);
		}
		printf("%d\n", total);
	}
	return (0);
}
