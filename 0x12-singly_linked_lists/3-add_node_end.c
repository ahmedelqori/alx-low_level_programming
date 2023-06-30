#include "list.h"

/**
 *add_node_end - add node to end of linked list
 *@head: head of linked list
 *@str: string
 *Return: new Node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	char *tmpStr = strdup(str);

	if (node == NULL || str == NULL)
	{
		free(node);
		return (NULL);
	}

	size_t len = 0;

	while (str[len])
	{
		len++;
	}

	list_t *tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	node->str = tmpStr;
	node->len = len;
	node->next = NULL;
	tmp->next = node;

	return (node);
}
