#include "hash_tables.h"

/**
 * hash_table_create - Creates a Hash Table
 * @size: The size of ->array
 *
 * Return: A pointer to a hash table, otherwise NULL if any error.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(sizeof(hash_node_t *), size);
	if (table->array == NULL)
		return (NULL);

	return (table);
}
