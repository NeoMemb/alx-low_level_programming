#include "lists.h"
/**
 * free_listint2 - free list
 * @head: the beginning of the pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		listint_t *next_ptr = ptr->next;

		free(ptr);
		ptr = next_ptr;
	}
	*head = NULL;
}
