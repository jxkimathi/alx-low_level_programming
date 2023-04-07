#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The bit
 * @index: The index
 *
 * Return: -1 if an error occurs
 * Otherwise the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
