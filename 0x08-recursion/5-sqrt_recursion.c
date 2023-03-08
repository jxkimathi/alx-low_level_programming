#include "main.h"

/** 
 * _sqrt - natural square root
 * @c: input number
 *
 * Return: if n < 0; return -1
 * if n >= 0; return value
 */
int _sqrt(int n)
{
	int x = _sqrt_recursion(n - 1) + 1;

	if (x * x > n)
		return (x - 1);

	else if (x * x == n)
		return (x);

	else
		return (_sqrt_recursion(n - 1) + 1);
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
		return (_sqrt(n));
}
