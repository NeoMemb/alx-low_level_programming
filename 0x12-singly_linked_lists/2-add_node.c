#include "lists.h"
/**
 * add_node - add a new node
 * @head: pointer to the address of the succeeding node
 * @str: pointer to list of string to be stored in a node
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
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
	node->next = *head;
	*head = node;

	return (node);
}
