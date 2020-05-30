#include "hash_tables.h"

/**
 * hash_table_set - Sets a value in a given index
 * @ht: Hash table
 * @key: String to evaluate
 * @value: Value to insert
 * Return: It depends
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index = 0;
	hash_node_t *node = NULL, *tmp = NULL, *spot;

	if (!ht || !ht->array || !ht->size || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	tmp = node;
	while (tmp)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup((char *)value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	spot = allocate(key, value);
	if (!spot)
		return (0);
	spot->next = node;
	ht->array[index] = spot;

	return (1);
}

/**
 * allocate - function that allocates memory
 * @key: key in the hash
 * @value: value of that key
 * Return: node
 */

hash_node_t *allocate(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup((char *)key);
	if (!node->key)
		return (NULL);

	node->value = strdup((char *)value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;

	return (node);
}
