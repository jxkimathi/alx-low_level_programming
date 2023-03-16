#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: Memory size of previously allocated memory
 * @new_size: Memory size of newly allocated memory
 *
 * Return: ptr if old_size == new_size
 * NULL if new_size = 0 and ptr is not NULL
 * A pointer to the allocated memory otherwise
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptr_cpy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cpy = ptr;

	memory = malloc(sizeof(*ptr_cpy) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memory;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_cpy++;

	free(ptr);
	return (memory);
}
