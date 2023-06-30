#include "lists.h"

/**
 *add_node_end - add node to end of linked list
 *@head: head of linked list
 *@str: string
 *Return: new Node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
/*
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	size_t len;
	list_t *tmp;
	char *tmpStr = strdup(str);

	if (node == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	tmp = *head;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	node->str = tmpStr;
	node->len = len;
	node->next = NULL;
	tmp->next = node;
	return (*head);
}
*/
