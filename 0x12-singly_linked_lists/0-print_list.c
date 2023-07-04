#include "lists.h"
/**
 * print_list - print string and length of stirng
 * @h: pointer to the first element
 * Return: list length
 */
size_t print_list(const list_t *h)
{
	size_t list;

	list = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("%d] %s\n", h->len, h->str);
		}
		h = h->next;
		list++;
	}
	return (list);
}
