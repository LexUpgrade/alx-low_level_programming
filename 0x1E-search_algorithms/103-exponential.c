#include "search_algos.h"

/**
 * print_array - Prints a subarray of integer values, followed by a new line.
 * @array: Pointer to the first element of the array.
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
 * _binary_search - Searches for a value in a sorted array of integers
 * using the Binary Search Algorithm.
 * @array: Pointer to the first element of the array.
 * @low: Index to the element to start searching.
 * @high: Index to end search.
 * @value: Value to sought for.
 *
 * Return: Index to <value>, otherwise -1.
 */
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) >> 1;
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential Search Algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to sought for.
 *
 * Return: The first index where <value> is located, otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, index = 0;

	if (array == NULL || size <= 0)
		return (-1);

	if (array[index] == value)
		return ((int)index);

	index++;
	while (index < size && array[index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index <<= 1;
	}
	low = index >> 1;
	high = index < size ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (_binary_search(array, low, high, value));
}
