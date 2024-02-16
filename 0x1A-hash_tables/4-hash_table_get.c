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

	size_t index, i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned const char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (i = index; ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);

	return (NULL);
}
