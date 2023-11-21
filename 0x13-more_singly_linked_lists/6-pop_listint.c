#include "lists.h"
/**
 * pop_listint - pop out hte first node in a linkedlist
 * @head: doble pointer to the poped out node
 * Return: the data of the first node
 */
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
