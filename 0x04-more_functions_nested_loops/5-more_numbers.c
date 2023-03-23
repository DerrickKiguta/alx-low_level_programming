#include <stdio.h>

/**
* more_numbers - check the code
*/
void more_numbers(void)
{
int x;
int j;

for (x = 0; x <= 9; x++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
putchar((j / 10) + '0');
putchar((j % 10) + '0');
}
putchar('\n');
}
}
