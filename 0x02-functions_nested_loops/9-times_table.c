#include "main.h"

/**
 *times_table - print times
 *Return: void;
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		int a = 0;

		for (j = 0; j < 10; j++)
		{
			printf("%d", a);
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
				if (a + i < 10)
				{
				putchar(' ');
				}
			}
			a += i;
		}
		putchar('\n');
	}
}
