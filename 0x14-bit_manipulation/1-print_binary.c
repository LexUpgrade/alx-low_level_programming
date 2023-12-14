#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print the binary representation of.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int place_holder = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
		_putchar('0');

	while (place_holder)
	{
		if ((place_holder & n) == place_holder)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
		place_holder >>= 1;
	}
}
