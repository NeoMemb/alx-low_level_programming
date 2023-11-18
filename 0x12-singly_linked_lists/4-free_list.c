#include "lists.h"
/**
 * free_list - free allocated memory for node
 * @head: pointer to the next node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		free(current->str);
		current = current->next;
	}
}
