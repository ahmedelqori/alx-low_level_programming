#include <stdio.h>
/**
 *main - user if and else and while
 *Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 54; i++)
	{
		if (i < 10 || i > 48)
		{
		putchar(48 + i);
		}
	}
	putchar('\n');
	return (0);
}
