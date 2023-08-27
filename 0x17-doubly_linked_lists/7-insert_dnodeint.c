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



	if (h == NULL || (idx != 0 && *h == NULL))
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		d = d->next;
		if (d == NULL)
			return (NULL);
	}
	if (d->next == NULL)
		return (add_dnodeint_end(h, n));

	if (d_newnode == NULL)
	{
		return (NULL);
	}

	
	d_newnode->n = n;
	d_newnode->prev = d;
	d_newnode->next = d->next;
	d->next->prev = d_newnode;
	d->next = d_newnode;
	return (d_newnode);
}
		
