#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked
 * listint_t list.
 * @h: A node list
 *
 * Return: Number of node elements in h.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
