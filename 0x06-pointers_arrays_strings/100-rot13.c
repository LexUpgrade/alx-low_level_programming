#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: string to encode
 *
 * Return: pointer to string s.
 */
char *rot13(char *s)
{
	int i, j;

	char hf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char hf2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; hf[j] != '\0'; j++)
		{
			if (s[i] == hf[j])
			{
				s[i] = hf2[j];
				break;
			}
		}
	}

	return (s);
}
