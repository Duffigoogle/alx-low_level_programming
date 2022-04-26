#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to the head of the listint_t list.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *reference = NULL;

	if (!head)
		return;

	while (*head)
	{
		reference = (*head)->next;
		free(*head);
		*head = reference;
	}

	head = NULL;
}
