#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to compute
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i, j;
	char chr[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	i = 0;
	while (str[i] != '\0')
	{

		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		for (j = 0; j < 13; j++)
			if (str[i] == chr[j])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
		i++;
	}

	return (str);
}
