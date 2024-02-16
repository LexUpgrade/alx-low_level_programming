#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: A Hash Table
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	size_t i;
	int flg = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flg == 1)
				printf(", ");
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
			}
			flg = 1;
		}
	}
	printf("}\n");
}
