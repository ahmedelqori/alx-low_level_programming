#include <stdio.h>
/**
 *main - use for and id
 *Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');

	return (0);
}
