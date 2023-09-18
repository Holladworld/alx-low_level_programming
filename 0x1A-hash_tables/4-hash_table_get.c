#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve value associated with key
 * in hash table
 *
 * @ht: A pointer to hash table
 * @key: The key to retrive value
 *
 * Return: valueif key is associated with key in ht
 * or NULL if key does not exit or match.
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = 0;


	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(key, node->key))

			return (node->value);

		node = node->next;
	}
	return (NULL);
}
