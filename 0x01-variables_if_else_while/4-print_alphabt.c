#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except 'q' and 'e',
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		if (chr != 'e' && chr != 'q')
			putchar(chr);
	putchar('\n');

	return (0);
}
