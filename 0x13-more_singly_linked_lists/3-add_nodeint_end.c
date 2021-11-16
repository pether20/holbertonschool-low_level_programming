#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - add the elements of a list_t list.
 * @head: list_t list.
 * @n: integer n.
 * Return: Direction of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *sig;

	new = malloc(sizeof( listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
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
