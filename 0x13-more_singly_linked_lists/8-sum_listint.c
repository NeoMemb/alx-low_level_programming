#include "lists.h"
/**
 * sum_listint - sum every int of a node in a list
 * @head: pointer to the first node
 *
 * Return: sum, the sum of all the int
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
