#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: pointer to a list pointer that points to the head
 * @str: pointert ton string that adds as node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	size_t len = 0;

	while (str[len])
		len++;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;

	return (ptr)
}
