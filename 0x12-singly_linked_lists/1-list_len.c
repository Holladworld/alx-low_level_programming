#include "lists.h"
/**
 * list_len - print sring and length
 * @h pointer: to first element in strin
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		h = h->next;
		++list;
	}
	return (list);
}

