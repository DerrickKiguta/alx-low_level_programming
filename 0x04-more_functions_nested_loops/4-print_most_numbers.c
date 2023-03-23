#include <stdio.h>


/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
int a;

for (a = 0; a <= 9; a++)
{
if (a == 2 || a == 4)
{
}
else
{
putchar('0' + a);
}
}
putchar('\n');
}
