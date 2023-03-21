#include <stdio.h>
#include <string.h>

/**
 * main - prints _putchar followed by new line
 *
 * Return: Should return 0
 *
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
