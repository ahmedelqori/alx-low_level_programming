#include "main.h"

/**
 *jack_bauer - print hour
 *Return: void;
 */
void jack_bauer(void)
{
	int a, b, i, j;

	for (i = 0; i < 3 ; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			for (a = 0; a < 6 ; a++)
			{
				for (b = 0; b < 10; b++)
				{
					int c = a * 10 + b;
					int d = i * 10 + j;

					_putchar(48 + i);
					_putchar(48 + j);
					_putchar(':');
					_putchar(48 + a);
					_putchar(48 + b);
					_putchar('\n');

					if (d == 23 && c == 59)
					{
						return;
					}
				}
			}
		}
	}
}
