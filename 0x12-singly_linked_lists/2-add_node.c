#include "lists.h"
/**
 * add_node - adds a new node to the begining of list
 * @head: head of linked list
 * @str: string to store in the list
 * Return: address of head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t list;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	list = 0;
	if (str[list])
		list++;
	new_node->len = list;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

