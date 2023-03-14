#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string; duplicate of the string
 *
 * @str: String to be duplicated
 *
 * Return: NULL if insufficient memory or if string = NULL;
 * A pointer otherwise
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, length;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] ; index++)
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[length] = '\0';

	return (duplicate);
}
