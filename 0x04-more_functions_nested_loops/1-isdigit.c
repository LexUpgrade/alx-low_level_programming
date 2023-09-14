#include "main.h"

/**
 * _isdigit - checks if passed argument is a digit
 * @c: argument passed
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
