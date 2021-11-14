#include "lists.h"
#include <stdio.h>

/**
 * list_len - return all the elements of a list_t list.
 * @h: list_t list.
 *
 * Return: Number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
