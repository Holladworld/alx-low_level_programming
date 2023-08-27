#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}

