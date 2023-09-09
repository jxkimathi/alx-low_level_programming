#include "hash_tables.h"

/**
 * key_index - Get index where key is stored
 * @key: The key to be found
 * @size: The sizee to be goyyen
 *
 * Return: Index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
