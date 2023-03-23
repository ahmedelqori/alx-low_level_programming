#include "main.h"

/**
 *print_line - print with ('-')
 *@n: input
 *Return Void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		i = 0;

		while (i < n)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
