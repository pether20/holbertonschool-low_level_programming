#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: listint_t list.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
