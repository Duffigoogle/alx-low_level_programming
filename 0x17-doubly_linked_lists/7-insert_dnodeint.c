#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * in a doubly linked list
 * @h: The head of the list
 * @idx: index of the node to insert
 * @n: data(value) to insert
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *temp_node = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp_node->next == NULL)
				return (add_dnodeint_end(h, n));
			new_node->next = temp_node->next;
			new_node->prev = temp_node;
			temp_node->next->prev = new_node;
			temp_node->next = new_node;
			return (new_node);
		}
		else
			temp_node = temp_node->next;
	}

	return (NULL);
}
