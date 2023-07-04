#include 
/**
 * list_len - print sring and length
 * @h pointer to first element in strin
 * Return - length of list
 */
len_t list_len(const list_t *h)
{
	len_t length = 0;

	while (h)
	{
		h = h->next;
		++size;
	}
	return (size);
}

