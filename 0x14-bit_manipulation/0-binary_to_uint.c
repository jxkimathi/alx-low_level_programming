#include "main.h"

/**
 * binary_to_uint - converta a binary
 * number to an unsigned int
 * @b: binary to be converted
 *
 * Return: if b is NULL or contains
 * chars not 0 or 1 - 0
 * Otherwise - converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '\0') || (b[len] == '\0'))
	{
		number <<= 1;
		number += b[len] - '0';
		len++;
	}

	return (number);
}
