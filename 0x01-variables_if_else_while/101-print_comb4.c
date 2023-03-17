#include <stdio.h>
/**
 *main - without printf
 *Return: 0
 */

int main(void)
{
	int a, b, c;

	a = 0;
	b = 0;
	c = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a < b && b < c)
				{
					putchar(48 + a);
					putchar(48 + b);
					putchar(48 + c);

					if (a != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
