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
		putchat(48 + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
		}
	}
	putchar('\n');
	return (0);
}
