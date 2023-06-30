#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	
	size_t len;
	
	node->str = strdup(str);
	
	if (str == NULL || node == NULL)
	{
		free(node);
		return (NULL);
	}
	for (len = 0; str[len]; len++);

	node->len = len;

	node->next = *head;

	*head = node;

	return (node);

}
