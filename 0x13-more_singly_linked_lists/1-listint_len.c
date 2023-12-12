#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A type listint_t node
 *
 * Return: The number of elements in h.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
