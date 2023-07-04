#include "lists.h"

/**
 * free_list - function to free a list
 * @head: head of linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while ((temp_node = head) != NULL)
	{
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}

