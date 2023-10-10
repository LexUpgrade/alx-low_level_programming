#ifndef _DOG_H_
#define _DOG_H_

/********** LIBRARIES **********/
#define <stdlib.h>

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
	int age;
	char *name;
	char *owner;
};

#endif /* _DOG_H_ */
