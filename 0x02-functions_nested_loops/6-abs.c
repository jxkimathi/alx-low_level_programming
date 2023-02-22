#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @c: The number to be computed
 *
 * Return: Absolute number of integer or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
