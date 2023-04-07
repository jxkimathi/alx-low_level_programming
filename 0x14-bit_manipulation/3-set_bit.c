#include "main.h"

/**
 * set_bit - Sets value of a bit to 1
 * @n: pointer to the bit
 * @index: the index
 *
 * Return: -1 if an error occurs
 * Otherwise return 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
