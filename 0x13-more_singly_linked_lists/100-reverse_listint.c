#include "lists.h"
/**
  * reverse_listint - reverses a listint_t.
  * @head: pointer to pointer of first list element.
  *
  * Return: pointer to first node of reversed list.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *the_next, *previous;

	the_next = NULL;
	previous = NULL;
	while (*head != NULL)
	{
		previous = *head;
		*head = (*head)->next;
		previous->next = temp;
		the_next = previous;
	}
	*head = previous;

	return (*head);
}
