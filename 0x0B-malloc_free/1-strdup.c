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

	if (str == NULL)
		return (NULL);

	s = (char *)malloc((sizeof(str) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	while((s[i] = str[i]))
		i++;

	return (s);
}
