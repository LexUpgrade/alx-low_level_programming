#include "lists.h"

/**
 * free_listint_safe - Frees a linked list
 * @h: A type listint_t linked list.
 *
 * Return: Number of nodes in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t i = 0;
	int div;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		div = *h - (*h)->next;
		if (div > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;
	return (i);
}
