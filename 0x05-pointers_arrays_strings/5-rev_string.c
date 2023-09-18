#include "main.h"

/**
 * rev_string - Reverses the string s
 * @s: string to reverse
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char tmp;
	int i, len;

	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1];
		s[len--] = tmp;
	}
}
