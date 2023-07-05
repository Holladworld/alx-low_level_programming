#include "lists.h"
/**
 * sum_listint - return sum of all data of linked list(file 03 & 05)
 * @head: head of listint_t list
 * Return: the sum of data n
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
