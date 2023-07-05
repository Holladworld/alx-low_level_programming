#include "lists.h"
/**
 * reverse_listint - function to reverse listint list
 * @head: head of list
 * Return: pointer to the first node of reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *rev = NULL;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		temp->next = rev;
		rev = temp;
	}
	*head = rev;
	return (*head);
}

