#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n) of a dlistint_t list.
 * @head: A dlistint_t doubly linked list.
 *
 * Return: Sum of all data(n) in head
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == 0)
		return (sum);

	while (head->prev != NULL)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
