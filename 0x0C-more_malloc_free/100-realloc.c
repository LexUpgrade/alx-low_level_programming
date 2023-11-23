#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc
 * @ptr: Pointer to a memory previously allocated
 * @old_size: size of ptr
 * @new_size: size to reallocate new size for ptr
 *
 * Return: Pointer to the newly allocated memory space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array, *tmp_ptr;
	size_t i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	array = malloc(new_size);
	if (!array)
		return (NULL);

	tmp_ptr = ptr;
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			array[i] = tmp_ptr[i];
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			array[i] = tmp_ptr[i];

	free(ptr);
	return (array);
}
