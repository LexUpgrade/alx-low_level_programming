#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: pointer contain struct data upon (Success),
 * NULL upon (Failure).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
