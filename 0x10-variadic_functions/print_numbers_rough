#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers with a separator
 *
 * @separator: separotor
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
