#include "main.h"
#include <stdlib.h>

/**
 * get_bit - Gets a bit at index
 * @n: The number to get bit from
 * @index: The index where the bit get at
 *
 * Return: The value of the bit or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);

	value = n >> index;
	return (value & 1);
}
