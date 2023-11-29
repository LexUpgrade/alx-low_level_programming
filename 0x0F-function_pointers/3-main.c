#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A simple calculator
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	opr = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(opr) == NULL || opr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opr == 37 || *opr == 47) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opr)(num1, num2));

	return (0);
}
