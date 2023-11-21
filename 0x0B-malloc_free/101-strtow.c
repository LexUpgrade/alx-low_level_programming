#include "main.h"
#include <stdlib.h>

/**
 * word_length - Returns the length of the first word in a string
 * @str: string to compute
 *
 * Return: Length of the first word it encountered.
 */
int word_length(char *str)
{
	int len = 0;

	while (str[len] && str[len] != ' ')
		len++;
	return (len);
}

/**
 * word_count - Counts the number of words in a string
 * @str: string to compute
 *
 * Return: Number of words in a string.
 */
int word_count(char *str)
{
	int i, count = 0, len = 0;

	while (str[len])
		len++;
	for (i = 0; i < len; i++)
		if (str[i] != ' ')
		{
			i += word_length(str + i);
			count++;
		}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: String to compute.
 *
 * Return: A pointer to an array of strings(words).
 */
char **strtow(char *str)
{
	int i, j, index = 0, elemt, wrd_len;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	elemt = word_count(str);
	if (elemt == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (elemt + 1));
	if (!words)
		return (NULL);

	for (i = 0; i < elemt; i++)
	{
		while (str[index] == ' ')
			index++;

		wrd_len = word_length(str + index);

		words[i] = malloc(wrd_len + 1);
		if (!words[i])
		{
			for (; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < wrd_len; j++)
			words[i][j] = str[index++];
		words[i][j] = '\0';
	}
	words[i] = NULL;

	return (words);
}
