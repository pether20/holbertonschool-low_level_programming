valgrind ./f #include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint2 - frees memory that listint_t.
 * @head: listint_t listint.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
