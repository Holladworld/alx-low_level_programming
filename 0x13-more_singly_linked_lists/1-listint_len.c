#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns all element of listint list
 * @h: listint list elements
 * Return: number of elements of the list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t elem_count;

	for (elem_count = 0; h != NULL; ++elem_count)
	{
		h = h->next;
	}
	return (elem_count);
}
