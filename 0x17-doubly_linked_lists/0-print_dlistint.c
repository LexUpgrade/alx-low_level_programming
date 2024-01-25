#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of dlistint_t list.
 * @h: a dlistint_t doubly linked list
 *
 * Return: the number of nodes in h.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
