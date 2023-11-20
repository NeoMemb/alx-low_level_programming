#include "lists.h"
/**
 *****/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	tmp = malloc(sizeof(listint_t));
	ptr = *head;
	tmp->n = n;
	tmp->next = NULL;
	if (ptr->next == NULL)
	{
		ptr->next = tmp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	
	return (tmp);
}
