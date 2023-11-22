#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a value at aparticular index
 * @head: double pointer to the first node
 * @idx: the index which to insert the next node
 * @n: the velue to  be inserted at the idx
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prev, *new_node;
	unsigned int count;

	count = 0;
	if (*head == NULL && idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	prev = NULL;
	while (ptr != NULL && count < idx)
	{
		prev = ptr;
		ptr = ptr->next;
		count++;
	}
	if (count == idx)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = ptr;
		if (prev != NULL)
		{
			prev->next = new_node;
		}
		else
		{
			*head = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
