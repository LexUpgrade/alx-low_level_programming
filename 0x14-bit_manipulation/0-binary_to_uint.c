#include "main.h"

/**
 * binary_to_uint - Converts a base 2 value to base 10.
 * @b: A binary value
 *
 * Return: Base 10 value of b.
 */
unsigned int binary_to_uint(const char *b)
{
	size_t uint = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '1')
			uint = (uint << 1) | 1;
		else if (b[i] == '0')
			uint = (uint << 1);
		else
			return (0);
		i++;
	}
	return (uint);
}
