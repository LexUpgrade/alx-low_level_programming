#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @str: String to compute.
 *
 * Return: Number of characters in str.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A type list_t node.
 * @str: Data for insertion.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = *head;

	*head = ptr;

	return (*head);
}
