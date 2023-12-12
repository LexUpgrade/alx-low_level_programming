#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the address previously allocated.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
}
