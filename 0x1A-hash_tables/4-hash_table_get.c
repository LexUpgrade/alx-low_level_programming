#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: A Hash Table
 * @key: A key for retrieval
 *
 * Return: Value associated with 'key', or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	size_t index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned const char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && (strcmp(node->key, key) != 0))
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
