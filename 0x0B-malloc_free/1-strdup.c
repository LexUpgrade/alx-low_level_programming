#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string str.
 * @str: string to allocate space for
 *
 * Return: pointer to the duplicated string (On Success),
 * NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *s;
	size_t i;
	int len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;
	len -= 1;

	s = (char *)malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	return (s);
}
