#include <stdio.h>

/**
 * main - Prints in reverse the alphabets in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
		putchar(chr);
	putchar('\n');

	return (0);
}
