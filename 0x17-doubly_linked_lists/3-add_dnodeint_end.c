#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list
 * @n: num node added integer
 * @head: head of list and is pointer
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *num_node = malloc(sizeof(dlistint_t));

	if (num_node == NULL)
		return (NULL);
	num_node->n = n;
	num_node->next = NULL;

	if (*head == NULL)
	{
		num_node->prev = NULL;
		*head = num_node;
		return (num_node);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = num_node;
	num_node->prev = *head;
	return (num_node);
}

