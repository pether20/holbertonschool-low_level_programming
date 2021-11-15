#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - return the direction of the elements of a list_t list.
 * @head: list_t list.
 * @str: Pointer to string.
 * Return: Direction of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
