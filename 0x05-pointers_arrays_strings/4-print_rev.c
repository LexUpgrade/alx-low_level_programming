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

	len = 0;
	while (s[len++] != '0')
		;

	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);
}
