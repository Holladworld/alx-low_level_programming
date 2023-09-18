#include "hash_tables.h"

/**
 * hash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *current;
	
	unsigned long int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			current = node;
			node = node->next;
			if (current->key)
				free(current->key);
			if (current->value)
				free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}
