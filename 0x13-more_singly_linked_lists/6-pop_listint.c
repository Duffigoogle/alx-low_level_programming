#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer of head node.
 * Return: the head nodes data (n).
 * if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int removed = 0;

	if (*head == NULL)
		return (removed);

	if (*head == NULL)
		return (removed);

	temp = *head;
	removed = temp->n;
	/*make head point to the next element*/
	*head = (*head)->next;
	free(temp);

	return (removed);
}
