#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * _strlen - returns the length of a string
 * @m: m variable is a pointer to a char type
 * Return: Always 0
 */

int _strlen(const char *m)
{
	int len = 0;

	if (m == NULL)
		return (0);

	while (m[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: poniter initial (to head of list)
 * @str: new string to be added to node
 * Return: pointer, or NULL for failure
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	/*a new pointer last, which position we will advance to the last node*/
	list_t *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	/*check for if my linked list is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		last = *head;
		/*go through the chain of nodes to the last node*/
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
