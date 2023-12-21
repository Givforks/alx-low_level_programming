#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table.
 *
 * @ht: The hash table.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *traverse, *temp;

	if (ht == NULL)
		return;
	while (j < ht->size)
	{
		traverse = ht->array[j];
		while (traverse)
		{
			temp = traverse->next;
			free(traverse->key);
			free(traverse->value);
			free(traverse);
			traverse = temp;
		}
		j++;
	}

	free(ht->array);
	free(ht);
}
