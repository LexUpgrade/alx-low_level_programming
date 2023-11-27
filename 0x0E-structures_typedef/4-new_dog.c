#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @str: String to compute
 *
 * Return: Length of str.
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: String to hold a copy of src
 * @src: String to copy
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner of the dog
 *
 * Return: Pointer to new dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (!name || age < 0 || !owner)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
		return (NULL);

	ptr->name = malloc(_strlen(name) + 1);
	if (ptr->name)
		ptr->name = _strcpy(ptr->name, name);
	else
	{
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	ptr->owner = malloc(_strlen(owner) + 1);
	if (ptr->owner)
		ptr->owner = _strcpy(ptr->owner, owner);
	else
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
