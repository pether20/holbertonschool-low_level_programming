#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Print the sum of all the data (n) of a listint_t.
 * @head: listint_t list.
 *
 * Return: Number of nodes.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
