

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return:This returns a negative or positive number
 */
int main(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
putchar(n);
}
for (n = 'A'; n <= 'Z'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
