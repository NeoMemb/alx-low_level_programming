#include "lists.h"
/**
 * listint_len - counts the number of data
 * @h: the header to start counting from
 * Return: count, the number of data
 */
size_t listint_len(const listint_t *h)
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
