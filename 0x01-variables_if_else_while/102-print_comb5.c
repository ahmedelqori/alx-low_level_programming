#include <stdio.h>
/**
 *main - print comb
 *Return: 0
 */

int main(void)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;

	for (a = 0; a < 10; a++)
	{

		for (b = 0; b < 10; b++)
		{

			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (a + b < c + d)
					{
					putchar(48 + a);
					putchar(48 + b);
					putchar(' ');
					putchar(48 + c);
					putchar(48 + d);
					putchar(',');
					putchar(' ');
					}

				}
			}
		}
	}

	return (0);
}
