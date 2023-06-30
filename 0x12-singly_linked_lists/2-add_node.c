#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);

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
		tmp->next = node;
	}
	return *head;

}
