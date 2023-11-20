#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Number of arguments passed
 * @av: Array of arguments passed
 *
 * Return: Pointer to a new string containing all arguments,
 * or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			new_str[k++] = av[i][j];
		new_str[k++] = '\n';
	}

	new_str[k] = '\0';

	return (new_str);
}
