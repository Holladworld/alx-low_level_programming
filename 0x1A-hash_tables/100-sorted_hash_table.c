#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash tables
 * @size: size of the hash table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	if (size == 0)
		return (NULL);

	hash_table = calloc(1, sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(shash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}

/**
 * sorted_list - function for insert new node in sorted
 * @ht: pointer to sorted hash table
 * 
 * @new_node: pew node to insert
 *
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
        shash_node_t *snode = ht->shead;

        if (snode == NULL)
        {
                ht->shead = ht->stail = new_node;
                new_node->snext = new_node->sprev = NULL;
                return;
        }
        do {
                if (strcmp(new_node->key, snode->key) < 0)
                {
                        new_node->snext = snode;
                        new_node->sprev = snode->sprev;

                        if (!snode->sprev)
                                ht->shead = new_node;
                        else
                                snode->sprev->snext = new_node;
                        snode->sprev = new_node;
                        return;
                }
                snode = snode->snext;
        } while (snode);
        new_node->sprev = ht->stail;
        new_node->snext = ht->stail->snext;
        ht->stail->snext = new_node;
        ht->stail = new_node;
}

/**
 * shash_table_set - function that adds an element to the sorted hash table
 * @ht: pointer to sorted hash table
 * @key: key to add the element cant be empty string
 *
 * @value: value to add the element
 *
 * Return: 1 if success, 0 if failed
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *hash_value, *hash_key;
	shash_node_t  *node, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);
	hash_value = strdup(value);
	if (!hash_value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(key, node->key))
		{
			free(node->value);
			node->value = hash_value;
			return (1);
		}
		node = node->next;
	}
	new_node = calloc(1, sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(hash_value);
		return (0);
	}

	hash_key = strdup(key);
	if (!hash_key)
		return (0);

	new_node->key = hash_key;
	new_node->value = hash_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sorted_list(ht, new_node);

	return (1);
}
/**
 * shash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value or NULL if key does not exit.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t  *node;

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

/**
 * shash_table_print - function to print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int index = 0;

	if (!ht)
		return;
	node = ht->shead;
	printf("{");
	while (node)
	{
		if (index)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		index = 1;
		node = node->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function to print the key:value from ht in reverse
 * @ht: pointer to hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int index = 0;

	if (!ht)
		return;
	node = ht->stail;
	printf("{");
	while (node)
	{
		if (index)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		index = 1;
		node = node->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *hash_free;
	unsigned long int index = 0;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			hash_free = node;
			node = node->next;
			if (hash_free->key)
				free(hash_free->key);
			if (hash_free->value)
				free(hash_free->value);
			free(hash_free);
		}
	}
	free(ht->array);
	free(ht);
}

