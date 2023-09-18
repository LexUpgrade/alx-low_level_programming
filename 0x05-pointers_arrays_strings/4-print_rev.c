#include "main.h"

/**
 * print_rev - writes the string s and a trailing new line in reverse
 * on stdout
 * @s: string to write
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len, i, j;

	i = 0;
	while (s[i] != '0')
		i++;
	len = i;

	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
