#include <unistd.h>

/**
 * main - prints a string
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19", 59);
	return (1);
}
