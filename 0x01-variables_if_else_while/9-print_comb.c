#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return:This prints single digit number followed by , followed by a space
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
