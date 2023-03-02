#include "main.h"

/**
 * _strcat - cocantenates two strings
 * @dest: character to be used
 * @src: character to be used
 *
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*c != '\0')
	{
		c++;
	}
	while (*src != '\0')
	{
		*c = *src;
		c++;
		src++;
	}

	*c = '\0';
	return (dest);
}
