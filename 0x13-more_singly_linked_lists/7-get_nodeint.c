#include "lists.h"
/**
 * get_nodeint_at_index - function that returns
 * nth node of a listint_t linked list.
 * @head: head of list
 * @index: nth node
 * Return: pointer to list node or NULL if no index
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes;

	for (nodes = 0; head; nodes++)
	{
		if (nodes == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
