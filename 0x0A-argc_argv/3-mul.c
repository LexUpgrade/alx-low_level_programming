#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies arguement values passed to it.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
