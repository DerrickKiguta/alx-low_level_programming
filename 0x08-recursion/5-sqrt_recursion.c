int perfect_square(int n, int c);
/**
 * _sqrt_recursion - Solve the square root by recussion
 *
 * @n: The squared digit
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (perfect_square(n, 1));
}
/**
 * perfect_square - Returns the square
 *
 * @n:  number to be squared
 * @c:  the counter
 *
 * Return: Square root or -1
 */
int perfect_square(int n, int c)
{
	if (c < n / 2)
	{
		if (c * c == n)
		{
			return (c);
		}
		return (perfect_square(n, c + 1));
	}
	return (-1);
}
