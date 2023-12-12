#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node's data(n).
 * @head: Pointer to the address of linked list head.
 *
 * Return: The head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = (*head)->next;
	num = ptr->n;
	ptr->next = NULL;
	free(ptr);

	return (num);
}
