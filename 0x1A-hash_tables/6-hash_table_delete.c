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
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
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
