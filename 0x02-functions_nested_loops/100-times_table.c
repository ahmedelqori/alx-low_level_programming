#include "main.h"
/**
 *print_times_table- print if  0 < n < 15
 *@n: input
 *Return: 0
 */

void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			int a = 0;

			for (j = 0; j <= n; j++)
			{
				printf("%d", a);

				if (j != n)
				{
					putchar(',');
					putchar(' ');
					if (a + i < 10)
					{
						putchar(' ');
						putchar(' ');
					}
					else if (a + i < 100)
					{
						putchar(' ');
					}
				}
			a += i;
			}
		putchar('\n');
		}
	}
	else if (n == 0)
	{
		printf("%d\n", n);
	}
}
