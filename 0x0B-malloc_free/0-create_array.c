#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char,
 * and initializes it with a special char.
 * @size: size of array
 * @c: character for initialization
 *
 * Return: pointer to array (Success), NULL if fail to allocate.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = (char*)malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}

