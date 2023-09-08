#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	putchar('\n');

	return (0);
}
