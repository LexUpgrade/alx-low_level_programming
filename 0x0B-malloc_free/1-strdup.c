#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String to duplicate
 *
 * Return: Pointer to duplicated string, or NULL if failed.
 */
char *_strdup(char *str)
{
	int i, len;
	char *new_str;

	if (!str)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];
	new_str[i] = '\0';

	return (new_str);
}
