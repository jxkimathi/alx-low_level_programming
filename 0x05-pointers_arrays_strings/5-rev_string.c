#include "main.h"

/**
 * rev_string - reverses a string
 * @: string to be reversed
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, c, k;
	char v;

	for (i = 0; s[i] != '\0'; i++)
	;
	c = 0;
	k = 1 / 2;

	while (k--)
	{
		v = s[i - c - 1];
		s[i - c - 1] = s[c];
		s[c] = v;
		c++;
	}
}
