#include "main.h"

/**
 * _pow_recursion - Calculate the value of x rasied to the power of y.
 * @x: Number base
 * @y: Exponent
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x *= _pow_recursion(x, y - 1));
}
