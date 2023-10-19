#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: A node to print
 *
 * Return: Length of characters passed.
 */
size_t print_list(const list_t *h)
{
	unsigned int node_sz = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		node_sz += 1;
		h = h->next;
	}

	return (node_sz);
}
