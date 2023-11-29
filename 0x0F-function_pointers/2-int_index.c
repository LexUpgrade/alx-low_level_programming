#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array of integer values
 * @size: Size of array
 * @cmp: A function pointer to be used
 *
 * Return: Index of the first element for which the cmp function
 * does not return 0, or -1 if no element matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
