#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees all memory spaces used by single linked list
 * head.
 * @head: The node list to free
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
