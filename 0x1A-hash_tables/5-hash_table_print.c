#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value from hash table
 *
 * @ht: pointer to hash table to be printed
 * Return: Key paired as presented in the order they appeared
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t  *node;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (flag)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
