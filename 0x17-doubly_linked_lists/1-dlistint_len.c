#include "lists.h"

/**
 * dlistint_len - returns the number of nodes/elements in a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of nodes/elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
