#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: size of memory to allocate.
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);

	return ((void *) ptr);
}
