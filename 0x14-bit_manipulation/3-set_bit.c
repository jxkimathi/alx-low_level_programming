#include "main.h"

/**
 * set_bit - Sets the values of a bit to 1
 * @n: Pointer to the bit
 * @index: Index to set the value to 0
 *
 * Return: -1 on error
 * Otherwise 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
