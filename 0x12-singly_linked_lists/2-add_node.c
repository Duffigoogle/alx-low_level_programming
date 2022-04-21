#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - for managment of a list
 * @head: poniter initial
 * @str: new string
 * Return: m Value Counter.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int cont;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;

	else
		new_node->next = *head;

	if (str != NULL)
		new_node->str = strdup(str);

	cont = 0;
	while (str[cont] != '\0')
		cont++;

	new_node->len = cont;
	*head = new_node;

	return (*head);
}
