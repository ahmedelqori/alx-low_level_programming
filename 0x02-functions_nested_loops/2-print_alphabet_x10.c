#include "main.h"

/**
 *print_alphabet_x10 - print alphabet ten times
 *Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
	putchar('\n');
	i++;
	}
}
