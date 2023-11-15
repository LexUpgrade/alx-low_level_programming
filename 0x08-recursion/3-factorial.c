#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: Number to factorize
 *
 * Return: Factor of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
