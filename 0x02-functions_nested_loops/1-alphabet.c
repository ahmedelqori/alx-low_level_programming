#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10- for print all alphabet
 *Return : void
 */

void print_alphabet_x10(void)
{

	int loop = 0;

	char letter = 'a';

	while (loop <= 10)
	{
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	letter = 'a';
	loop++;
	}

}
/**
 * main - main function
 * Return:0
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
