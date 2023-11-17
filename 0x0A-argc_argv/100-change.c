#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates and prints the mininum number of coins
 * to make change for an amount of money.
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, count, amt;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);
	if (amt < 0)
	{
		printf("0\n");
		return (0);
	}

	count = 0;
	for (i = 0; i < 5 && amt != 0; i++)
		while (amt >= coins[i])
		{
			amt -= coins[i];
			count++;
		}
	printf("%d\n", count);
	return (0);
}
