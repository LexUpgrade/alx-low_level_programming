#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data (n) of a
 * listint_t list
 * @head: Node to sum all the datas in it
 *
 * Return: Sum of all the integer values in a listint_t list.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	ptr = NULL;
	return (sum);
}
