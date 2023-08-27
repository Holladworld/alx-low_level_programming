#include "lists.h"
/**
 * insert_dnodeint_at_index -  function that inserts a
 * new node at a given position.
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *d_newnode = malloc(sizeof(dlistint_t));
	dlistint_t *d = *h;
	unsigned int index;


	if (h == NULL || (idx != 0 && *h == NULL))
		return (NULL);
	if (idx == 0)
	{
		if (d_newnode == NULL)
			return (NULL);
		d_newnode->n = n;
		d_newnode->prev = NULL;

		if (*h == NULL)
			d_newnode->next = NULL;
		else
		{
			d_newnode->next = *h;
			(*h)->prev = d_newnode;
		}
		*h = d_newnode;
		return (d_newnode);
	}
	index = 0;

	while (d->next && index != (idx - 1))
	{
		d = d->next;

		index++;
	}
	if (idx - 1 != index)
		return (NULL);
	d_newnode = malloc(sizeof(dlistint_t));

	if (d_newnode == NULL)
		return (NULL);
	d_newnode->n = n;
	if (d->next)
		d->next->prev = d_newnode;
	d_newnode->prev = d;
	d_newnode->next = d->next;
	d_newnode->next = d_newnode;
	return (d_newnode);
}
		
