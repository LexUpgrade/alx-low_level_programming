#include "lists.h"

/**
 * find_listint_loop - A Finds the loop in a linked list.
 * @head: A type listint_t linked list.
 *
 * Return: The address of the node where the loop start, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = head;
	listint_t *ptr = head;

	if (!head)
		return (NULL);

	while (tmp && ptr && ptr->next)
	{
		ptr = ptr->next->next;
		tmp = tmp->next;
		if (ptr == tmp)
		{
			tmp = head;
			while (tmp != ptr)
			{
				tmp = tmp->next;
				ptr = ptr->next;
			}
			return (ptr);
		}
	}
	return (NULL);
}
