#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - return the direction of the elements of a list_t list.
 * @head: list_t list.
 * @str: Pointer to string.
 * Return: Direction of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *sig;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		sig = *head;
		while (sig->next != NULL)
			sig = sig->next;

		sig->next = new;
	}
	return (*head);
}
