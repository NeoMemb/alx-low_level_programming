#include <stdio.h>
#include "lists.h"
/**
 * list_len - count number of element
 * @h: the node to start from
 * Return: the count
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
