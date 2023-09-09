#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table
 * ht: Pointer to the hash table
 */

void hash_table_print(const hast_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsighed char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}

			flag = 1;
		}
	}

	printf("}\n");
}
