#include <stdio.h>

/**
 * main - prints all the arguments passed to it
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
