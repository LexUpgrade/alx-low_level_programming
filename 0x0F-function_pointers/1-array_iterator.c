#include "function_pointers.h"

/**
 * array_iterator - Uses function pointer in an array iteration
 * @array: Array to iterate
 * @size: Size of array
 * @action: A function pointer
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !size || !action)
		return;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}
