#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to an decimal value to manipulate
 * @index: Index of a bit to set to 0
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int get_index;
	unsigned long int i;

	if (index > 64)
		return (-1);

	get_index = index;
	for (i = 1; get_index > 0; get_index--, i *= 2)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
