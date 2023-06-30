#include "lists.h"

/**
 *list_len - display length of linked list
 *@h: head of linked list
 *Return: length
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}

	return (length);
}
