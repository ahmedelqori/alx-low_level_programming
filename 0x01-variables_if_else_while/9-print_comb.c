#include <stdio.h>
/**
 * main - print comb
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i < 9)
		{
			putchar(48 + i);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(48 + i);
			putchar('$')
		}
	}
	putchar('\n');
	return (0);
}
