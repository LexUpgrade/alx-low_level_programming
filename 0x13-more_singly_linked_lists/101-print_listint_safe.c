#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A type listint_t linked list.
 *
 * Return: The number of nodes with a loop.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *ptr = NULL;
	size_t num, i = 0;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		i++;
		tmp = tmp->next;
		ptr = head;
		num = 0;
		while (num < i)
		{
			if (tmp == ptr)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (i);
			}
			ptr = ptr->next;
			num++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
