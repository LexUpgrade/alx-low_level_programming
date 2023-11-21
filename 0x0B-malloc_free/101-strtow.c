#include "main.h"
#include <stdlib.h>

/**
 * word_length - Returns the length of a word in a string it encounters
 * @str: String to compute.
 *
 * Return: Length of the first word in str.
 */
int word_length(char *str)
{
	int i = 0, len = 0;

	while (str[i] && str[i] != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * word_count - Counts the number of words in a string
 * @str: String to compute
 *
 * Return: Number of words.
 */
int word_count(char *str)
{
	int i, count;

	count = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			(str[i + 1] != ' ') ? count-- : count;
		}
	}
	return (count);
}
/**
 * strtow - Splits a string into words
 * @str: String to split.
 *
 * Return: A pointer to an array of strings.
 */
char **strtow(char *str)
{
	int i, j, wrd_cnt, wrd_len = 0, index = 0;
	char **str_arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	wrd_cnt = word_count(str);
	if (wrd_cnt == 0)
		return (NULL);

	str_arr = malloc(sizeof(char *) * (wrd_cnt + 1));
	if (!str_arr)
		return (NULL);

	for (i = 0; i < wrd_cnt; i++)
	{
		while (str[index] == ' ')
			index++;

		wrd_len = word_length(str + index);

		str_arr[i] = malloc(wrd_len + 1);

		if (!str_arr[i])
		{
			for (; i >= 0; i--)
				free(str_arr[i]);
			free(str_arr);
			return (NULL);
		}

		for (j = 0; j < wrd_len; j++)
			str_arr[i][j] = str[index++];
		str_arr[i][j] = '\0';
	}

	str_arr[i] = '\0';
	return (str_arr);
}
