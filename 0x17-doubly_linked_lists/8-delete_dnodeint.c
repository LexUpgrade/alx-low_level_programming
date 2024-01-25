#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index of a
 * dlistint_t linked list.
 * @head: A dlistint_t doubly linked list.
 * @index: Index of node to delete from head.
 *
 * Return: 1 on Success, otherwise -1 upon failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *del = *head;
	size_t i = 0;

	if (del != NULL)
	{
		while (del->prev)
			del = del->prev;
	}
	else
		return (-1);

	while (del)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = del->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				ptr->next = del->next;
				if (del->next != NULL)
					del->next->prev = ptr;
			}
			free(del);
			return (1);
		}
		ptr = del;
		del = del->next;
		i++;
	}

	return (-1);
}
