#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers.
 * array: Pointer to an array of integers.
 * size: Size of <array>.
 * value: The value to search for.
 *
 * Return: The index of <value> in <array>, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
