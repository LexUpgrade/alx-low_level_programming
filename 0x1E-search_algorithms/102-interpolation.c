#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation Search Algorithm.
 * @array: Pointer to the first element of the array to sought for <value>.
 * @size: Number of elements in <array>.
 * @value: The value to sought for.
 *
 * Return: The first index where <value> is located in <array>,
 * otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL || size == 0)
		return (-1);

	low = 0, high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	
	if (pos >= size)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
	} else {
		for (; pos <= high; pos++)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] == value)
				return ((int)pos);
		}
	}

	return (-1);
}
