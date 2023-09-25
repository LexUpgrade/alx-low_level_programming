#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: string to compute
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, flg;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		flg = 0;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				if (haystack[i + 1] == needle[j + 1])
					flg++;
		}
		if (flg != 0)
			return (&(haystack[i]));
	}
	return (NULL);
}
