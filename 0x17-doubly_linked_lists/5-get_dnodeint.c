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
	dlistint_t *ptr = head;
	size_t i = 0;

	if (head == NULL)
		return (NULL);

	while (ptr->prev != NULL)
		ptr = ptr->prev;
	
	while (ptr)
	{
		if (i == index)
			break;
		ptr = ptr->next;
		i++;
	}
	if (i != index)
		return (NULL);

	return (ptr);
}
