#include "lists.h"
/**
 * free_listp - function to free link
 * @head: head of the list
 * Return: void
 */
void free_listp(list_l **head)
{
	list_l *temp, *new;

	if (head)
	{
		new = *head;
		while ((temp = new) != NULL)
		{
			new = new->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - function that prints a linked list
 * @head: head of linked list
 * Return: nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodez = 0;
	list_l *ptrHead, *new, *sum;

	ptrHead = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(list_l));

		if (!new)
			exit(98);
		new->ptr = (void *)head;
		new->next = ptrHead;
		ptrHead = new;
		sum = ptrHead;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptrHead);
				return (nodez);
			}
		}
		printf("[%p} %d\n", (void *)head, head->n);
		head = head->next;
		nodez++;
	}
	free_listp(&ptrHead);
		return (nodez);
}
