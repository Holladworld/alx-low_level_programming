#include "lists.h"
/**
 * free_listint - function that frees linked list
 * @head: head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

