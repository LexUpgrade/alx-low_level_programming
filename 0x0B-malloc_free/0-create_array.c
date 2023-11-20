#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it
 * with a specific char.
 * @size: Size of array to allocate
 * @c: Character to fill.
 *
 * Return: Pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size <= 0)
		return (NULL);

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
