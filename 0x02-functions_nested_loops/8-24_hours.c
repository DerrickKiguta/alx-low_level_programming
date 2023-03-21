#include<stdio.h>

/**
 * jack_bauer - prints every minute of the day of starting from 00:00 to 23:59
 * hr = hour , mi = minutes
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
int hr, mi;

for (hr = 0; hr < 24; hr++)
{
for (mi = 0; mi < 60; mi++)
{
putchar((hr / 10) + '0');
putchar((hr % 10) + '0');
putchar(':');
putchar((mi / 10) + '0');
putchar((mi % 10) + '0');
putchar('\n');
}
}
}
