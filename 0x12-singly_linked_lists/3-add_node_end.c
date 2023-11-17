#include "lists.h"
/**
 * add_node_end - add a new node to the end
 * @head: pointer to the address of the succeeding node
 * @str: pointer to list of string to be stored in a node
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	unsigned int count;

	for (count = 0; str[count] != '\0'; count++)
	{
	}
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = count;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		list_t *head1 = *head;

		while (head1->next != NULL)
		{
			head1 = head1->next;
		}
		head1->next = node;
	}
	return (node);
}
