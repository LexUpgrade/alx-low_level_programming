#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A type listint_t linked list.
 * @idx: Index to insert new node
 * @n: Data for new insertion.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new_node;
	size_t i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	ptr = *head;
	while (ptr && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->next = ptr->next;
			ptr->next = node;
			return (new_node);
		}
		else
			ptr = ptr->next;
		i++;
	}
	return (NULL);
}
