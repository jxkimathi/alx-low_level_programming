#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: The size of the array
 *
 * Return: Null upon error otherwise a pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int index;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		hash->array[index] = NULL;

	return (hash);
}
