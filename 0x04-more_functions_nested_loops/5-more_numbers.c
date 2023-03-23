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

	while (i < 10)
	{
		while (j < 15)
		{
			if (j > 10)
			{
				_putchar(48 + j / 10);
				_putchar(48 + j % 10);
			}
			else
			{
				_putchar(48 + j);
			}
		j++;
		}
		_putchar('\n');
	i++;
	}
}
