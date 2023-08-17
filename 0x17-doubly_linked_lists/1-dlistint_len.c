#include "lists.h"
/**
 * dlistint_len - function to returns the elements in dlistint_t linked list
 * @h: pointer to head of list
 * Return: the address of the new element, or NULL if it failed
 * i.e num_node, the numebr of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_node = 0;

	while (h != NULL)
	{
		num_node++;
		h = h->next;
	}
	if (h == NULL)
		return (num_node);
	return (num_node);
}
