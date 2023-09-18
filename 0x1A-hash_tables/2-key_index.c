#include "hash_tables.h"

/**
 * key_index -  function that gives you the index of a key.
 * It is stored in  array of hash table
 *
 * @key: key to get the index (string) to hash
 * @size: size of hash table (array)
 *
 * Return: index of 'key' using djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
