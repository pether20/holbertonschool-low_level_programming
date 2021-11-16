#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Count all the elements of a list_t list.
 * @h: listint_t list.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
