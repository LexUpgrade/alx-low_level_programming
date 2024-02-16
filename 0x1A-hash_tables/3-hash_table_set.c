#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: A Hash Table
 * @key: key for insertion
 * @value: value for insertion
 *
 * Return: 1 if it succeeds, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index, i;
	hash_node_t *node;
	char *val;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);
	val = strdup(value);
	if (val == NULL)
		return (0);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(val);
		return (0);
	}
	
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(val);
		free(node);
		return (0);
	}
	node->value = val;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
