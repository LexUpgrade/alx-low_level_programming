#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Print an array of integer values in a given range,
 * followed by a new line.
 * @array: Pointer to the array to print.
 * @beg: Index to start printing.
 * @end: Index to stop printing.
 *
 * Return: void.
 */
void print_array(int *array, size_t beg, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = beg; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integres
 * using the Binary Search Algorithm.
 * @array: Pointer to the array to sought for a value.
 * @size: Size of the array to sought.
 * @value: The value to sought for.
 *
 * Return: The index of <value> in <array> if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
	}
	return (-1);
}
