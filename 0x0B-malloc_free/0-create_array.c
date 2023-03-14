#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an arrays of chars
 *
 * @size: The size of the array to be initialized
 * @c: The chaacter to initialize the array with
 *
 * Return: NULL if it fails or size = 0;
 * A pointer to the array if otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
