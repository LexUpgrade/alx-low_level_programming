#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a
 * listint_t list
 * @head: A node list.
 * @n: Data to add at the beginning of the node
 *
 * Return: Address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;

	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
