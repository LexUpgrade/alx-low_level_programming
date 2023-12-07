#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A list_t node
 *
 * Return: Number of elements in single linked list h.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
