#include "lists.h"
/**
 * print_listint - prints the data in the list
 * @h: pointer to node, which is also the head of the linked list
 * Return: count, number of data transversed
 */
size_t print_listint(const listint_t *h)
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
