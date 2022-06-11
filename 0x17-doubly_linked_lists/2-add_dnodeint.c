#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw_node;

	if (head == NULL)
		return (NULL);

	nw_node = malloc(sizeof(dlistint_t));
	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;

	nw_node->next = *head;
	nw_node->prev = NULL;

	if (*head)
		(*head)->prev = nw_node;

	*head = nw_node;

	return (nw_node);
}
