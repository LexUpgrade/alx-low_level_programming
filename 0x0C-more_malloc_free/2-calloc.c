#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Size of array
 * @size: Size of type
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	size_t i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	array = malloc(len);
	if (!array)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = 0x00;

	return ((void *) array);
}
