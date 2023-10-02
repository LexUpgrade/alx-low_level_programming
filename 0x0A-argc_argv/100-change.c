#include <stdio.h>

/**
 * _atoi - converts a string to integer
 * @s: string to convert
 *
 * Return: integer derived.
 */
int _atoi(char *s)
{
	int i, flg, opr, digit, num;

	i = 0, flg = 0, opr = 0, digit = 0, num = 0;

	while (s[i] != '\0' && flg == 0)
	{
		if (s[i] == '-')
			++opr;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (opr % 2)
				digit = -digit;
			num = num * 10 + digit;
			flg = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			flg = 0;
		}
		i++;
	}
	if (flg == 0)
		return (0);
	return (num);
}

/**
 * main - prints the mininum number of coins to make change
 * for an amount of money.
 * @argc: Number of arguments passed.
 * @argv: Array of pointers
 *
 * Return: 0 (Success), 1 (Error).
 */
int main(int argc, char *argv[])
{
	int change[5] = {25, 10, 5, 2, 1};
	int i, count, num;

	count = 0;
	i = 0;
	if (agrc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = _atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= change[i])
		{
			num -= change[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
