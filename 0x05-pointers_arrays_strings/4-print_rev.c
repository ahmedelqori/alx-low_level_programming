#include "main.h"

/**
* print_rev - print in reverse
* @s:input
* Return : void
*/

void print_rev(char *s)
{
int i = 0;

while (s[i])
{
i++;
}
i -= 1;
while (i >= 0)
{
putchar(s[i]);
i--;
}
putchar('\n');
}
