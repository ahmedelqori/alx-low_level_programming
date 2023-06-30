#include "lists.h"

/**
 *print_list - print node in this list
 *@h: linked list
 *Return: Length  of List
 */
size_t print_list(const list_t *h)
{
	const list_t *head = h;
	int length = 0;

	if (head == NULL)
	{
		return  (0);
	}
	while (head)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		head = head->next;
		length++;
	}
	return (length);
}
