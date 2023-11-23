#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of first bytes to copy from s2:
 *
 * Return: Pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2 and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j = 0, len1;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	str = malloc(len1 + n + 1);
	if (!str)
		return (NULL);

	for (i = 0; s1[i]; i++, j++)
		str[j] = s1[i];
	for (i = 0; i < n; i++, j++)
		str[j] = s2[i];
	str[j] = '\0';

	return (str);
}
