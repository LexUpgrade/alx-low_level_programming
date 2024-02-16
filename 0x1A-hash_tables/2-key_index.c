#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key to get index value of
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 * in the array of a hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
