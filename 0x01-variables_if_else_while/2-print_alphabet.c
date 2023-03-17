#include <stdio.h>
/**
 * main - loop
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		if (alphabet == 'z')
		{
		putchar("\n");
		}
		alphabet++;
	}
	return (0);
}
