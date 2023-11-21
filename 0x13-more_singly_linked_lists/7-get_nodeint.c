#include "lists.h"
/**
 * get_nodeint_at_index - get the index of node
 * @head: The beginning of the node
 * @index: the index of the node
 * Return: the value of node, which the index is checked
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int tar_ind;

	tar_ind = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	while (ptr != NULL)
	{
		if (tar_ind == index)
		{
			return (ptr);
		}
		tar_ind++;
		ptr = ptr->next;
	}
	return (NULL);
}
