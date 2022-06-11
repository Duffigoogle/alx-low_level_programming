#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at the specified index
 * @head: The head of the list
 * @index: The index of the node to delete, starting at 0
 *
 * Return: 1 if successful, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp_node = *head;

	if (!head || !(*head))
		return (-1);

	for (i = 0; i < index; i++)
	{
		temp_node = temp_node->next;
		if (temp_node == NULL)
			return (-1);
	}

	if (index == 0)
	{
		if (temp_node->next)
			temp_node->next->prev = NULL;
		*head = temp_node->next;
	}
	else
	{
		if (temp_node->next)
			temp_node->next->prev = temp_node->prev;
		if (temp_node->prev)
			temp_node->prev->next = temp_node->next;
	}

	free(temp_node);
	return (1);
}
