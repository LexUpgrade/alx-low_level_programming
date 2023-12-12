#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A listint_t linked list.
 * @index: The index of head.
 *
 * Return: Returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	size_t i = 0;

	if (head == NULL)
		return (NULL);

	while (i++ != index)
		ptr = ptr->next;
	if (i < index)
		return (NULL);

	return (ptr);
}
