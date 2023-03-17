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
		alphabet++;
	}
	return (0);
}
