#include "main.h"

/**
 *print_triangle - print half triangle
 *@size: input
 *Return: void
 */

void print_triangle(int size)
{
	int i, j, x;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (x = 0; x < i ; x++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
