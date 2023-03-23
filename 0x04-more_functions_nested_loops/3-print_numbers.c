#include "main.h"

/**
 *print_numbers - print from 0 to 9
 *Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(48 + i);
		i++;
	}
	_putchar('\n');
}
