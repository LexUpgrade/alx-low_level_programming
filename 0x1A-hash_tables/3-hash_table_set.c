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
	int i;
	size_t index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);

	i = index;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			if (ht->array[i]->value == NULL)
				return (0);
			return (1);
		}
		i++;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	if ((node->key = strdup(key)) == NULL)
	{
		free(node);
		return (0);
	}
	if ((node->value = strdup(value)) == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;
	ht->array[index] = node;
	return (1);
}
