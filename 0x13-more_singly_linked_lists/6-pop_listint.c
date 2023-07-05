#include "lists.h"
/**
 * pop_listint - deletes the head of linked list
 * @head: list head
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	int headNode;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	headNode = (*head)->n;
	temp = (*head);
	*head = (*head)->next;
	free(temp);
	return (headNode);
}
