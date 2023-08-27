#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns
 * the nth node of a dlistint_t linked list.
 * @head: pointer to head
 * @index: The start of node or index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *num_node;
	unsigned int h = 0;

	num_node = head;

	h = 0;

	while (num_node && h != index)
	{
	
		num_node = num_node->next;
		h++;
	}
	if (!num_node)
		return (NULL);
	return (num_node);
}

