#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculate the length of a string
 * @str: String to compute
 *
 * Return: Length of string.
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;
	return (len);
}

/**
 * _strcpy - copies a strign from str1 to str2.
 * @dest: string to copy to
 * @src: string to copy
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
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner's name
 *
 * Return: Pointer to dog datas.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
