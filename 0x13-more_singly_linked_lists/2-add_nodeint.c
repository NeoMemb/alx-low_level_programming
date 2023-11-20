#include "lists.h"
/**
 * add_nodeint - add int to the beginning of node
 * @head: double pointer to the end of ptr
 * @n: the ibt to be stored in the address
 * Return: the address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
