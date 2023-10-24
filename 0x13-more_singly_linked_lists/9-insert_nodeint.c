#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A node list.
 * @idx: Position for insertion
 * @n: Data to insert
 *
 * Return: Address of the new new, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *node;
	unsigned int i = 1;

	if (*head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = (*head)->next;
		*head = node;
		return (*head);
	}

	ptr = *head;
	while (*head)
	{
		if (i == idx)
		{
			node->next = (*head)->next;
			(*head)->next = node;
			*head = ptr;
			return (*head);
		}
		i++;
		*head = (*head)->next;
	}
	return (NULL);
}
