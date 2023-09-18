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
	int len, i;

	len = 0;
	while (s[len++] != '0')
		;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
