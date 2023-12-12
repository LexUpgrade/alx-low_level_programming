#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the and of a listint_t list.
 * @head: Pointer to a listint_t list.
 * @n: Data for the creation of a new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = NULL;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
