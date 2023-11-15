#include "main.h"

/**
 * sqrt_rec - Calculated the square root of a given number
 * @x: base
 * @y: exponent
 *
 * Return: The square root of x.
 */
int sqrt_rec(int x, int y)
{
	if (y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (sqrt_rec(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: A number to evaluate
 *
 * Return: The square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_rec(n, 1));
}
