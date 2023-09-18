#include "hash_tables.h"
/**
 * hash_table_set - function that add or update an element to the hash table
 * @ht: pointer to hash table
 * @key: key to add the element - key must not be empty string
 *
 * @value: value to add the element
 *
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *hash_value, *hash_keycopy;
	hash_node_t  *nodes, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	hash_value = strdup(value);
	if (!hash_value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	nodes = ht->array[index];

	while (nodes)
	{
		if (!strcmp(key, nodes->key))
		{
			free(nodes->value);
			nodes->value = hash_value;
			return (1);
		}
		nodes = nodes->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(hash_value);
		return (0);
	}
	hash_keycopy = strdup(key);
	if (!hash_keycopy)
		return (0);

	new_node->key = hash_keycopy;
	new_node->value = hash_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
