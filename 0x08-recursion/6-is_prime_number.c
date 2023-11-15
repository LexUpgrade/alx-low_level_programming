#include "main.h"

/**
 * is_divisible - checks if x is divisible by y
 * @x: base
 * @y: divisor
 *
 * Return: 1 if x is divisible by y, 0 otherwise.
 */
int is_divisible(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (y == x / 2)
		return (1);
	return (is_divisible(x, y + 1));
}
/**
 * is_prime_number - checks if a number is a prime
 * @n: Number to check
 *
 * Return: 1 if n is Prime, 0 othewise.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_divisible(n, div + 1));
}
