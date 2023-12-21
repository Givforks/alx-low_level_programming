#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table.
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *traverse;
	unsigned long int j = 0, step = j;

	if (ht == NULL)
		return;

	printf("{");

	while (j < ht->size)
	{
		traverse = ht->array[j];
		while (traverse)
		{
			if (step)
			{
				printf("'%s': '%s'", traverse->key, traverse->value);
				step = 0;
			}
			else
				printf(", '%s': '%s'", traverse->key, traverse->value);

			traverse = traverse->next;
		}
		j++;
	}

	printf("}\n");
}
