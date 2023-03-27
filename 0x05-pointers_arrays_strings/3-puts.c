#include "main.h"

/**
*_puts - print a string
*@str:input
*Return:void
*/

void _puts(char *str)
{
int i = 0;

while (str[i])
{
putchar(str[i]);
i++;
}
putchar('\n');
}
