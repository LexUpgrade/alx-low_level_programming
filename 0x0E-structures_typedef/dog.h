#ifndef _DOG_H_
#define _DOG_H_

/* ---------- STRUCTS ---------- */

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

/* ---------- TYPEDEF ---------- */
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* ---------- FUNCTIONS PROTOTYPES ---------- */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
