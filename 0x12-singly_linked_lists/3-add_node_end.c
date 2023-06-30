#include "lists.h"

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

	int len;

	for (len = 0; str[len];)
	{
		len++;
	}
	
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
	list_t *tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	node->str = tmpStr;
	node->len = len;
	node->next = NULL;
	tmp->next = node;
	}
	return (node);
}
