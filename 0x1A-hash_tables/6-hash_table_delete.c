#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash tabel
 * @ht: A Hash Table
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *del;
	size_t i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			ptr = ht->array[i];
			while (ptr)
			{
				del = ptr;
				ptr = ptr->next;
				free(del->key);
				free(del->value);
				free(del);
				del = NULL;
			}
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
