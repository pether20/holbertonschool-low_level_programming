#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked lis.
 * @head: listint_t listint.
 * @index: index node.
 * Return: Value 1 succeeded or -1 failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp2;
	unsigned int i;

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	for (i = 0; i + 1 < index; i++)
	{
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	tmp2 = tmp->next->next;
	free(tmp->next);
	tmp->next = tmp2;

	return (1);
}
