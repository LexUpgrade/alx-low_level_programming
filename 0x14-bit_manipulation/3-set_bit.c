#include "main.h"

/**
 * set_bit - Sets a bit at given index to 1
 * @n: Number to set bit in
 * @index: The index to set bit at
 *
 * Return: 1 on success, or -1 on error.
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
