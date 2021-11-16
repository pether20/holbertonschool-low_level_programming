#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - add the elements of a list_t list.
 * @head: list_t list.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
