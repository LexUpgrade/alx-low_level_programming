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

	ptr = *head;
	n = ptr->n;
	*head = (*head)->next;
	ptr->next = NULL;
	free(ptr);

	return (n);
}
