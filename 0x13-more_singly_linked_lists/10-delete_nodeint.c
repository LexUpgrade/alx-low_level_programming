#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified index from listint_t list.
 * @head: A pointer to listint_t node
 * @index: The index of the node to delete
 * Return: 1 if succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *dl_node;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
	}
	else
	{
		while (i < index)
		{
			ptr = ptr->next;
			if (ptr == NULL)
				return (-1);
			i++;
		}
		dl_node = ptr;
		dl_node = dl_node->next;
		ptr->next = dl_node->next;
		free(dl_node);
	}
	return (1);
}
