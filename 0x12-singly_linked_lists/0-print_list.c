#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: A node
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node_sz = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		node_sz++;
		h = h->next;
	}

	return (node_sz);
}
