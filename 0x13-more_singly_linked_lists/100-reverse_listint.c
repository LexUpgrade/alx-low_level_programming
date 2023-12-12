#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a listint_t linked list
 *
 * Return: Pointer to the first node of the reverse linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *tmp;

	if (*head == NULL)
		return (NULL);
	
	tmp = NULL;
	while (*head)
	{
		ptr = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = ptr;
	}
	*head = tmp;
	return (*head);
}
