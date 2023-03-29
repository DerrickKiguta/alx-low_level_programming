#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		int temp = a[i];

		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
