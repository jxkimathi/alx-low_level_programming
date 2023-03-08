#include "main.h"
/**
 * powop - returns natural square root
 * @n: input number
 * @c: iterator
 *
 * Return: square root or -1
 */
int powop(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + powop(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: if n < 0; return -1
 * if n > 0; return value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (n);

	if (n == 1)
		return (n);

	else
		return (powop(n, 2));
}
