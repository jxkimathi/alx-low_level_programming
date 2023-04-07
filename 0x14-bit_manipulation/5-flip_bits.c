#include "main.h"

/**
 * flip_bits - Returns number of bits needed to flip
 * @n: Number to be flipped
 * @m: Number to flip n to
 *
 * Return: Necessary number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int noir = n ^m, bits = 0;

	while (noir > 0)
	{
		bits += (noir &1);
		noir >>= 1;
	}

	return (bits);
}
