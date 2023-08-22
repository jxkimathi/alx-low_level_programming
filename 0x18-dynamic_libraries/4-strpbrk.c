#include "main.h"

/**
 * _strpbrk - searches for a string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: a pointer to byte s that matches the one in accept
 * or NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return ('\0');
}
