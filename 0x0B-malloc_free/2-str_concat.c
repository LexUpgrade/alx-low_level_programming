#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the legnth of a string
 * @s: string to count
 *
 * Return: length of string.
 */
size_t _strlen(char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: pointer to newly allocated space in memory which
 * contains of s1, followed by the contents of s2, and null terminated,
 * or NULL (on failure).
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t tot_sz, i, j, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	tot_sz = len1 + len2;

	new_str = malloc((tot_sz + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	if (s1)
		for (i = 0; i < len1; i++)
			new_str[i] = s1[i];

	if (s2)
	{
		j = 0;
		for ( ; i < tot_sz; i++)
			new_str[i] = s2[j++];
	}

	new_str[i] = '\0';

	return (new_str);
}
