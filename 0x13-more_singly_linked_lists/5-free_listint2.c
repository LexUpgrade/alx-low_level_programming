#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list
 * @head: A node list to free
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;
	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	free(*head);
	*head = NULL;
}
