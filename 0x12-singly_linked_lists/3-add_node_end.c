#include "lists.h"

/**
 * add_node_end - add new node at the end of a list
 * @head: head of list
 * @str: string to be stored in list
 * Return: address of the head of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t list;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	for (list = 0; str[list]; list++)
	{
		;
	}
	new_node->len = list;
	new_node->next = NULL;
	temp = *head;

	if (!temp)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
