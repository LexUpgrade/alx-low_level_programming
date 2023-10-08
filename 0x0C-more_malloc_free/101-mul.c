#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string contains a non-digit char
 * @str: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise.
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - calculates length of a string
 * @str: string to evaluate
 *
 * Return: length of str.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * _error - handles errors
 */
void _error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: Always 0 upon (Success).
 */
int main(int argc, char **argv)
{
	char *str1, *str2;
	int len, len1, len2, rmd, digit1, digit2, *result, i, flg = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		_error();
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len = len1 + len2;
	result = malloc(sizeof(int) * (len + 1));
	if (!result)
		return (1);
	for (i = 0; i <= len; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = str1[len1] - '0';
		rmd = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			digit2 = str2[len2] - '0';
			rmd += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = rmd % 10;
			rmd /= 10;
		}
		if (rmd > 0)
			result[len1 + len2 + 1] += rmd;
	}
	for (i = 0; i < len; i++)
	{
		if (result[i])
			flg = 1;
		if (flg)
			_putchar(result[i] + '0');
	}
	if (!flg)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
