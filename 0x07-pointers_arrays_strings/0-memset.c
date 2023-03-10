#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; n > 0; c++, n--)
	{
		s[c] = b;
	}

	return (s);
}
