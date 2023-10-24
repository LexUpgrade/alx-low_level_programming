#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked
 * list.
 * @head: A node list
 * @index: registrar index of listint_t head to return
 *
 * Return: Node (index), or NULL if the index does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *node;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	ptr = head;
	while (ptr)
	{
		if (count == index)
		{
			node->n = ptr->n;
			node->next = NULL;
			return (node);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
