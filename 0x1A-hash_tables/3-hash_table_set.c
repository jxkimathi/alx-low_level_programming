#include "hash_tables.h"

/**
 * hash_table_set - Update element in a hash table
 * @ht: Pointe to hash table
 * @key: The key to update
 * @value: The value of the key
 *
 * Return: 0 upon failure and 1 upon success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *copy;
	unsigned long int i, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copy);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = copy;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
