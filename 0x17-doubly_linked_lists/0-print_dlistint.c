#include "lists.h"
/**
 * print_dlistint - function to print all element of dlistint_list
 * @h: head of list and its a pointer
 * Return: num_node( the number of nodes)
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *)h;
        int num_node;

	while (h != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;

		num_node++;
	}
	if (h == NULL)
		return (0);

	return (num_node);

}

