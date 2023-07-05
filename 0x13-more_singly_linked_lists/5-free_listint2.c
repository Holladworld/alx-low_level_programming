#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees linstint lists
 * @head: the head od the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}
	if (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
