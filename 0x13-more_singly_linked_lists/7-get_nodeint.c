#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A listint_t linked list.
 * @index: The index of head.
 *
 * Return: Returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *nth_node;
	size_t i = 0;

	nth_node = malloc(sizeof(listint_t));
	if (!nth_node)
		return (NULL);

	ptr = head;
	while (ptr)
	{
		if (i == index)
		{
			nth_node->n = ptr->n;
			nth_node->next = NULL;
			return (nth_node);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
}
