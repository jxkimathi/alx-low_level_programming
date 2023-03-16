#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: First integer of the array
 * @max: Last integer of the array
 *
 * Return: NULL if min > max or if malloc fails
 * A pointer to the newly created array otherwise
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
