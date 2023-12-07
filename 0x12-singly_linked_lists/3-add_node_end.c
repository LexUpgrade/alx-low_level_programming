#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @str: String to compute
 *
 * Return: The number of characters in str.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A type list_t node.
 * @str: Data for insertion.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *node;

	if (str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;

	ptr = *head;

	if (*head == NULL)
		*head = node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}

	return (node);
}
