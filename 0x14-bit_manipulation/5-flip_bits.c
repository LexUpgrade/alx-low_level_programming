#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: First number to flip bit to make equal to second number (m)
 * @m: Second number.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int sep;

	sep = n ^ m;

	while (sep)
	{
		sep &= (sep - 1);
		i++;
	}

	return (i);
}
