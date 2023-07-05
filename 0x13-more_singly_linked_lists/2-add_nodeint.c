#include "lists.h"
/**
 * add_nodeint - function that adds node to begining of linked list
 * @head: pointer to head of the list
 * @n: integer to be added to list
 * Return: address of the new element or NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = *head;
	}
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
