#include "hash_tables.h"

/**
 * key_index - Brings the key of the value
 * @key: String to evaluate
 * @size: Size of the array
 * Return: Index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}