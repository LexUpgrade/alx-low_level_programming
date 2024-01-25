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
	dlistint_t *del, *ptr = *head;
	size_t i = 0;

	if (ptr != NULL)
		while (ptr->prev != NULL)
			ptr = ptr->prev;

	if (*head == NULL)
		return (1);

	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		if (*head == NULL)
		{
			free(del);
		}
		else
		{
			(*head)->prev = NULL;
			free(del);
		}
	}
	else
	{
		while (ptr)
		{
			if (i == index)
				break;
			ptr = ptr->next;
			i++;
		}
		if (i < index)
			return (-1);
		else
		{
			del = ptr;
			ptr = ptr->prev;
			ptr->next = del->next;
			del->next->prev = ptr;
			free(del);
		}
	}
	return (1);
}
