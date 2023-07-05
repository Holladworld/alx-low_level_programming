#include "lists.h"
/**
 * insert_nodeint_at_index - function that insert new node at a position
 * @head: head of list
 * @idx: index (0), where the new node will be added
 * @n: value of new node to be added
 * Return: pointer to new node, or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNodeAddr = malloc(sizeof(listint_t));
	listint_t *Temp = *head;
	unsigned int node;

	if (newNodeAddr == NULL)
	{
		return (NULL);
	}
	newNodeAddr->n = n;
	if (idx == 0)
	{
		newNodeAddr->next = *head;
		*head = newNodeAddr;
		return (newNodeAddr);
	}
	for (node = 0; Temp; ++node)
	{
		if (node == idx - 1)
		{
			newNodeAddr->next = Temp->next;
			Temp->next = newNodeAddr;
			return (newNodeAddr);
		}
		Temp = Temp->next;
	}
	free(newNodeAddr);
	return (NULL);
}
