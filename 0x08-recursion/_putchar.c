#include <unistd.h>

/**
 * _putchar - writes a character to the stdout
 * @c: character to print
 *
 * Return: On seccuess 1,
 * -1 if failed, and set errno appropirately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
