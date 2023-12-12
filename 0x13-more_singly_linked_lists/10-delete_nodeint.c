#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t
 * linked list.
 * @head: A type listint_t linked list.
 * @idx: Where the node that should be deleted.
 *
 * Return: 1 if is succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *del_node;
	size_t i = 1;

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
		del_node = ptr;
		del_node = del_node->next;
		ptr->next = del_node->next;
		free(del_node);
	}
	return (1);
}
