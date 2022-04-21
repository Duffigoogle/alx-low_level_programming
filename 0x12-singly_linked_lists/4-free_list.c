#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the list_t list.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *reference;

	if (!head)
		return;

	while (head->next != NULL)
	{
		if (head->str != NULL)
			free(head->str);

		reference = head->next;
		free(head);
		head = reference;
	}

	if (head->str != NULL)
		free(head->str);

	free(head);
}
