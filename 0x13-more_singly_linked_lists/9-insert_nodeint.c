#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of head.
 * @idx: index of the list where the new node
 * should be added. Index starts at 0.
 * @n: value of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *reference;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (!*head && idx == 0)
	{
		*head = new_node;
		return (*head);
	}

	reference = *head;

	while (reference)
	{
		if (idx == 0)
		{
			new_node->next = reference;
			*head = new_node;
			return (new_node);
		}
		if (count == (idx - 1))
		{
			new_node->next = reference->next;
			reference->next = new_node;
			return (new_node);
		}
		reference = reference->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
