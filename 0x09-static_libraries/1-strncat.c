#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: character to be used
 * @src: character to be used
 * @n: integer to be used
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *c = dest;

	/*Find the end of dest first*/
	while (*c != '\0')
	{
		c++;
	}
	/*Append up to n bytes from src*/
	while (*src != '\0' && n-- > 0)
	{
		*c++ = *src++;
	}
	/*Add a null terminator*/
	*c = '\0';
	return (dest);
}
