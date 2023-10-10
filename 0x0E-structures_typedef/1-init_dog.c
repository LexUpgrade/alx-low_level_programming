#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d - pointer of struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @Owner: Name of the owner
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
