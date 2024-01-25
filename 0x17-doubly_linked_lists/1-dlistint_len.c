#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t
 * list
 * @h: a dlistint_t doubly linked list
 *
 * Return: number of nodes in h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr)
		ptr = ptr->next, count++;
	return (count);
}
