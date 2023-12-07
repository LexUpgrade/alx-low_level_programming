#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A type list_t list previously created
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	if (head == NULL)
		return;
	else
		while (head != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr->str);
			free(ptr);
		}
	free(head);
}
