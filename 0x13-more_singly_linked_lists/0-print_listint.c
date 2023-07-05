#include "lists.h"
#include <stdio.h>

/**
 * print_listint funvtion to print all element of a listint list
 * @h: listint_h element
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0;  h != NULL; ++nodes)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}

