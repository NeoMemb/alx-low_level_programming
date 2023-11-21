#include "lists.h"
/**
 * add_nodeint_end - add a node at the end
 * @head: pointer to the node we want to append to
 * @n: the int data of the appended node
 * Return: pointer to the next node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
	}
	ptr->next = tmp;
	return (tmp);
}
