#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A dlistint_t doubly linked list.
 * @idx: Insert insert new node
 * @n: Data for new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr = *h;
	size_t i = 0;

	while (ptr->prev != NULL)
		ptr = ptr->prev;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		while (ptr)
		{
			if (i == idx)
				break;
			ptr = ptr->next;
			i++;
		}
		if (i < idx)
			return (new);
		if (ptr->next == NULL)
			new = add_dnodeint_end(h, n);
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev->next = new;
			ptr->prev = new;
		}
	}

	return (new);
}
