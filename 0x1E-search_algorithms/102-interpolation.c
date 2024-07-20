#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation Search Algorithm.
 * @array: Pointer to the first element of the array to sought for <value>.
 * @size: The number of elements in <array>.
 * @value: The value to sought for.
 *
 * Return: The first index where <value> is located, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	double f;

	if (array == NULL || size <= 0)
		return (-1);

	low = 0;
	high = size - 1;
	while (low != high)
	{
		f = ((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]);
		pos = (size_t)(low + f);
		printf("Value checked array[%d] ", (int)pos);

		if (pos >= size)
		{
			printf("is out of range\n");
			break;
		}
		else
		{
			printf("= [%d]\n", array[pos]);
			if (array[pos] == value)
				return ((int)pos);
			else if (array[pos] < value)
				low = pos + 1;
			else
				high = pos - 1;
		}
	}
	return (-1);
}
