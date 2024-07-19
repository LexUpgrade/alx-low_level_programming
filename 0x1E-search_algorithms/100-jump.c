#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump Search Algorithm.
 * @array: Pointer to the array to sought for a given value.
 * @size: The number of elements in <array>.
 * @value: The value to sought for in <array>.
 *
 * Return: Index to <value> in <array>, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int prev, idx, jump, i;

	if (array == NULL || size == 0)
		return (-1);

	prev = idx = -;
	i = 0;
	jump = (int) sqrt((double) size);

	do {
		printf("Value checked array[%d] = [%d]\n", prev, array[idx]);
		if (array[idx] == value)
			return (idx);
		i++;
		prev = idx;
		idx = i * jump;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, idx);
	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
