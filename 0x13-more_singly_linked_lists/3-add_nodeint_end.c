#include "lists.h"
/**
 * add_nodeint_end - add new node to end of list
 * @head: head of lists
 * @n: element to be added
 * Return: address of newly added node to list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp;

	(void)temp;

	if (!newNode)
	{
		return (NULL);
	}
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (*head);
}


