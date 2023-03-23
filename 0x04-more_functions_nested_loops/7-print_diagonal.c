#include "main.h"

/**
 *print_diagonal -  print \ diagonal
 *@n: input
 *Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		for (i = 1; i <= n; i++)
		{
			int j = 0;

			for (j = 0; j < i ; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		}
	_putchar('\n');
	}
}
