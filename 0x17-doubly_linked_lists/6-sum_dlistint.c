#include "lists.h"
/**
 * sum_dlistint - funtio toperfor su of doublelinked list
 * @head: pointer tohead
 * Return: sum of double linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_of = 0;


	dlistint_t *current = head;

	if (current == NULL)
		return (0);

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
		while (current != NULL)
		{
			sum_of += current->n;
			current = current->next;
		}
	}
	return (sum_of);
}
