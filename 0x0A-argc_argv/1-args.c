#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed.
 *
 * Return: 0 upon success.
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
