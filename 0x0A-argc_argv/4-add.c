#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a character is a digit or not
 * @str: character to check
 *
 * Return: 1 if digit, 0 otherwise.
 */
int is_digit(char *str)
{
	int flg = 0;
	while (str)
	{
		if (*str >= '0' && *str <= '9')
			flg = 1;
		else
			flg = 0;
		str++;
	}
	if (flg == 0)
		return (flg);
	return (flg);
}

/**
 * main - Prints the addition of all passed positive numbers to the program
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, sum = 0, flg = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		flg = is_digit(argv[i]);
		if (flg)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
