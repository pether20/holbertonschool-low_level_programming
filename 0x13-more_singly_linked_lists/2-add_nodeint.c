#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - add the elements of a list_t list.
 * @head: list_t list.
 * @n: integer n.
 * Return: Direction of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
