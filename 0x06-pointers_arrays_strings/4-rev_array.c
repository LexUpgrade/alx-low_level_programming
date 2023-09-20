#include "main.h"

/**
 * reverse_array - reverses an array input
 * @n: size of array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int tmp, i, hf;

	hf = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[hf];
		a[hf--] = tmp;
	}
}
