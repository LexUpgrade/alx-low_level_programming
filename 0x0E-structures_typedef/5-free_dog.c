#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory area allocated by dog_t d
 * d: Memory area to free.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(dog);
}
