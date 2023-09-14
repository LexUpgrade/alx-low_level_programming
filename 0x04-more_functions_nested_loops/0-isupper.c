#include "main.h"

/**
 * _isupper - checks if c is uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase character, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
