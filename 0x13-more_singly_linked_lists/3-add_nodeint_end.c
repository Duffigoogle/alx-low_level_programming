#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer of head.
 * @n: number to store in the new node or
 * element to be added in the list..
 * Return: the address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *reference = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	/* if head is a null pointer, assign new node to it */
	if (*head == NULL)
		*head = new_node;
	else
	{
		reference = *head;

		while (reference->next != NULL)
			reference = reference->next;

		reference->next = new_node;
	}

	return (new_node);
}
