#ifndef _DOG_H_
#define _DOG_H_

/********** LIBRARIES **********/
#include <stdlib.h>

/********** STRUCTS **********/
/**
 * struct dog - carry a dog data
 * @name: Dog breed
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Description: Carries dog informations.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/********** TYPEDEFs **********/
/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

/********** FUNCTIONS **********/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
