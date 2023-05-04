#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to
 * flip to get from one number to another
 * @n: The number to be flipped
 * @m: Number to flip to
 *
 * Return: Necessary number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int word = n ^ m, bit = 0;

	while (word > 0)
	{
		bit += (word & 1);
		word >>= 1;
	}

	return (bit);
}
