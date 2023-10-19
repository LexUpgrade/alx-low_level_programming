#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list_t list
 * @h: A node list
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while (h)
	{
		h = h->next;
		ele++;
	}
	return (ele);
}
