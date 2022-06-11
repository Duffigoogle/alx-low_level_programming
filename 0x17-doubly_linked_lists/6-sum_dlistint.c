#include "lists.h"
/**
 * sum_dlistint - sum of all the data in a doubly linked list
 * @head: The head of list
 * Return: The sum of data/n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_n = 0;

	while (head)
	{
		sum_n += head->n;
		head = head->next;
	}

	return (sum_n);
}
