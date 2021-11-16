#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * pop_listint - add the elements of a end list_t list.
 * @head: list_t list.
 *
 * Return: Value n delete of nodes.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head, *sig;
	int n;

	if (*head == NULL)
		return (0);

	n = tmp->n;
	sig = tmp->next;
	free(tmp);
	*head = sig;

	return (n);
}
