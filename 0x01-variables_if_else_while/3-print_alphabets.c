#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and uppercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	for (chr = 'A'; chr <= 'Z'; chr++)
		putchar(chr);
	putchar('\n');

	return (0);
}
