#include <stdio.h>
/**
 *main - without printf
 *Return: 0
 */

int main(void)
{
	int a, b;

	a = 0;
	b = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a < b)
			{
				putchar(48 + a);
				putchar(48 + b);

				if (a != 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
