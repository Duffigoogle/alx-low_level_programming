#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - for managment of a list
 * @h: poniter
 * Return: m Value Counter.
*/

size_t print_list(const list_t *h)
{
	int m;

	if (h == NULL)
	{
		return (0);
	}

	for (m = 1; h->next != NULL; m++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);

	return (m);
}
