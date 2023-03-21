#include <stdio.h>
#include "main.h"
/**
 *main- print putchar
 *Return:0
 */

int main(void)
{

	char word[] = "_putchar";

	int letter = 0;

	while (letter < 8)
	{
	putchar(word[letter]);
	letter++;
	}
	putchar('\n');
	return (0);
}
