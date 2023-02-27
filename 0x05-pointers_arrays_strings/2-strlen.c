#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be returned
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (0);
}
