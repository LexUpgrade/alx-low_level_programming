#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates character c in string s
 * @s: string to search
 * @c: The character to search for
 *
 * Return: pointer to the first occurrence of character c in str,
 * or NULL if character not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&(s[i]));
		i++;
	}
	return (NULL);
}
