#include "lists.h"

/**
 * sum_listint - Sums all the data(n) of a listint_t linked list.
 * @head: A type listint_t linked list.
 *
 * Return: Sum of all the data(n) of head.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
