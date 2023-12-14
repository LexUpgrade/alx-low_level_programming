#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: An unsigned long integer
 * @index: The position of the bit we are to return.
 *
 * Return: The value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;
	return (bit & 1);
}
