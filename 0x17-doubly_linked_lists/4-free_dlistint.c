#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t doubly linked list.
 * @head: list to free
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
