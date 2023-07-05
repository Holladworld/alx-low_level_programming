#include "lists.h"

/**
 * free_listint2 - function to free a link list
 * @head: the head of the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *count;

	if (head)
	{
		count = *head;
		while ((temp = count) != NULL)
		{
			count = count->next;
			free(temp);
		}
		*head = NULL;
	}
}

