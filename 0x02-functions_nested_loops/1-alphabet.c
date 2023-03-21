#include "main.h"

/**
 *print_alphabet -  print alphabet
 *Return: void
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
