#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return:This returns alphabets in lowercase
 */
int main(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
if (n != 'e' && n != 'q')
{
putchar(n);
}
}
putchar('\n');
return (0);
}
