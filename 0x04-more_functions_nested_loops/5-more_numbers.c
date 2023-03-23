#include "main.h"

/**
 *more_numbers - print form 0 to 14 ten times
 *Return: Void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;

		for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
}
