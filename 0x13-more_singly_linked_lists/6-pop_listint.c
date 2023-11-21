#include "lists.h"
/**
 ******/
int pop_listint(listint_t **head)
{
	int numb;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	numb = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (numb);
}
