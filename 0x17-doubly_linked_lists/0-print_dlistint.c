#include "lists.h"
/**
 * print_dlistint - function to print all element of dlistint_list
 * @h: head of list and its a pointer
 * Return: num_node( the number of nodes)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_node;

	while (h->prev != NULL)
		h = h->prev;
	num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		num_node++;
	}
	if (h == NULL)
		return (num_node);
	return (0);

}

