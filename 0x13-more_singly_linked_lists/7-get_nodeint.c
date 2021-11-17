#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * get_nodeint_at_index - Return node in the position in
 * the elements of a list_t list.
 * @head: listint_t listint.
 * @index: integer n.
 * Return: Direction of nodes.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int node = 0;

	if (index == 0)
	{
		tmp->next = head;
		head = tmp;
		return (tmp);
	}

	for (node = 0; node < index; node++)
	{
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;

	}
	return (tmp);
}
