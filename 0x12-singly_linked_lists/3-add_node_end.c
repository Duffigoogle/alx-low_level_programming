#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - for managment of a list
 * @head: poniter initial
 * @str: new string
 * Return: pointer.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int stringlen = 0;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (head == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (str != NULL)
		new_node->str = strdup(str);

	while (new_node->str[stringlen] != '\0')
		stringlen++;

	new_node->len = stringlen;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (new_node);
}
