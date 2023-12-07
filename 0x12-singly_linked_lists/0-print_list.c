#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A type list_t node
 *
 * Return: Number of nodes traversed.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
		count++;
	}
	return (count);
}
