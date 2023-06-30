#include "lists.h"

/**
 *add_node - function for add node to beginning of list
 *@str: string
 *@head: head of linked list
 *Return: head of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	size_t len;

	char *tmp = strdup(str);

	if (str == NULL || node == NULL)
	{
		free(node);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}
	node->len = len;
	node->str = tmp;
	node->next = *head;
	*head = node;
	return (node);
}
