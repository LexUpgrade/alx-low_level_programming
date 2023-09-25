#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int len;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0' && i < n; i++, len++)
		dest[len] = src[i];
	for (; i < n; i++)
		dest[len] = '\0';

	return (dest);
}
