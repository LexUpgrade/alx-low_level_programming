#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			num = (num << 1) | 1;
		else if (b[i] == '0')
			num = (num << 1);
		else
			return (0);
	}
	return (num);
}
