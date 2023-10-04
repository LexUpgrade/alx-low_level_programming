#include "main.h"
#include <stdlib.h>

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

	len1 = 0;
	while (s1 && s1[len1])
		len1++;
	len2 = 0;
	while (s2 && s2[len2])
		len2++;

	tot_sz = len1 + len2;

	new_str = malloc(sizeof(char) * (tot_sz + 1));

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
