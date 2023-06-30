#include "lists.h"

/**
 *print_list - print node in this list
 *@h: linked list
 *Return: Length  of List
 */
size_t print_list(const list_t *h)
{
	int length = 0;

	if (h == NULL)
	{
		putchar('\n');
	}
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		length++;
	}
	return (length);
}
