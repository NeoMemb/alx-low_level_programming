#include "lists.h"
/**
 * delet_nodeint_at_index - deleting a node
 * @head: pointer to the first node
 * @index: the index of node to be deleted, starting from 0
 * Return: 1 if suuccessful, or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head != NULL)
	{
		listint_t *targ_node, *prev;
		unsigned int count;

		count = 0;
		targ_node = *head;
		prev = NULL;
		if (index == 0)
		{
			*head = targ_node->next;
			free(targ_node);
			return (1);
		}
		while (targ_node != NULL && count < index)
		{
			prev = targ_node;
			targ_node = targ_node->next;
			count++;
		}
		if (targ_node == NULL)
		{
			return (-1);
		}
		prev->next = targ_node->next;
		free(targ_node);
		return (1);
	}
	else
	{
		return (-1);
	}
}
