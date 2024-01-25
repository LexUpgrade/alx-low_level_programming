#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A dlistint_t doubly linked list.
 * @index: Index of the node to return.
 *
 * Return: Node derived.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *found, *ptr = head;
	size_t i = 1;

	if (head == NULL)
		return (NULL);

	found = malloc(sizeof(dlistint_t));
	if (found == NULL)
		return (NULL);
	found->prev = NULL;
	found->next = NULL;

	while (ptr->prev != NULL)
		ptr = ptr->prev;

	if (index == 0)
	{
		found->n = ptr->n;
	}
	else
	{
		ptr = ptr->next;
		while (i != index && ptr->next)
		{
			ptr = ptr->next;
			i++;
		}
		if (i < index)
			return (NULL);
		found->n = ptr->n;
	}

	return (found);
}
