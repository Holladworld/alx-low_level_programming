#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index of list
 * @head: head of list
 * @index: index for the element to be deleted
 * Return: if sucess 1, if failed -1
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node;
	listint_t *temp = *head;
	unsigned int node;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (node = 0; node < index - 1; ++node)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}
	del_node = temp->next;
	temp->next = del_node->next;
	free(del_node);
	return (1);
}
