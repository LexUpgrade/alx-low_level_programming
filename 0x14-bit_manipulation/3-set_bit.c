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
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
