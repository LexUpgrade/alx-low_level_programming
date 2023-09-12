#include "main.h"

/**
 * print_last_digit - prints and return the last digit of n
 * @n: number to compute
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
