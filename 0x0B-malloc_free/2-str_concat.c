#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: First string to be worked on
 * @s2: Second string to be worked on
 *
 * Return: NULL on failure;
 * A pointer to the string if otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int index, length = 0, concat_i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		length++;
	
	concat = malloc(sizeof(char) * length);

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[concat_i] = s1[index];

	for (index = 0; s2[index]; index++)
		concat[concat_i] = s2[index];

	return (concat);
}
