#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Number of arguments passed
 * @av: Array of arguments passed
 *
 * Return: pointer to a new string (on Success), or NULL (on failure).
 */
char *argstostr(int ac, char **av)
{
	int chr, i, j, len;
	char *str;

	chr = 0;
	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((sizeof(char) * len) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[chr++] = av[i][j];
		str[chr++] = '\n';
	}

	str[chr] = '\0';

	return (str);
}

