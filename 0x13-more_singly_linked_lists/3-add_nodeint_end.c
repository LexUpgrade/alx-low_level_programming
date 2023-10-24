#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A node list
 *
 * Return: Address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *ptr;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;

	if (*head == NULL)
	{
		tmp->next = NULL;
		*head = tmp;
	}
	else
	{
		tmp->next = NULL;
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = tmp;
	}

	return (tmp);
}
