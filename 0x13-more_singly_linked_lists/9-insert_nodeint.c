#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * insert_nodeint_at_index - add the node in position idx of a listint_t list.
 * @head: listint_t listint.
 * @idx: index node.
 * @n: integer n.
 * Return: Direction of nodes.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp = *head, *tmp2;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i + 1 < idx; i++)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	tmp2 = tmp->next;
	tmp->next = new;
	new->next = tmp2;

	return (new);
}
