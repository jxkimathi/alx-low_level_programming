#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: integer to be factored
 *
 * Return: if n < 0; return -1
 * if n > 0; return factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n -1));
	}
}
