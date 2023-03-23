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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(48 + j / 10);
			}
				_putchar(48 + j % 10);
		}
		_putchar('\n');
	}
}
