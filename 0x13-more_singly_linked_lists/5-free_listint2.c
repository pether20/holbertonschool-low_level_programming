#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint - frees memory that listint_t.
 * @head: listint_t listint.
 *
 */
void free_listint2(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
