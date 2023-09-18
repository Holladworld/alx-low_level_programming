#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: size of the hash table which is an array
 *
 * Return: If an error occur - NULL
 * else pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	if (size == 0)
		return (NULL);
/* allocate space for the hash table */
	new_hash_table = calloc(1, sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	return (new_hash_table);
}
