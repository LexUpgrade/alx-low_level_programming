#ifndef _DOG_H_
#define _DOG_H_

/* STRUCTS */

/**
 * struct dog - Dog's data
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* FUNCTIONS PROTOTYPES */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H_ */
