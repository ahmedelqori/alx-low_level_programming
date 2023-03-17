#include <stdio.h>
/**
 * main - loop
 * Return: 0
 */

int main(void)
{
	char lower;

	char upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'A')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
