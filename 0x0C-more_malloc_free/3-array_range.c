#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers and fill it with value
 * from min through max.
 * @min: Minimum integer value to include and start insertion.
 * @max: Maximum integer value to include and stop insertion.
 *
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int diff, i;
	int *array;

	if (min > max)
		return (NULL);

	diff =  max - min + 1;

	array = malloc(sizeof(int) * diff);
	if (!array)
		return (NULL);

	for (i = 0; i < diff; i++)
		array[i] = min++;

	return (array);
}
