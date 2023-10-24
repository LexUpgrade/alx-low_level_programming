#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A node list.
 *
 * Return: The head node's data(n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (n);
}
