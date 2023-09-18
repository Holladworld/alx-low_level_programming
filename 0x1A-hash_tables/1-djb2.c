#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * Its for computing hash of 'str' using djb2
 *
 * @str: string to hash
 *
 * Return: Calculate hash (value of 64 bits)
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int index;

	hash = 5381;
	while ((index = *str++))
	{
		hash = ((hash << 5) + hash) + index; /* hash * 33 + index */
	}
	return (hash);
}

/*
 *
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;  # hash * 33 + c
	}
	return (hash);
}
*/
