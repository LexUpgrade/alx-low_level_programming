#include <stdio.h>
int _atoi(char *s);

/**
 * _atoi - converts string to integer
 * @s: string to compute
 *
 * Return: integer in string
 */
int _atoi(char *s)
{
	int i, digit, num, opr, flg;

	i = 0;
	digit = 0;
	num = 0;
	opr = 0;
	flg = 0;

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
 * main - multiplies two numbers
 * @argc: Number of arguments passed
 * @agrv: Array of pointers
 *
 * Return: the products of two passed numbers, or 1 to indicate error,
 * if no arguments were passed.
 */
int main(int argc, char **agrv)
{
	int mul;

	if (argc == 1)
	{
		printf("Eroor\n");
		return (1);
	}
	else
	{
		mul = _atoi(agrv[1]) * _atoi(agrv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
