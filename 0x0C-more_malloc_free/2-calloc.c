#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmeb: The number of elements
 * @size: The byte size of each element
 *
 * Return: NULL if nmeb = 0, size = 0, or if malloc fails
 * otherwise return a pointer to allocated memory
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int index;

	if (nmeb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmeb);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (index = 0; index < (size * nmeb); index++)
		filler[index] = '\0';

	return (memory);
}
