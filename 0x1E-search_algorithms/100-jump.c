#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * main - Searches for a value in a sorted array of integers
 * using the Jump Search Algorithm.
 * @array: Pointer to the array to sought for a given value.
 * @size: The number of elements in <array>.
 * @value: The value to sought for in <array>.
 *
 * Return: Index to <value> in <array>, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, idx, jump, i;

	if (!array || size == 0)
		return (-1);

	prev = idx = i = 0;
	jump = (size_t) sqrt((double) size);

	do
	{
		printf("Value checksed array[%lu] = [%d]\n", prev, array[idx]);
		if (array[idx] == value)
			return (idx);
		i++;
		prev = idx;
		idx = i * jump;
	} while (idx < size && array[idx] < value);

	printf("Value found between indexes [%lu] and [%lu]\n", prev, idx);
	for (; prev <= idx && prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
