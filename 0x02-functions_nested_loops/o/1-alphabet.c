#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase on stdout
 * Followed by a new line
 */
void print_alphaber(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
