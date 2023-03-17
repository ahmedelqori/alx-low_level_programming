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

	while (a < 10)
	{
		while (b < 10)
		{
			if (a < b)
			{
			putchar(48 + a);
			putchar(48 + b);
			putchar(',');
			putchar(' ');
			}
			b++;
		}
		a++;
	}
	return (0);
}
