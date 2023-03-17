#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return:This prints base 16 numbers
 */
int main(void)
{
int n;
char alp;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (alp = 'a'; alp <= 'f'; alp++)
{
putchar(alp);

}
putchar('\n');
return (0);
}
