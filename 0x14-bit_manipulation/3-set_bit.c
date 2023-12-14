#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Number to manipulate
 * @index: Position to set a bit to 1 in the binary presentation of n
 *
 * Return: 1 if is worked, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
