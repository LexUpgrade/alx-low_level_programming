#include "lists.h"

/**
 * free_listint - Frees memory block previously allocated by listint_t head.
 * @head: Memory area to free.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
