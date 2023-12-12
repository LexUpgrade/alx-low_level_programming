#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A type listint_t node
 *
 * Return: The number of nodes/
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (-1);

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
