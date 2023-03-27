#include "main.h"

/**
* print_rev - print in reverse
* @s:input
* Return : void
*/

void print_rev(char *s)
{
int length = _strlen(s);
while (length >= 0)
{
putchar(s[length]);
length--;
}
}
